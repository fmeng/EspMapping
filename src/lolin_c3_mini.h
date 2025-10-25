/**
 * https://www.espboards.dev/esp32/esp32c3/   https://www.espboards.dev/esp32/
 * https://www.wemos.cc/en/latest/c3/c3_mini.html
 * https://docs.platformio.org/en/latest/boards/espressif32/lolin_c3_mini.html
 * https://item.taobao.com/item.htm?id=847231305511
 *
 * [env:lolin_c3_mini]
 * platform = espressif32
 * board = lolin_c3_mini
 * framework = arduino
 * ; build_unflags 启用串口输出，会占用 MP_TX、MP_RX 引脚；注释build_unflags后正常是用IO引脚
 * build_unflags =
 * -D ARDUINO_USB_MODE
 * -D ARDUINO_USB_CDC_ON_BOOT
 */
#ifndef LOLIN_C3_MINI_H

#if defined(ESP32) && (defined(CONFIG_IDF_TARGET_ESP32C3) || defined(ESP32C3))

#define  MP_MCU_NAME "ESP832C3"

///////////////////////////////////////////////     PINOUT   ///////////////////////////////////////////////
//////////////////////////////////////////   C0051 C0052 C0053   ////////////////////////////////////////////
/*EN*/                 /**🔺 EN                            **/ const int MP_TX = 21; /**🟡 ⚠️TX build_unflags       **/
const int MP_A0  = 0;  /**🟧 Digital In/Out A1-0           **/ const int MP_RX = 20; /**🟡 ⚠️RX build_unflags       **/
const int MP_D0  = 1;  /**🟧 Digital In/Out A1-1           **/ const int MP_D1 = 18; /**🟧 Digital In/Out           **/
const int MP_D5  = 2;  /**🟧 Digital In/Out A1-2           **/ const int MP_D2 = 10; /**🟧 Digital In/Out           **/
const int MP_D6  = 3;  /**🟧 Digital In/Out A1-3           **/ const int MP_D3 = 7;  /**🟧 Digital In/Out SS(spi)   **/
const int MP_D7  = 4;  /**🟧 Digital In/Out A1-4 SCK(spi)  **/ const int MP_D4 = 6;  /**🟧 Digital In/Out MOSI(spi) **/
const int MP_D8  = 5;  /**🟧 Digital In/Out A2-0 MISO(spi) **/            /*⚡️GND*/
/*⚡️3.3V*/              /************************************/             /*⚡️5V*/

#endif // ESP832C3

#endif // LOLIN_C3_MINI_H
