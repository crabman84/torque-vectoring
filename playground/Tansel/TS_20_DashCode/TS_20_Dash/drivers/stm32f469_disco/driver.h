#ifndef DRIVER_H
#define DRIVER_H

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
#include "stm32f4xx_hal_can.h"
#include "gpio.h"

void hw_init(void);
void hw_loop(void);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*DRIVER_H*/
