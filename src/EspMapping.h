#ifndef ESP_MAPPING_H
#define ESP_MAPPING_H

#include "esp8266.h"
#include "wemos_d1_mini32.h"
#include "lolin_c3_mini.h"
#include "lolin_s2_mini.h"
#include "lolin_s3_mini.h"

// @formatter:off

#define  ESP_MAPPING_MCU_NAME MP_MCU_NAME

/************************ 扩展模块 基础定义 ************************/
constexpr int MP_DELAY                 = MP_D1; // 继电器           https://item.taobao.com/item.htm?id=544372000505&skuId=4808243279495
constexpr int MP_WS2812_LED            = MP_D2; // WS2812           https://item.taobao.com/item.htm?id=544372000505&skuId=4808243279502
constexpr int MP_BUTTON                = MP_D3; // 按键              https://item.taobao.com/item.htm?id=544372000505&skuId=4808243279505
constexpr int MP_DHT                   = MP_D4; // 温湿度传感器       https://item.taobao.com/item.htm?id=40553755936&skuId=4786175695348
constexpr int MP_BUZZER                = MP_D5; // 蜂鸣器 D5/D6/D7/D8 https://item.taobao.com/item.htm?id=558698321738

constexpr int MP_MATRIX_CLK            = MP_D5; // TM1640   https://github.com/wemos/WEMOS_Matrix_LED_Shield_Arduino_Library
constexpr int MP_MATRIX_DIO            = MP_D7; // 8x8点阵屏 https://item.taobao.com/item.htm?id=570375445084

constexpr int MP_BP180_I2C_SCL         = MP_D1; // 气压传感器 SCL    https://item.taobao.com/item.htm?id=544372000505&skuId=4808243279507
constexpr int MP_BP180_I2C_SDA         = MP_D2; // 气压传感器 SDA

constexpr int MP_OLD_DISPLAY_I2C_SCL   = MP_D1; // 0.66寸 OLED SCL   https://item.taobao.com/item.htm?id=544372000505&skuId=4808243279498
constexpr int MP_OLD_DISPLAY_I2C_SDA   = MP_D2; // 0.66寸 OLED SDA
/************************ 扩展模块 基础定义 ************************/


/************************ I2C 引脚 基础定义 ************************/
constexpr int MP_I2C_SCL       = MP_D1;
constexpr int MP_I2C_SDA       = MP_D2;
constexpr int MP_I2C_B0        = MP_D0;
constexpr int MP_I2C_B1        = MP_D8;

constexpr int MP_I2C_X0_A      = MP_D3; // UART BACK TX, BUTTON
constexpr int MP_I2C_X0_B      = MP_D4; // UART BACK RX, HUM

constexpr int MP_I2C_X1_A      = MP_TX; // UART TX
constexpr int MP_I2C_X1_B      = MP_RX; // UART RX
/************************ I2C 引脚 基础定义 ************************/


/************************ I2S 引脚 基础定义 ************************/
constexpr int MP_I2S_CLK               = MP_D4; // I2S ALL CLK BCLK
constexpr int MP_I2S_LRC_WS            = MP_D6; // I2S ALL WS LRC LCK
constexpr int MP_I2S_DATA_SPK_DOUT     = MP_D3; // I2S SPK DATA OUT
constexpr int MP_I2S_DATA_MIC_DIN      = MP_D8; // I2S MIC DATA IN
constexpr int MP_ADC_MIC_DIN           = MP_A0; // ADC MIC DATA IN

#if defined(CONFIG_IDF_TARGET_ESP32) /*ESP32*/
constexpr int MP_DAC_SPK_DOUT          = MP_D0; // DAC SPK DATA OUT DAC2
#endif

