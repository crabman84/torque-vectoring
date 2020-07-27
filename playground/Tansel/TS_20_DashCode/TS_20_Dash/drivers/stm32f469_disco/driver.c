#include "driver.h"

// Constants
#define VOLT_MIN            380
#define VOLT_MAX            592
#define ACC_TEMP_MIN				0
#define ACC_TEMP_MAX				80
#define	RINEHEART_TEMP_MIN	0
#define	RINEHEART_TEMP_MAX	80
#define	MOTOR_TEMP_MIN			0
#define	MOTOR_TEMP_MAX			80
#define MOTOR_SPEED_MIN			0
#define MOTOR_SPEED_MAX			6000

// CAN IDs
//AMS
#define AMS_HEARTBEAT_ID  0x300 // Not Used.
#define AMS_DATA_ID       0x301

//Throttle
#define THROTTLE_HEARTBEAT_ID 0x304 // Not Used.
#define THROTTLE_SENSORS_ID   0x305 // Not Used.
#define THROTTLE_OUTPUT_ID    0x306
#define THROTTLE_ERRORS_ID    0x307

//Brake
#define BRAKE_SAFETY_ID 0x30A

//Temp Sensor
#define TEMP_SUMMARY_ID 0x311

//Dash
#define DASH_HEARTBEAT_ID 0x320

//Discharge
#define DISCHARGE_DATA_ID 0x340

//Orion
#define ORION_DATA_ID     0x20B	 		//orion battery data message
#define ORION_CURRENT_ID  0x70B			//orion current // Not Used.

//RMS
#define RMS_ID                    0x200         // RMS Base address
#define RMS_TEMPERATURE_SET_1     RMS_ID + 0xA0 // Not Used.
#define RMS_TEMPERATURE_SET_2     RMS_ID + 0xA1
#define RMS_TEMPERATURE_SET_3     RMS_ID + 0xA2
#define RMS_MOTOR_POSITION_INFO   RMS_ID + 0xA5

// CAN Variables
CAN_HandleTypeDef hcan1;
CAN_HandleTypeDef hcan2;
CAN_TxHeaderTypeDef TxHeader;
CAN_RxHeaderTypeDef RxHeader;
CAN_FilterTypeDef sFilterConfig1, sFilterConfig2;
uint32_t TxMailbox0, TxMailbox1, TxMailbox2;
uint8_t TxData[8];
uint8_t RxData[8];
GPIO_Struct Rx_pin, Tx_pin;

// Program Variables
bool precharge_pressed = 0;
bool drive_pressed = 0;
bool apps_disagree = 0;
bool trailbraking_active = 0;

int ams_state = 0;
int heartbeat_counter = 0;

int16_t	motor_speed = 0;

uint16_t accum_lowest_voltage = 0;
uint16_t motor_highest_temp = 0;
uint16_t rineheart_highest_temp = 0;

float max_accum_temp = 0;

// LEDs used by the disco backboard.
GPIO_Struct PDOC_led, AMS_led, IMD_led, BSPD_led, multi1_led, multi2_led, multi3_led, multi4_led;


// LED Array controls used by the LED array at the top of the board.
const int LED_ARRAY_DIRECTIONS[12][4] = {
	{1,1,0,0},
	{1,1,0,0},
	{1,0,1,0},
	{1,0,1,0},
	{0,1,1,0},
	{1,0,0,1},
	{0,1,1,0},
	{1,0,0,1},
	{0,1,0,1},
	{0,1,0,1},
	{0,0,1,1},
	{0,0,1,1}
};
const bool LED_ARRAY_OUTPUTS[12][4] = {
	{false,true,false,false},
	{true,false,false,false},
	{false,false,true,false},
	{true,false,false,false},
	{false,false,true,false},
	{false,false,false,true},
	{false,true,false,false},
	{true,false,false,false},
	{false,false,false,true},
	{false,true,false,false},
	{false,false,false,true},
	{false,false,true,false}
};

