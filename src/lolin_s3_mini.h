/**
 * https://www.espboards.dev/esp32/esp32s3/  https://www.espboards.dev/esp32/
 * https://www.wemos.cc/en/latest/s3/s3_mini.html
 * https://docs.platformio.org/en/latest/boards/espressif32/lolin_s3_mini.html
 * https://item.taobao.com/item.htm?id=791974226770
 *
 * [env:lolin_s3_mini]
 * platform = espressif32
 * board = lolin_s3_mini
 * framework = arduino
 * ; 串口输出不占用TX和RX引脚
 * build_flags =
 *     -D ARDUINO_USB_CDC_ON_BOOT=1
 *     -D ARDUINO_USB_MODE=1
 */
#ifndef ESP_MAPPING_LOLIN_S3_MINI_H
#define ESP_MAPPING_LOLIN_S3_MINI_H
#if (defined(CONFIG_IDF_TARGET_ESP32S3) || defined(ESP32S3)) && !defined(ESP32S3_CAM) && !defined(ESP32S3_NORMAL)
#define ESP32S3_NORMAL

// @formatter:off

#define  MP_MCU_NAME "ESP32S3"

/////////////////////////////////////////////   OUT PINOUT   /////////////////////////////////////////////////
/////////////////////////////////////////   C0051 C0052 C0053   //////////////////////////////////////////////
/** EN **/                 /**🔺 EN                            **/ constexpr int MP_TX = 43; /**🟡 UART0 TX default    **/
constexpr int MP_A0  = 2;  /**🟧 Digital In/Out A1-1  T2       **/ constexpr int MP_RX = 44; /**🟡 UART0 RX default    **/
constexpr int MP_D0  = 4;  /**🟧 Digital In/Out A1-3  T4       **/ constexpr int MP_D1 = 36; /**🟧 Digital In/Out      **/
constexpr int MP_D5  = 12; /**🟢 Digital In/Out A2-1  T12 SCK  **/ constexpr int MP_D2 = 35; /**🟧 Digital In/Out      **/
constexpr int MP_D6  = 13; /**🟢 Digital In/Out A2-2  T13 MISO **/ constexpr int MP_D3 = 18; /**🟧 Digital In/Out A2-7 **/
constexpr int MP_D7  = 11; /**🟢 Digital In/Out A2-0  T11 MOSI **/ constexpr int MP_D4 = 16; /**🟧 Digital In/Out A2-5 **/
constexpr int MP_D8  = 10; /**🟢 Digital In/Out A1-9  T10 SS   **/      /** ⚡️GND **/
/** ⚡️3.3V **/             /*************************************/      /** ⚡️5V **/


///////////////////////////////////////////   IN PINOUT   /////////////////////////////////////////////////
///////////////////////////////////////////      C0013    /////////////////////////////////////////////////
constexpr int MP_rst = 1;  /**🟧 Digital In/Out A1-0 T1     **/ constexpr int MP_tx = 33; /**🟧 Digital In/Out      **/
constexpr int MP_a0  = 3;  /**🟧 Digital In/Out A1-2 T3     **/ constexpr int MP_rx = 37; /**🟧 Digital In/Out      **/
constexpr int MP_d0  = 5;  /**🟧 Digital In/Out A1-4 T5     **/ constexpr int MP_d1 = 38; /**🟧 Digital In/Out      **/
constexpr int MP_d5  = 6;  /**🟧 Digital In/Out A1-5 T6     **/ constexpr int MP_d2 = 34; /**🟧 Digital In/Out      **/
constexpr int MP_d6  = 7;  /**🟧 Digital In/Out A1-6 T7     **/ constexpr int MP_d3 = 21; /**🟧 Digital In/Out      **/
constexpr int MP_d7  = 8;  /**⚪ Digital In/Out A1-7 T8 SDA **/ constexpr int MP_d4 = 17; /**🟧 Digital In/Out A2-6 **/
constexpr int MP_d8  = 9;  /**⚪ Digital In/Out A1-8 T9 SCL **/         /** ⚡️GND **/
/** ⚡️3.3V **/             /***********************************/        /** ⚡️5V **/

constexpr int MP_LED_BUILTIN = 47; //// LED_BUILTIN

// @formatter:on

#endif
#endif