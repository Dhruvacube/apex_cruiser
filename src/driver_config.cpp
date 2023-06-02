#include "driver_config.h"
#include "Arduino.h"
#include "config.h"

void setup_driver(){
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
};

void forward(int PWML, int PWMR)
{
    digitalWrite(RIGHT1, HIGH);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, HIGH);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, constrain(PWML, 0, PWM_BIT));
    analogWrite(ENB, constrain(PWMR, 0, PWM_BIT));
};
void reverse(int PWML, int PWMR)
{
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, HIGH);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, HIGH);
    analogWrite(ENA, constrain(PWML, 0, PWM_BIT));
    analogWrite(ENB, constrain(PWMR, 0, PWM_BIT));
};
void right(int PWML)
{
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, HIGH);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, constrain(PWML, 0, PWM_BIT));
    analogWrite(ENB, 0);
};
void left(int PWMR)
{
    digitalWrite(RIGHT1, HIGH);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, constrain(PWMR, 0, PWM_BIT));
};
void sharpRightTurn(int PWML, int PWMR)
{
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, HIGH);
    digitalWrite(LEFT1, HIGH);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, constrain(PWML, 0, PWM_BIT));
    analogWrite(ENB, constrain(PWMR, 0, PWM_BIT));
};
void sharpLeftTurn(int PWML, int PWMR)
{
    digitalWrite(RIGHT1, HIGH);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, HIGH);
    analogWrite(ENA, constrain(PWML, 0, PWM_BIT));
    analogWrite(ENB, constrain(PWMR, 0, PWM_BIT));
};
void stop_bot()
{
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
};

void backward_left(int PWML)
{
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, HIGH);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, constrain(PWML, 0, PWM_BIT));
};

void backward_right(int PWMR)
{
    digitalWrite(RIGHT1, LOW);
    digitalWrite(RIGHT2, LOW);
    digitalWrite(LEFT1, LOW);
    digitalWrite(LEFT2, HIGH);
    analogWrite(ENA, constrain(PWMR, 0, PWM_BIT));
    analogWrite(ENB, 0);
};