/*
* stm32cube Framework System Clock Configuration.
* Param:
*   None.
* Usage:
*   Called when hardware is being initiated.
*/
static void SystemClock_Config(void)
{
    RCC_ClkInitTypeDef RCC_ClkInitStruct;
    RCC_OscInitTypeDef RCC_OscInitStruct;
    RCC_PeriphCLKInitTypeDef  PeriphClkInitStruct;

    /* Enable Power Control clock */
    __HAL_RCC_PWR_CLK_ENABLE();

    /* The voltage scaling allows optimizing the power consumption when the device is
       clocked below the maximum system frequency, to update the voltage scaling value
       regarding system frequency refer to product datasheet.  */
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /*##-1- System Clock Configuration #########################################*/
    /* Enable HSE Oscillator and activate PLL with HSE as source */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 360;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 7;
    HAL_RCC_OscConfig(&RCC_OscInitStruct);

    /* Activate the Over-Drive mode */
    HAL_PWREx_EnableOverDrive();

    /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
       clocks dividers */
    RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
    HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5);

    /*##-2- LTDC Clock Configuration ###########################################*/
    /* LCD clock configuration */
    /* PLLSAI_VCO Input = HSE_VALUE/PLL_M = 1 MHz */
    /* PLLSAI_VCO Output = PLLSAI_VCO Input * PLLSAIN = 192 MHz */
    /* PLLLCDCLK = PLLSAI_VCO Output/PLLSAIR = 192/4 = 48 MHz */
    /* LTDC clock frequency = PLLLCDCLK / RCC_PLLSAIDIVR_8 = 48/8 = 6 MHz */
    PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_LTDC;
    PeriphClkInitStruct.PLLSAI.PLLSAIN = 192;
    PeriphClkInitStruct.PLLSAI.PLLSAIR = 4;
    PeriphClkInitStruct.PLLSAIDivR = RCC_PLLSAIDIVR_8;
    HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct);
}


/*
* Disco Backboard LED initialisation.
* Param:
*   None.
* Usage:
*   Called when hardware is being initiated.
*/
static void led_init()
{
  gpio_pin_init(&AMS_led, 'G', 13, true);
  gpio_pin_init(&PDOC_led, 'A', 1, true);
  gpio_pin_init(&IMD_led, 'G', 14, true);
  gpio_pin_init(&BSPD_led, 'G', 9, true);
  gpio_pin_init(&multi1_led, 'B', 14, true);
  gpio_pin_init(&multi2_led, 'B', 15, true);
  gpio_pin_init(&multi3_led, 'H', 6, true);
  gpio_pin_init(&multi4_led, 'A', 7, true);
}

/*
* LED Array control procedure.
* Param:
*   int LED_Select, used to select which of the one LEDs you wish to turn on in the LED array.
* Usage:
*   Used for turning on LED array, e.g.
*   ===================
*   oooo oooo oooo oooo
*   ===================
*   
*   led_array_control(5);
*
*   ===================
*   oooo xooo oooo oooo
*   ===================
*/
static void led_array_control(int LED_Select) {
  if(LED_ARRAY_DIRECTIONS[LED_Select][0] == 1)
	{
    gpio_direction(&multi1_led,true);
    gpio_state(&multi1_led,LED_ARRAY_OUTPUTS[LED_Select][0]);
	}else
	{
		gpio_direction(&multi1_led,false);
	}
	if(LED_ARRAY_DIRECTIONS[LED_Select][1] == 1)
	{
    gpio_direction(&multi2_led,true);
    gpio_state(&multi2_led,LED_ARRAY_OUTPUTS[LED_Select][1]);
	}else
	{
    gpio_direction(&multi2_led,false);
	}
	if(LED_ARRAY_DIRECTIONS[LED_Select][2] == 1)
	{
		gpio_direction(&multi3_led,true);
    gpio_state(&multi3_led,LED_ARRAY_OUTPUTS[LED_Select][2]);
	}else
	{
		gpio_direction(&multi3_led,false);
	}
	if(LED_ARRAY_DIRECTIONS[LED_Select][3] == 1)
	{
		gpio_direction(&multi4_led,true);
    gpio_state(&multi4_led,LED_ARRAY_OUTPUTS[LED_Select][3]);
	}else
	{
		gpio_direction(&multi4_led,false);
	}
}


