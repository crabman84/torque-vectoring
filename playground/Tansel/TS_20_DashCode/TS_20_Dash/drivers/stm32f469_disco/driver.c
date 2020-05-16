
#include "stm32f4xx.h"
#include "stm32f469i_discovery.h"
#include "tft/tft.h"
#include "touchpad/touchpad.h"
#include "system_stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"
#include <string.h>


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

// Digital output typedef used by LEDs and other digital outputs.      
typedef struct {
  GPIO_TypeDef* GPIO_Port;
  uint16_t GPIO_Pin;
  GPIO_InitTypeDef GPIO_InitSt;
} digitalOutput;

digitalOutput PDOC_led, AMS_led, IMD_led, BSPD_led, multi1_led, multi2_led, multi3_led, multi4_led;

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


// Initialise structure used by required digital output.
GPIO_InitTypeDef GPIO_InitStruct;

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



// First initalisation of the board's LEDs.
static void led_init(void)
{
  // Initiate LED GPIOs.
  __GPIOA_CLK_ENABLE();
  __GPIOB_CLK_ENABLE();
  __GPIOG_CLK_ENABLE();
  __GPIOH_CLK_ENABLE();
  

  // Assign pin and port to LEDs
  PDOC_led.GPIO_Port = GPIOA;
  PDOC_led.GPIO_Pin = GPIO_PIN_1;

  AMS_led.GPIO_Port = GPIOG;
  AMS_led.GPIO_Pin = GPIO_PIN_13;

  IMD_led.GPIO_Port = GPIOG;
  IMD_led.GPIO_Pin = GPIO_PIN_14;

  BSPD_led.GPIO_Port = GPIOG;
  BSPD_led.GPIO_Pin = GPIO_PIN_9;

  // LED array configuration.
  multi1_led.GPIO_Port = GPIOB;
  multi1_led.GPIO_Pin = GPIO_PIN_14;

  multi2_led.GPIO_Port = GPIOB;
  multi2_led.GPIO_Pin = GPIO_PIN_15;

  multi3_led.GPIO_Port = GPIOH;
  multi3_led.GPIO_Pin = GPIO_PIN_6;

  multi4_led.GPIO_Port = GPIOA;
  multi4_led.GPIO_Pin = GPIO_PIN_7;

  // Configure the LED outputs.
  // This first initialisation needs to occur for all others to work.
  GPIO_InitStruct.Pin = GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
  // -----------------------------------

  // Configure initialisations for LEDs
  AMS_led.GPIO_InitSt.Pin = AMS_led.GPIO_Pin;
  AMS_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  AMS_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  AMS_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(AMS_led.GPIO_Port, &AMS_led.GPIO_InitSt);

  PDOC_led.GPIO_InitSt.Pin = PDOC_led.GPIO_Pin;
  PDOC_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  PDOC_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  PDOC_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(PDOC_led.GPIO_Port, &PDOC_led.GPIO_InitSt);

  IMD_led.GPIO_InitSt.Pin = IMD_led.GPIO_Pin;
  IMD_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  IMD_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  IMD_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(IMD_led.GPIO_Port, &IMD_led.GPIO_InitSt);

  BSPD_led.GPIO_InitSt.Pin = BSPD_led.GPIO_Pin;
  BSPD_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  BSPD_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  BSPD_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(BSPD_led.GPIO_Port, &BSPD_led.GPIO_InitSt);
  
  multi1_led.GPIO_InitSt.Pin = multi1_led.GPIO_Pin;
  multi1_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  multi1_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  multi1_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(multi1_led.GPIO_Port, &multi1_led.GPIO_InitSt);

  multi2_led.GPIO_InitSt.Pin = multi2_led.GPIO_Pin;
  multi2_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  multi2_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  multi2_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(multi2_led.GPIO_Port, &multi2_led.GPIO_InitSt);

  multi3_led.GPIO_InitSt.Pin = multi3_led.GPIO_Pin;
  multi3_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  multi3_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  multi3_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(multi3_led.GPIO_Port, &multi3_led.GPIO_InitSt);

  multi4_led.GPIO_InitSt.Pin = multi4_led.GPIO_Pin;
  multi4_led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
  multi4_led.GPIO_InitSt.Pull = GPIO_PULLUP;
  multi4_led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(multi4_led.GPIO_Port, &multi4_led.GPIO_InitSt);
  

  // This output needs to be set to high for all outputs to work.
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
}


