// -----Includes-----
#include <Arduino.h>

#include "pins.h"

// -----Function prototypes-----
void Update_IT_Callback(void); // Timer interrupt
void echoCallback(void);

// -----Global variables-----

/* Timer */
TIM_TypeDef *Instance = TIM7;
HardwareTimer *MyTim = new HardwareTimer(Instance);

/* Measures */
volatile uint32_t distance_cm;
volatile uint64_t echo_length_us;
volatile uint64_t echo_start_us;

volatile uint32_t count_tim;

// -----Main-----
void setup() 
{
    /* Init Pins and Buses*/
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.begin(9600);

    /* Init Sensor */
    pinMode(ECHO, INPUT);
    attachInterrupt(digitalPinToInterrupt(ECHO), echoCallback, CHANGE);

    pinMode(TRIG, OUTPUT);

    /* Init Timer7 */
    MyTim->setOverflow(100, HERTZ_FORMAT);
    MyTim->attachInterrupt(Update_IT_Callback);
    MyTim->resume();

    /* Other */
    
}

void loop() 
{
    delay(1000);
    Serial.print("Distance : ");
    Serial.print(echo_length_us);
    Serial.println(" cm");
}

// -----Functions-----

void Update_IT_Callback(void)
{
    // Overflow happens every 10ms, count goes to 10 for a 100ms cycle
    count_tim++;
    switch (count_tim)
    {
    case 0:
        digitalWrite(TRIG, HIGH);
        break;
    
    default:
        break;
    }
}

void echoCallback()
{
    if(digitalRead(ECHO) == HIGH) // rising edge
    {
        echo_start_us = micros();
    }
    else // Falling edge
    {
        echo_length_us = micros() - echo_start_us;
        distance_cm = echo_length_us / 58; 
    }
}
