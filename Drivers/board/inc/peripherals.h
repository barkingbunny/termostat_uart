/*
 * peripherals.h
 *
 *  Created on: Dec 29, 2016
 *      Author: jakub
 */

#ifndef MODULE_PERIPHERALS_H_
#define MODULE_PERIPHERALS_H_

#define BUT_SCAN_PERIOD 500 //ms
//#define BACKLITE_TIMEOUT 30000 //30s
#define BACKLITE_TIMEOUT 60000 //60s
#define SHOW_TIMEOUT 60000 // 60s - time for showing different screen than default.

typedef enum {	BUT_NONE,
				BUT_1,
				BUT_2,
				BUT_ENC,
				ENCODER
} Buttons;

enum {LED1 = 0,LED2};
void togleLED(uint8_t led);
Buttons checkButtons(void);
uint8_t turnOnHeater(uint32_t temperature);
void turnOffHeater(void);
void backliteOn(void);
void backliteOff(void);


//encoder constant
//#define ENCODER_HALF 128

#endif /* MODULE_PERIPHERALS_H_ */
