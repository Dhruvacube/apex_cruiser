#ifndef config_H
#define config_H

#include "Arduino.h"
#include <cmath>

#define LEFT1 GPIO_NUM_15  // motor driver left pin1
#define LEFT2 GPIO_NUM_2   // motor driver left pin1
#define RIGHT1 GPIO_NUM_16 // motor driver right pin1
#define RIGHT2 GPIO_NUM_17 // motor driver right pin1
#define ENA GPIO_NUM_1   // motor driver enable a pin
#define ENB GPIO_NUM_5   // motor driver enable b pin

const uint8_t lcd_addr(0x27);
const uint8_t lcd_cols(20);
const uint8_t lcd_rows(4);

#define buzzer_pin GPIO_NUM_14  // GPIO pin number of the buzzer

#define IR_1 GPIO_NUM_13 // GPIO pin number of the IR sensor
#define IR_2 GPIO_NUM_12 // GPIO pin number of the IR sensor
#define IR_3 GPIO_NUM_14 // GPIO pin number of the IR sensor
#define IR_4 GPIO_NUM_27 // GPIO pin number of the IR sensor
#define IR_5 GPIO_NUM_26 // GPIO pin number of the IR sensor
#define IR_6 GPIO_NUM_25 // GPIO pin number of the IR sensor
#define IR_7 GPIO_NUM_33 // GPIO pin number of the IR sensor
#define IR_8 GPIO_NUM_32 // GPIO pin number of the IR sensor

#define PWM_RES 12 
#define PWM_BIT pow(2, 12) // PWM bit resolution

enum Mode
{
  LUMEN_TR,
  BOTBOLT
};


#endif