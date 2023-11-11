/* Includes */
#include <Arduino.h>

/* Pins réservés */
// PINS_UART : A0, A1, A2, A7 

/* Variables */
uint32_t compteur; // uint32_t : type unsigned int sur 32 bits, défini dans <stdint.h> qui est inclus dans <Arduino.h>

void setup()
{
    compteur = 0;
    Serial.begin(9600);

    delay(1000);
    Serial.println("---Initialisation finished---");
}

void loop()
{
    Serial.print("Déjà vu. ");
    delay(500);
    Serial.println("I've just been in this place before");
    delay(500);

    switch (compteur)
    {
    case 0:
        Serial.printf("Or have I ? \n");
        break;
    default:
        Serial.printf("%d times \n", compteur);
        break;
    }
    
    compteur++;
    delay(2000); 
}