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
#ifndef LOLIN_S2_MINI_H
#define LOLIN_S2_MINI_H

#if defined(ESP32) && (defined(CONFIG_IDF_TARGET_ESP32S2) || defined(ESP32S2))

#define  MP_MCU_NAME "ESP32S2"

/////////////////////////////////////////////   OUT PINOUT   /////////////////////////////////////////////////
/////////////////////////////////////////   C0051 C0052 C0053   //////////////////////////////////////////////
/** EN **/             /**🔺 EN                              **/ const int MP_TX = 39; /**🟧 Digital In/Out            **/
const int MP_A0  = 3;  /**🟧 Digital In/Out A1-2 T3          **/ const int MP_RX = 37; /**🟧 Digital In/Out MISO(spi)  **/
const int MP_D0  = 5;  /**🟧 Digital In/Out A1-4 T5          **/ const int MP_D1 = 35; /**🟧 Digital In/Out MOSI(spi)  **/
const int MP_D5  = 7;  /**🟢 Digital In/Out A1-6 T7          **/ const int MP_D2 = 33; /**🟧 Digital In/Out            **/
const int MP_D6  = 9;  /**🟢 Digital In/Out A1-8 T9 SCL(i2c) **/ const int MP_D3 = 18; /**🟧 Digital In/Out A2-7 DAC2  **/
const int MP_D7  = 11; /**🟢 Digital In/Out A2-0 T11         **/ const int MP_D4 = 16; /**🟧 Digital In/Out A2-5       **/
const int MP_D8  = 12; /**🟢 Digital In/Out A2-1 T12         **/                       /**⚡️GND                        **/
/** ⚡️3.3V **/         /***************************************/                       /**⚡️5V                         **/


///////////////////////////////////////////   IN PINOUT   /////////////////////////////////////////////////
///////////////////////////////////////////      C0013    /////////////////////////////////////////////////
const int MP_rst = 1;   /**🟧 Digital In/Out A1-0  T1          **/ const int MP_tx = 40; /**🟧 Digital In/Out           **/
const int MP_a0  = 2;   /**🟧 Digital In/Out A1-1  T2          **/ const int MP_rx = 38; /**🟧 Digital In/Out           **/
const int MP_d0  = 4;   /**🟧 Digital In/Out A1-3  T4          **/ const int MP_d1 = 36; /**🟧 Digital In/Out SCK(spi)  **/
const int MP_d5  = 6;   /**🟧 Digital In/Out A1-5  T6          **/ const int MP_d2 = 34; /**🟧 Digital In/Out SS(spi)   **/
const int MP_d6  = 8;   /**🟧 Digital In/Out A1-7  T8 SDA(i2c) **/ const int MP_d3 = 21; /**🟧 Digital In/Out           **/
const int MP_d7  = 10;  /**⚪ Digital In/Out A1-9  T10         **/ const int MP_d4 = 17; /**🟧 Digital In/Out A2-6 DAC1 **/
const int MP_d8  = 13;  /**⚪ Digital In/Out A2-2  T13         **/                       /**⚡️GND                       **/
/** ⚡️3.3V **/          /****************************************/                       /**⚡️5V                        **/

const int MP_LED_BUILTIN = 15; //// LED_BUILTIN

#endif // ESP32S2

#endif // LOLIN_S2_MINI_H