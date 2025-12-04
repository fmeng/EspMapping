#include <Arduino.h>
#include <EspMapping.h>

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println(ESP_MAPPING_MCU_NAME);
    delay(1000);
}