#if defined(CONFIG_IDF_TARGET_ESP32) || /*ESP32*/\
(defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
(defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_I2S_CLK_C0               = MP_d4; // I2S ALL CLK BCLK
constexpr int MP_I2S_LRC_WS_C0            = MP_d6; // I2S ALL WS LRC LCK
constexpr int MP_I2S_DATA_SPK_DOUT_C0     = MP_d3; // I2S SPK DATA OUT
constexpr int MP_I2S_DATA_MIC_DIN_C0      = MP_d8; // I2S MIC DATA IN
#endif

#if (defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
(defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_ADC_MIC_DIN_C0           = MP_a0; // ADC MIC DATA IN
#endif

/************************ I2S 引脚 基础定义 ************************/

/************************ SPI 引脚 基础定义 ************************/
constexpr int MP_SPI_SCK       = MP_D5;
constexpr int MP_SPI_MISO      = MP_D6;
constexpr int MP_SPI_MOSI      = MP_D7;
constexpr int MP_SPI_B0        = MP_D8;
constexpr int MP_SPI_B1        = MP_D0;

constexpr int MP_SPI_X0_A      = MP_D3; // UART BACK TX, BUTTON
constexpr int MP_SPI_X0_B      = MP_D4; // UART BACK RX, HUM

constexpr int MP_SPI_X1_A      = MP_TX; // UART TX
constexpr int MP_SPI_X1_B      = MP_RX; // UART RX
/************************ SPI 引脚 基础定义 ************************/


/************************ UART 引脚 基础定义 ************************/
constexpr int MP_UART_TX       = MP_D3; // UART BACK TX, BUTTON
constexpr int MP_UART_RX       = MP_D4; // UART BACK RX, HUM

constexpr int MP_UART_TX_B0    = MP_TX;
constexpr int MP_UART_RX_B0    = MP_RX;

#if defined(CONFIG_IDF_TARGET_ESP32) || /*ESP32*/\
    (defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
    (defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_UART_TX_C0    = MP_d3; // UART BACK TX, BUTTON
constexpr int MP_UART_RX_C0    = MP_d4; // UART BACK RX, HUM
#endif

#if (defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
    (defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_UART_TX_C1    = MP_tx; // S2 S3
constexpr int MP_UART_RX_C1    = MP_rx; // S2 S3
#endif
/************************ UART 引脚 基础定义 ************************/


/************************ SPI IPS TFT 屏幕 ************************/
constexpr int MP_SPI_DISPLAY_TFT_SCK      = MP_SPI_SCK;   // MP_D5
constexpr int MP_SPI_DISPLAY_TFT_MISO     = MP_SPI_MISO;  // MP_D6
constexpr int MP_SPI_DISPLAY_TFT_MOSI     = MP_SPI_MOSI;  // MP_D7

constexpr int MP_SPI_DISPLAY_TFT_CS       = MP_SPI_B0;    // MP_D8
constexpr int MP_SPI_DISPLAY_TFT_DC       = MP_SPI_X0_A;  // MP_D3
constexpr int MP_SPI_DISPLAY_TFT_RES      = MP_SPI_X0_B;  // MP_D4
constexpr int MP_SPI_DISPLAY_TFT_BLK_BUSE = MP_SPI_B1;    // MP_D0

#if defined(CONFIG_IDF_TARGET_ESP32) || /*ESP32*/\
(defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
(defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_SPI_DISPLAY_TFT_CS_C0       = MP_d8;
constexpr int MP_SPI_DISPLAY_TFT_DC_C0       = MP_d3;
constexpr int MP_SPI_DISPLAY_TFT_RES_C0      = MP_d4;
constexpr int MP_SPI_DISPLAY_TFT_BLK_BUSE_C0 = MP_d0;
#endif
/************************ SPI IPS TFT 屏幕 ************************/


/************************ SPI OLED 屏幕 ************************/
constexpr int MP_I2C_DISPLAY_OLED_SCL     = MP_I2C_SCL;   // MP_D1
constexpr int MP_I2C_DISPLAY_OLED_SDA     = MP_I2C_SDA;   // MP_D2

constexpr int MP_I2C_DISPLAY_OLED_K0      = MP_I2C_B0;    // MP_D0
constexpr int MP_I2C_DISPLAY_OLED_K1      = MP_I2C_X0_A;  // MP_D3
constexpr int MP_I2C_DISPLAY_OLED_K2      = MP_I2C_X0_B;  // MP_D4
constexpr int MP_I2C_DISPLAY_OLED_K3      = MP_I2C_B1;    // MP_D8

#if defined(CONFIG_IDF_TARGET_ESP32) || /*ESP32*/\
(defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
(defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_I2C_DISPLAY_OLED_K0_C0      = MP_d0;
constexpr int MP_I2C_DISPLAY_OLED_K1_C0      = MP_d3;
constexpr int MP_I2C_DISPLAY_OLED_K2_C0      = MP_d4;
constexpr int MP_I2C_DISPLAY_OLED_K3_C0      = MP_d8;
#endif
/************************ SPI OLED 屏幕 ************************/


/************************ SPI MICRO TF卡 ************************/
// https://item.taobao.com/item.htm?id=544372000505&skuId=4808243279508
constexpr int MP_SPI_MICRO_TF_SCK         = MP_SPI_SCK;   // MP_D5
constexpr int MP_SPI_MICRO_TF_MISO        = MP_SPI_MISO;  // MP_D6
constexpr int MP_SPI_MICRO_TF_MOSI        = MP_SPI_MOSI;  // MP_D7
constexpr int MP_SPI_MICRO_TF_CS          = MP_SPI_B0;    // MP_D8
/************************ SPI MICRO TF卡 ************************/


/************************ SPI RF RADIO ************************/
constexpr int MP_SPI_RF_RADIO_SCK         = MP_SPI_SCK;   // MP_D5
constexpr int MP_SPI_RF_RADIO_MISO        = MP_SPI_MISO;  // MP_D6
constexpr int MP_SPI_RF_RADIO_MOSI        = MP_SPI_MOSI;  // MP_D7
constexpr int MP_SPI_RF_RADIO_CS          = MP_SPI_B0;    // MP_D8
constexpr int MP_SPI_RF_RADIO_P1          = MP_SPI_X0_A;  // MP_D3
constexpr int MP_SPI_RF_RADIO_P2          = MP_SPI_X0_B;  // MP_D4
/************************ SPI RF RADIO ************************/


/************************ 74HC595 SHIELD ************************/
constexpr int MP_74HC595_SOUT        = MP_D1;
constexpr int MP_74HC595_LATCH       = MP_D2;
constexpr int MP_74HC595_SCLK        = MP_D3;

#if defined(CONFIG_IDF_TARGET_ESP32) || /*ESP32*/\
    (defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
    (defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_74HC595_SOUT_C0      = MP_d1;
constexpr int MP_74HC595_LATCH_C0     = MP_d2;
constexpr int MP_74HC595_SCLK_C0      = MP_d3;
#endif
/************************ 74HC595 SHIELD ************************/


/************************ 74HC165 SHIELD ************************/
constexpr int MP_74HC165_LATCH       = MP_D6;
constexpr int MP_74HC165_SIN         = MP_D7;
constexpr int MP_74HC165_SCLK        = MP_D8;

#if defined(CONFIG_IDF_TARGET_ESP32) || /*ESP32*/\
    (defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)) /*ESP32S2*/ || \
    (defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) /*ESP32S3*/
constexpr int MP_74HC165_LATCH_C0     = MP_d6;
constexpr int MP_74HC165_SIN_C0       = MP_d7;
constexpr int MP_74HC165_SCLK_C0      = MP_d8;
#endif
/************************ 74HC165 SHIELD ************************/

// @formatter:on

#endif