/*
* Basic LED & GPIO control procedure.
* Param:
*   digitalOutput led, used to select output GPIO and pin before setting a state (currently only used for LEDs, hence the name).
*   bool state, used to turn and led on/true or off/false.
* Usage:
*   Used to either turn a digital output on or off, e.g.
*   led_control(BSP_led, true) // To turn on the BSP led.
*/
static void led_control(digitalOutput led, bool state)
{
  if (state) {
    HAL_GPIO_WritePin(led.GPIO_Port, led.GPIO_Pin, GPIO_PIN_SET);
  } else {
    HAL_GPIO_WritePin(led.GPIO_Port, led.GPIO_Pin, GPIO_PIN_RESET);
  }
        
      
}

/*
* Setting LED and GPIO direction.
* Param:
*   digitalOutput led, used to change configurations.
*   bool direction, used to turn determine a direction (true/output, false/input).
* Usage:
*   Used by led_array_control() as certain GPIOs need to be set to inputs for other outputs to work.
*/
static void led_direction(digitalOutput led, bool direction) {
  if (direction) {
    HAL_GPIO_DeInit(led.GPIO_Port, led.GPIO_Pin);
    led.GPIO_InitSt.Pin = led.GPIO_Pin;
    led.GPIO_InitSt.Mode = GPIO_MODE_OUTPUT_PP;
    led.GPIO_InitSt.Pull = GPIO_PULLUP;
    led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(led.GPIO_Port, &led.GPIO_InitSt);
  } else {
    HAL_GPIO_DeInit(led.GPIO_Port, led.GPIO_Pin);
    led.GPIO_InitSt.Pin = led.GPIO_Pin;
    led.GPIO_InitSt.Mode = GPIO_MODE_INPUT;
    led.GPIO_InitSt.Pull = GPIO_NOPULL;
    led.GPIO_InitSt.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(led.GPIO_Port, &led.GPIO_InitSt);
  }
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
    led_direction(multi1_led,true);
    led_control(multi1_led,LED_ARRAY_OUTPUTS[LED_Select][0]);
	}else
	{
		led_direction(multi1_led,false);
	}
	if(LED_ARRAY_DIRECTIONS[LED_Select][1] == 1)
	{
    led_direction(multi2_led,true);
    led_control(multi2_led,LED_ARRAY_OUTPUTS[LED_Select][1]);
	}else
	{
    led_direction(multi2_led,false);
	}
	if(LED_ARRAY_DIRECTIONS[LED_Select][2] == 1)
	{
		led_direction(multi3_led,true);
    led_control(multi3_led,LED_ARRAY_OUTPUTS[LED_Select][2]);
	}else
	{
		led_direction(multi3_led,false);
	}
	if(LED_ARRAY_DIRECTIONS[LED_Select][3] == 1)
	{
		led_direction(multi4_led,true);
    led_control(multi4_led,LED_ARRAY_OUTPUTS[LED_Select][3]);
	}else
	{
		led_direction(multi4_led,false);
	}
}




void hw_init(void)
{
    HAL_Init();

  	/* Configure the system clock to 180 MHz */
  	SystemClock_Config();

  	/*Start up indication*/
  	BSP_LED_Init(LED3);
  	uint8_t i;
  	for (i = 0; i < 8; i++) {
  		BSP_LED_Toggle(LED3);
  		HAL_Delay(50);
  	}

  	tft_init();
  	touchpad_init();
    led_init();
}


void hw_loop(void)
{
    while(1) {
        led_control(PDOC_led,false);
        led_control(AMS_led,false);
        led_control(IMD_led,false);
        led_control(BSPD_led,false);
        HAL_Delay(5);
    		lv_task_handler();
        for (int i = 0; i < 12; i++) {
          led_array_control(i);
          if (i < 4) {
            led_control(PDOC_led,true);
          }

          if ((i < 8) && (i > 4)) {
            led_control(AMS_led,true); 
          }
          
          if ((i < 12) && (i > 8)) {
            led_control(IMD_led,true);
          }
          HAL_Delay(100);
        }
        led_control(BSPD_led,true);
        HAL_Delay(500);
    }
}
