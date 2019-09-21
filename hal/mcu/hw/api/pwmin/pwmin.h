/*
 * pwm_in.h
 *
 * Created: 11/09/2019 12:37:40 PM
 *  Author: Loay Ashraf
 */ 


#ifndef PWM_IN_H_
#define PWM_IN_H_

/*------------INCLUDE MCU CONFIGURATION AND REQUIRED HEADER FILES------------*/

#include "pwmin_config.h"
#include "hal/mcu/io/io_defs.h"
#include "hal/mcu/sys/std_types.h"

typedef enum{PWMIN_FALLING,PWMIN_RISING}pwminedge_t;

uint16_t PWMIN_getPulseWidth(pin_t a_pin, uint8_t Edge);
float PWMIN_getFreqHZ(void);
float PWMIN_getFreqKHZ(void);
float PWMIN_getFreqMHZ(void);

#endif /* PWM_IN_H_ */