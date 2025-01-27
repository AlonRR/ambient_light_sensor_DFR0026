#include <Arduino.h>

#define AMBIENT_LIGHT_PIN 25

void setup()
{
    Serial.begin(115200);
    pinMode(AMBIENT_LIGHT_PIN, INPUT);
}

void loop()
{
    int lightValue = analogRead(AMBIENT_LIGHT_PIN);
    Serial.println(lightValue);
    delay(1000);
}
