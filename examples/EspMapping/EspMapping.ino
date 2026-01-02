#include <Arduino.h>
#include <EspMapping.h>

constexpr int PIN_NUM = MP_D4;

void setup() {
    Serial.begin(115200);
    pinMode(PIN_NUM, OUTPUT);
}

void loop() {
    Serial.print(millis());
    Serial.print(",");
    Serial.println(ESP_MAPPING_MCU_NAME);
    digitalWrite(PIN_NUM, !digitalRead(PIN_NUM));
    delay(200);
}