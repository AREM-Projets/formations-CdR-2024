#include <Arduino.h>

#include "pins.h" // pas bligatoire mais conseillé de définir tous les pins dans un .h

volatile uint8_t count_button = 0;

void writeCount(uint8_t count);
void buttonCallback();

void setup() {
    pinMode(PIN_BUTTON, INPUT_PULLUP);
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_LED_2, OUTPUT);
    Serial.begin(9600);

    // attachInterrupt(digitalPinToInterrupt(PIN_BUTTON), buttonCallback, CHANGE); // Base
    attachInterrupt(digitalPinToInterrupt(PIN_BUTTON), buttonCallback, FALLING); // Bonus
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

/* Base 
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
*/

/* Bonus */
void buttonCallback()
{
    count_button++;
    count_button = count_button & 0b11; // sur 2 bits
    writeCount(count_button);
}

void writeCount(uint8_t count)
{
    digitalWrite(PIN_LED, count & 0b1);
    digitalWrite(PIN_LED_2, count & 0b10);
}