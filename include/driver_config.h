#ifndef driver_config_H
#define driver_config_H

#include "Arduino.h"

void setup_driver();
void forward(int PWML, int PWMR);
void reverse(int PWML, int PWMR);
void right(int PWML);
void left(int PWMR);
void sharpRightTurn(int PWML, int PWMR);
void sharpLeftTurn(int PWML, int PWMR);
void stop_bot();
void backward_left(int PWML);
void backward_right(int PWMR);

#endif