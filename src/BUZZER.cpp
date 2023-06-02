#include "Arduino.h"
#include "BUZZER.h"
#include <string.h>

void Buzzer::attachBuzzer(unsigned int buzzerPin /* Input pin for buzzer */)
{
    this->buzzerPin = buzzerPin;
    pinMode(buzzerPin, OUTPUT);
    buzzerAttached = true;
};

void Buzzer::buzz(unsigned int frequency, unsigned int duration)
{
    if (buzzerAttached)
    {
        tone(buzzerPin, frequency, duration);
    }
};

void Buzzer::warning()
{
    buzz(1000, 100); // 1000 Hz for 100 ms
};

void Buzzer::error()
{
    for (int i = 0; i < 3; i++)
    {
        buzz(1000, 100); // 1000 Hz for 100 ms
        delay(100);      // Wait for 100 millisecond(s)
    };                   // 3 thrice
};

void Buzzer::success()
{
    buzz(1000, 2000); // 1000 Hz for 2 sec
};

void Buzzer::info()
{
    for (int i = 0; i < 3; i++)
    {
        buzz(1000, 500); // 1000 Hz for 500 ms
        delay(100);      // Wait for 100 millisecond(s)
    };                   // 3 thrice
};