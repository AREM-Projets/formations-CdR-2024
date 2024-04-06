#include <Arduino.h>

#include "pins.h" // pas bligatoire mais conseillé de définir tous les pins dans un .h

volatile uint8_t count_button = 0;

void buttonCallback();

void setup() {
    pinMode(PIN_BUTTON, INPUT_PULLUP);
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_LED_2, OUTPUT);
    Serial.begin(9600);

    attachInterrupt(digitalPinToInterrupt(PIN_BUTTON), buttonCallback, CHANGE); // Base
}

void loop() {
    Serial.print("button state : ");
    if(digitalRead(PIN_BUTTON))
    {
        Serial.println("released");
    }
    else
    {
        Serial.println("pressed");
    }

    delay(1000);
}

void buttonCallback()
{
    if(digitalRead(PIN_BUTTON) == HIGH)
    {
        digitalWrite(PIN_LED, LOW);
    }
    else
    {
        digitalWrite(PIN_LED, HIGH);
    }
}