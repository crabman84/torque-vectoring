#include "driver.h"

/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follow :
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 180000000
  *            HCLK(Hz)                       = 180000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 4
  *            APB2 Prescaler                 = 2
  *            HSE Frequency(Hz)              = 8000000
  *            PLL_M                          = 8
  *            PLL_N                          = 360
  *            PLL_P                          = 2
  *            PLL_Q                          = 7
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 5
  *         The LTDC Clock is configured as follow :
  *            PLLSAIN                        = 192
  *            PLLSAIR                        = 4
  *            PLLSAIDivR                     = 8
  * @param  None
  * @retval None
  */

// CAN Variables
CAN_InitTypeDef hcan2Init;
CAN_HandleTypeDef hcan2;
CAN_TxHeaderTypeDef TxHeader;
CAN_RxHeaderTypeDef RxHeader;
CAN_FilterTypeDef sFilterConfig;
uint32_t TxMailbox0, TxMailbox1, TxMailbox2;
uint8_t TxData[8];
uint8_t RxData[8];
GPIO_Struct Rx_pin, Tx_pin;


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

static void can_init() {
  // Note that the touchscreen disables the use of CAN1, hence we must use CAN2.

  // Enable CAN2 Clock.
  __CAN2_CLK_ENABLE();

  // Rx Pin is B5, Tx Pin is B13.
  // Defining and enabling Rx pin.
  GPIO_InitTypeDef GPIO_InitStruct_Rx;
  GPIO_InitStruct_Rx.Pin = GPIO_PIN_5;
  GPIO_InitStruct_Rx.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct_Rx.Pull = GPIO_PULLUP;
  GPIO_InitStruct_Rx.Speed = GPIO_SPEED_FAST;
  GPIO_InitStruct_Rx.Alternate = GPIO_AF9_CAN2;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct_Rx);

  // Defining and enabling Tx pin.
  GPIO_InitTypeDef GPIO_InitStruct_Tx;
  GPIO_InitStruct_Tx.Pin = GPIO_PIN_13;
  GPIO_InitStruct_Tx.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct_Tx.Pull = GPIO_NOPULL;
  GPIO_InitStruct_Tx.Speed = GPIO_SPEED_FAST;
  GPIO_InitStruct_Tx.Alternate = GPIO_AF9_CAN2;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct_Tx);



  // Setting up CAN2 configuration.
  hcan2.Instance = CAN2;
  hcan2.Init.Prescaler = 3;
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
  
  //Initialise CAN2.
  if (HAL_CAN_Init(&hcan2) != HAL_OK) {
    // Indicate onboard LED4 when CAN2 has failed to initalise.
    BSP_LED_On(LED4);
  } 
  
  // Configure the CAN filter (No effect in our case).
  sFilterConfig.FilterMode = CAN_FILTERMODE_IDMASK;
  sFilterConfig.FilterScale = CAN_FILTERSCALE_32BIT;
  sFilterConfig.FilterIdHigh = 0x0000;
  sFilterConfig.FilterIdLow = 0x0000;
  sFilterConfig.FilterMaskIdHigh = 0x0000;
  sFilterConfig.FilterMaskIdLow = 0x0000;
  sFilterConfig.FilterFIFOAssignment = CAN_FILTER_FIFO0;
  sFilterConfig.FilterActivation = ENABLE;
  sFilterConfig.FilterBank = 0;
  sFilterConfig.SlaveStartFilterBank = 14;
  
  // Initialise the CAN filter.
  if(HAL_CAN_ConfigFilter(&hcan2, &sFilterConfig) != HAL_OK) {
    // Indicate onboard LED when CAN2 filter has failed to initalise.
    BSP_LED_On(LED3);
  }
    
  // Start the CAN communication.
  if(HAL_CAN_Start(&hcan2) != HAL_OK) {
    // Indicate onboard LED when CAN2 has failed to start.
    BSP_LED_On(LED2);
  }

  // Define Tx Header
  TxHeader.StdId = 0x244;
  TxHeader.IDE = CAN_ID_STD;
  TxHeader.RTR = CAN_RTR_DATA;
  TxHeader.DLC = 2;
  TxHeader.TransmitGlobalTime = DISABLE;

  TxMailbox0 = CAN_TX_MAILBOX0;
  TxMailbox1 = CAN_TX_MAILBOX1;
  TxMailbox2 = CAN_TX_MAILBOX2;

  TxData[0] = 0;
  TxData[1] = 1;
  
  

  
  HAL_StatusTypeDef txSend = HAL_CAN_AddTxMessage(&hcan2, &TxHeader, TxData, &TxMailbox0);

  switch(txSend) {
    case HAL_ERROR:
      led_array_control(4);
      break;
    case HAL_BUSY:
      led_array_control(5);
      break;
    case HAL_TIMEOUT:
      led_array_control(6);
      break;
    case HAL_OK:
      led_array_control(7);
      break;
  }

  if (HAL_CAN_IsTxMessagePending(&hcan2, TxMailbox0) == 0U) {
    gpio_state(&PDOC_led, true); // No pending transmission
  } else {
    gpio_state(&AMS_led, true);
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

  	/* Configure the system clock to 180 MHz */
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
