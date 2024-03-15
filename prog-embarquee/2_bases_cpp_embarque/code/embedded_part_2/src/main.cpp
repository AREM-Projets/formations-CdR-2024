#include <Arduino.h>

#include "pins.h" // pas bligatoire mais conseillé de définir tous les pins dans un .h

bool button_pressed = false;
bool led_state =  LOW;

void setup() {
    pinMode(PIN_BUTTON, INPUT_PULLUP);
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    /* 
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
    */

   // bonus
    if(!button_pressed && digitalRead(PIN_BUTTON) == LOW) // pullup : bouton à l'état haut -> relaché
    {
        led_state = led_state ^ 1; // ~led_state decided not to work today
        button_pressed = true;

        digitalWrite(PIN_LED, led_state);

        Serial.print("pressed button; led : ");
        Serial.println(led_state);
        delay(2); // on évite les instabilités liées au signal
    }
    else if(button_pressed && digitalRead(PIN_BUTTON) == HIGH)
    {
        button_pressed = false;
        Serial.println("released button");
        delay(2); // on évite les instabilités liées au signal
    }
}

