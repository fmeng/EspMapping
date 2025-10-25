#ifndef ESP_MAPPING_H
#define ESP_MAPPING_H

#include "esp8266.h"
#include "wemos_d1_mini32.h"
#include "lolin_c3_mini.h"
#include "lolin_s2_mini.h"
#include "lolin_s3_mini.h"

const int MP_DELAY = MP_D1;         // 继电器
const int MP_BP180_I2C_SCL = MP_D1; // 气压传感器 SCL
const int MP_BP180_I2C_SDA = MP_D2; // 气压传感器 SDA
const int MP_WS2812_LED = MP_D2;    // WS2812
const int MP_BUTTON = MP_D3;        // 按钮
const int MP_DHT = MP_D4;           // 温湿度传感器
const int MP_BUZZER = MP_D5;        // 蜂鸣器 D5/D6/D7/D8
const int MP_ST7789_SCREEN = MP_D5; // 240*240 显示屏

#endif // ESP_MAPPING_H