/*
* CAN Initialisation.
* Param:
*   None.
* Usage:
*   Called when hardware is being initiated.
*/
static void can_init() {
  /* NOTE:
  * The touchscreen disables the use of CAN1, hence we must use CAN2.
  * CAN1 is considered the MASTER on the board and defines configurations for other CANS, i.e. CAN2,
  * and so, we must enable it as well.
  */

  // Enable CAN1 & CAN2 Clock.
  __CAN1_CLK_ENABLE();
  __CAN2_CLK_ENABLE();

  // CAN2 GPIO DEFINITIONS: Rx Pin is B5, Tx Pin is B13.
  // Defining and enabling CAN2 Rx pin.
  GPIO_InitTypeDef GPIO_InitStruct_Rx2;
  GPIO_InitStruct_Rx2.Pin = GPIO_PIN_5;
  GPIO_InitStruct_Rx2.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct_Rx2.Pull = GPIO_NOPULL;
  GPIO_InitStruct_Rx2.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct_Rx2.Alternate = GPIO_AF9_CAN2;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct_Rx2);

  // Defining and enabling CAN2 Tx pin.
  GPIO_InitTypeDef GPIO_InitStruct_Tx2;
  GPIO_InitStruct_Tx2.Pin = GPIO_PIN_13;
  GPIO_InitStruct_Tx2.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct_Tx2.Pull = GPIO_NOPULL;
  GPIO_InitStruct_Tx2.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct_Tx2.Alternate = GPIO_AF9_CAN2;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct_Tx2);

  HAL_NVIC_SetPriority(CAN2_RX0_IRQn, 1, 0);
  HAL_NVIC_EnableIRQ(CAN2_RX0_IRQn);
 
  // Setting up CAN2 configuration.
  hcan2.Instance = CAN2;
  hcan2.Init.Prescaler = 11;
  hcan2.Init.Mode = CAN_MODE_NORMAL;
  hcan2.Init.SyncJumpWidth = CAN_SJW_4TQ;
  hcan2.Init.TimeSeg1 = CAN_BS1_11TQ;
  hcan2.Init.TimeSeg2 = CAN_BS2_4TQ;
  hcan2.Init.TimeTriggeredMode = DISABLE;
  hcan2.Init.AutoBusOff = DISABLE;
  hcan2.Init.AutoWakeUp = DISABLE;
  hcan2.Init.AutoRetransmission = DISABLE;
  hcan2.Init.ReceiveFifoLocked = DISABLE;
  hcan2.Init.TransmitFifoPriority = DISABLE;

  // Configure the CAN filter (No effect in our case).
  sFilterConfig1.FilterMode = CAN_FILTERMODE_IDMASK;
  sFilterConfig1.FilterScale = CAN_FILTERSCALE_32BIT;
  sFilterConfig1.FilterIdHigh = 0x0000;
  sFilterConfig1.FilterIdLow = 0x0000;
  sFilterConfig1.FilterMaskIdHigh = 0x0000;
  sFilterConfig1.FilterMaskIdLow = 0x0000;
  sFilterConfig1.FilterFIFOAssignment = CAN_RX_FIFO0;
  sFilterConfig1.FilterActivation = ENABLE;
  sFilterConfig1.FilterBank = 14;
  sFilterConfig1.SlaveStartFilterBank = 14;
  
  //Initialise CAN.
  if ((HAL_CAN_Init(&hcan2) == HAL_OK) ) {
    // Indicate onboard LED4 when CAN has initalised.
    BSP_LED_On(LED4);
  } 
  
  // Start the CAN communication and configure the filter.
  if ((HAL_CAN_Start(&hcan2) == HAL_OK) && (HAL_CAN_ConfigFilter(&hcan2, &sFilterConfig1) == HAL_OK)) {
    // Indicate onboard LED when CAN has started with the filter.
    BSP_LED_On(LED3);
  }

  // Enable Rx notifications.
  if ((HAL_CAN_ActivateNotification(&hcan2, CAN_IT_RX_FIFO0_MSG_PENDING) == HAL_OK)) {
    // Indicate onboard LED when CAN notifcations have been enabled.
    BSP_LED_On(LED2);
  }

  /*// TRANSMIT MESSAGE TEST - START
  // Define Tx Header
  TxHeader.StdId = 0x244;
  TxHeader.IDE = CAN_ID_STD;
  TxHeader.RTR = CAN_RTR_DATA;
  TxHeader.DLC = 8;
  TxHeader.TransmitGlobalTime = DISABLE;

  // Define Tx mailboxes.
  TxMailbox0 = CAN_TX_MAILBOX0;
  TxMailbox1 = CAN_TX_MAILBOX1;
  TxMailbox2 = CAN_TX_MAILBOX2;
  
  // Test transmit data.
  TxData[0] = 0;
  TxData[1] = 1;
  TxData[2] = 1;
  TxData[3] = 0;
  TxData[4] = 1;
  TxData[5] = 0;
  TxData[6] = 0;
  TxData[7] = 0;
  
  // Transmit the data.
  HAL_CAN_AddTxMessage(&hcan2, &TxHeader, TxData, &TxMailbox0);

  // Wait for the transmission to complete.
  while(HAL_CAN_GetTxMailboxesFreeLevel(&hcan2) != 3) {}
  // TRANSMIT MESSAGE TEST - END */

}

