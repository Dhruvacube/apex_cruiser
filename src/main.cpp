#include <Arduino.h>
#include "BUZZER.h"
#include "config.h"

Buzzer buzzer_main;

// put function declarations here:
int myFunction(int, int);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  analogWriteResolution(PWM_RES);
  analogReadResolution(PWM_RES);
  buzzer_main.attachBuzzer(buzzer_pin);
  buzzer_main.success();
  buzzer_main.info();
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}