/**
 * https://www.espboards.dev/esp32/esp32s2/  https://www.espboards.dev/esp32/
 * https://www.wemos.cc/en/latest/s2/s2_mini.html
 * https://docs.platformio.org/en/latest/boards/espressif32/lolin_s2_mini.html
 * https://item.taobao.com/item.htm?id=681794131086
 *
 * [env:lolin_s2_mini]
 * platform = espressif32
 * board = lolin_s2_mini
 * framework = arduino
 * ; 串口输出不占用TX和RX引脚
 * build_flags =
 * -D CONFIG_USB_CDC_ENABLED=y
 */
#ifndef ESP_MAPPING_LOLIN_S2_MINI_H
#define ESP_MAPPING_LOLIN_S2_MINI_H
#if defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2)

// @formatter:off

#define  MP_MCU_NAME "ESP32S2"

/////////////////////////////////////////////   OUT PINOUT   /////////////////////////////////////////////////
/////////////////////////////////////////   C0051 C0052 C0053   //////////////////////////////////////////////
/** EN **/                 /**🔺 EN                              **/ constexpr int MP_TX = 39; /**🟧 Digital In/Out            **/
constexpr int MP_A0  = 3;  /**🟧 Digital In/Out A1-2 T3          **/ constexpr int MP_RX = 37; /**🟧 Digital In/Out MISO(spi)  **/
constexpr int MP_D0  = 5;  /**🟧 Digital In/Out A1-4 T5          **/ constexpr int MP_D1 = 35; /**🟧 Digital In/Out MOSI(spi)  **/
constexpr int MP_D5  = 7;  /**🟢 Digital In/Out A1-6 T7          **/ constexpr int MP_D2 = 33; /**🟧 Digital In/Out            **/
constexpr int MP_D6  = 9;  /**🟢 Digital In/Out A1-8 T9 SCL(i2c) **/ constexpr int MP_D3 = 18; /**🟧 Digital In/Out A2-7 DAC2  **/
constexpr int MP_D7  = 11; /**🟢 Digital In/Out A2-0 T11         **/ constexpr int MP_D4 = 16; /**🟧 Digital In/Out A2-5       **/
constexpr int MP_D8  = 12; /**🟢 Digital In/Out A2-1 T12         **/        /**⚡ ️GND **/
/** ⚡️3.3V **/             /***************************************/        /** ⚡️5V **/


///////////////////////////////////////////   IN PINOUT   /////////////////////////////////////////////////
///////////////////////////////////////////      C0013    /////////////////////////////////////////////////
constexpr int MP_rst = 1;   /**🟧 Digital In/Out A1-0  T1          **/ constexpr int MP_tx = 40; /**🟧 Digital In/Out           **/
constexpr int MP_a0  = 2;   /**🟧 Digital In/Out A1-1  T2          **/ constexpr int MP_rx = 38; /**🟧 Digital In/Out           **/
constexpr int MP_d0  = 4;   /**🟧 Digital In/Out A1-3  T4          **/ constexpr int MP_d1 = 36; /**🟧 Digital In/Out SCK(spi)  **/
constexpr int MP_d5  = 6;   /**🟧 Digital In/Out A1-5  T6          **/ constexpr int MP_d2 = 34; /**🟧 Digital In/Out SS(spi)   **/
constexpr int MP_d6  = 8;   /**🟧 Digital In/Out A1-7  T8 SDA(i2c) **/ constexpr int MP_d3 = 21; /**🟧 Digital In/Out           **/
constexpr int MP_d7  = 10;  /**⚪ Digital In/Out A1-9  T10         **/ constexpr int MP_d4 = 17; /**🟧 Digital In/Out A2-6 DAC1 **/
constexpr int MP_d8  = 13;  /**⚪ Digital In/Out A2-2  T13         **/       /** ⚡️GND **/
/** ⚡️3.3V **/              /****************************************/       /**⚡ ️5V  **/

constexpr int MP_LED_BUILTIN = 15; //// LED_BUILTIN

// @formatter:on

#endif
#endif