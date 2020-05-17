/*  
*   Header File for Custom GPIO Driver.
*/
#ifndef GPIO_H
#define GPIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"
#include "stm32f469i_discovery.h"
#include "tft/tft.h"
#include "touchpad/touchpad.h"
#include "system_stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"


typedef struct {
  GPIO_TypeDef* GPIO_Port;
  GPIO_InitTypeDef GPIO_InitSt;
} GPIO_Struct;

void gpio_init(void);
void gpio_pin_init(GPIO_Struct *gpio_object, char gpioPort, int gpioPin, bool direction);
void gpio_state(GPIO_Struct *gpio_object, bool state);
void gpio_direction(GPIO_Struct *gpio_object, bool direction);



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*GPIO_H*/
