#ifndef CUSTOM_H
#define CUSTOM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions for PCA10040
#define LEDS_NUMBER    1

#define LED_1      22

#define LEDS_ACTIVE_STATE 0

#define LEDS_INV_MASK  LEDS_MASK

#define LEDS_LIST { LED_1 }

#define BSP_LED_0      LED_1

#define BUTTONS_NUMBER 0

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { }

#define SPIM0_SCK_PIN   12  // SPI clock GPIO pin number.
#define SPIM0_MOSI_PIN  14  // SPI Master Out Slave In GPIO pin number.
#define SPIM0_MISO_PIN  13  // SPI Master In Slave Out GPIO pin number.
#define SPIM0_SS_PIN    11  // SPI Slave Select GPIO pin number.

#ifdef __cplusplus
}
#endif

#endif // PCA10040_H
