#ifndef BUZZER_H
#define BUZZER_H

#include "Arduino.h"

class Buzzer
{
public:
  // Buzzer control functions:
  void buzz(unsigned int frequency, unsigned int duration);

  // Functions to attach buzzer:
  void attachBuzzer(unsigned int buzzerPin /* Input pin for buzzer */);

  void warning();
  void error();
  void success();
  void info();

private:
  // Fields for the class:
  unsigned int buzzerPin;
  boolean buzzerAttached = false;
};

#endif