/*
* HAL CAN Interrupt Redirection Procedure.
* Param:
*   None.
* Usage:
*   Automatically called when an interrupt is detected on the CAN2 Rx pin.
*   Redirects program to the interrupt callback function.
*/
void CAN2_RX0_IRQHandler(void) { 
  HAL_CAN_IRQHandler(&hcan2);
}

/*
* HAL CAN Interrupt Callback Function.
* Param:
*   CAN_HandleTypeDef pointer, determines which CAN line is calling the interrupt.
*   (Always CAN2 in our case)
* Usage:
*   Automatically called by the interrupt redirection procedure.
*/
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan) {

  // Get Rx message - We do not need to check if it exists as the interrupt implies that something has arrived.
  HAL_CAN_GetRxMessage(hcan, CAN_RX_FIFO0, &RxHeader, RxData);

  // Determine how to handle the data according to its ID.
  switch(RxHeader.StdId) {
    case AMS_DATA_ID:
      ams_state = RxData[0];
      gpio_state(&AMS_led, RxData[1]);
      gpio_state(&IMD_led, RxData[5]);
      break;

    case THROTTLE_OUTPUT_ID:
      precharge_pressed = RxData[1];
      drive_pressed = RxData[2];
      break;

    case THROTTLE_ERRORS_ID:
      apps_disagree = RxData[0];
      trailbraking_active = RxData[1];
      break;

    case TEMP_SUMMARY_ID:   
      max_accum_temp = (float)RxData[1];
      break;

    case ORION_DATA_ID: 
      if ((heartbeat_counter > 2) && (RxHeader.DLC == 7)) {
        accum_lowest_voltage = RxData[5] | (RxData[4] << 8);
      }
			break;

    case RMS_TEMPERATURE_SET_2:
      rineheart_highest_temp = RxData[0] | (RxData[1] << 8);
      break;
    
    case RMS_TEMPERATURE_SET_3:
      motor_highest_temp = RxData[4] | (RxData[5] << 8);
			break;
    
    case RMS_MOTOR_POSITION_INFO:
      motor_speed = RxData[2] | (RxData[3] << 8);
      led_array_control(round(((motor_speed - MOTOR_SPEED_MIN) / MOTOR_SPEED_MAX) * 11));
			break;
    
    case DISCHARGE_DATA_ID:
      if(RxData[0] == 0) {
        gpio_state(&PDOC_led, true);
      } else {
        gpio_state(&PDOC_led, false);
      }
			break;
    
    case BRAKE_SAFETY_ID:
				gpio_state(&PDOC_led, RxData[4]);
			break;
  }
}

/*
* stm32cube Framework Hardware Initation.
* Param:
*   None.
* Usage:
*   Called by the main file to initiate hardware.
*/
void hw_init(void)
{
    // Default HAL library initiation.
    HAL_Init();

  	// Configure the system clock 
  	SystemClock_Config();

  	/*Start up indication*/
  	BSP_LED_Init(LED1);
    BSP_LED_Init(LED2);
    BSP_LED_Init(LED3);
    BSP_LED_Init(LED4);
  	for (int i = 0; i < 6; i++) {
  		BSP_LED_Toggle(LED1);
  		HAL_Delay(25);
      BSP_LED_Toggle(LED2);
      HAL_Delay(25);
      BSP_LED_Toggle(LED3);
      HAL_Delay(25);
      BSP_LED_Toggle(LED4);
      HAL_Delay(25);
  	}
    BSP_LED_Off(LED1);
    BSP_LED_Off(LED2);
    BSP_LED_Off(LED3);
    BSP_LED_Off(LED4);
    
    // Initiate program specific drivers/libraries.
  	tft_init();
  	touchpad_init();
    gpio_init();
    led_init();
    can_init();
}

/*
* stm32cube Framework Hardware Loop.
* Param:
*   None.
* Usage:
*   Called by the main file to begin hardware infinite loop.
*/
void hw_loop(void) {
  while(1) {
    lv_task_handler();
    HAL_Delay(10);
  }
}
