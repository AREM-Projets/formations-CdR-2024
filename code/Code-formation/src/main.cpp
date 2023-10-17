/* Includes */
#include <Arduino.h>

/* Pins réservés */
// PINS_UART : A0, A1, A2, A7 

/* Variables */
uint32_t compteur;

void setup()
{
    compteur = 0;
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Déjà vu. ");
    Serial.println("I've just been in this place before");
    Serial.printf("%d times \n", compteur);

    delay(1000); 
}