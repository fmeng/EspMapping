/**
 * https://www.wemos.cc/en/latest/d1/d1_mini.html
 * https://lastminuteengineers.com/wemos-d1-mini-pinout-reference/
 *
 * board: d1_mini ; 4M
 * https://www.wemos.cc/en/latest/d1/d1_mini.html
 * https://docs.platformio.org/en/stable/boards/espressif8266/d1_mini.html
 * 普通款      https://item.taobao.com/item.htm?id=528897975491
 * 带i2c接口   https://item.taobao.com/item.htm?id=680072427622
 * 带天外置线   https://item.taobao.com/item.htm?id=567026046755
 * [env:d1_mini]
 * platform = espressif8266
 * board = d1_mini
 * framework = arduino
 *
 * board: esp07s ; 4M 带外置天线
 * https://docs.platformio.org/en/latest/boards/espressif8266/esp07s.html
 * https://item.taobao.com/item.htm?id=734148851727
 * [env:esp07s]
 * platform = espressif8266
 * board = esp07s
 * framework = arduino
 *
 * board: d1_mini_pro ; 16M 带外置天线 只是为了使用16M的flash配置
 * https://www.wemos.cc/en/latest/d1/d1_mini_pro.html
 * https://docs.platformio.org/en/stable/boards/espressif8266/d1_mini_pro.html
 * https://item.taobao.com/item.htm?id=567026046755
 * [env:d1_mini_pro]
 * platform = espressif8266
 * board = d1_mini_pro
 * framework = arduino
*/
#ifndef ESP_MAPPING_ESP8266_H
#define ESP_MAPPING_ESP8266_H

#if defined(ESP8266)

// @formatter:off

#define  MP_MCU_NAME "ESP8266"

///////////////////////////////////////////////     PINOUT   ///////////////////////////////////////////////
//////////////////////////////////////////   C0051 C0052 C0053   ////////////////////////////////////////////
/*RESET*/               /**🔺 RESET                                              **/ constexpr int MP_TX = 1;  /**🟡 UART0 TX                     **/
constexpr int MP_A0  = A0;  /**🟥 Input Only, Analog In ( 0V - 1V )              **/ constexpr int MP_RX = 3;  /**🟡 UART0 RX                     **/
constexpr int MP_D0  = 16;  /**🟧 Digital In/Out NO(IRQ、PWM、I²C), HIGHT ON BOOT **/ constexpr int MP_D1 = 5;  /**⚪ I2C (SCL)                    **/
constexpr int MP_D5  = 14;  /**🟢 VSPI bus (SCK)                                 **/ constexpr int MP_D2 = 4;  /**⚪ I2C (SDA)                    **/
constexpr int MP_D6  = 12;  /**🟢 VSPI bus (MISO)                                **/ constexpr int MP_D3 = 0;  /**🟧 Digital In/Out HIGHT ON BOOT **/
constexpr int MP_D7  = 13;  /**🟢 VSPI bus (MOSI)                                **/ constexpr int MP_D4 = 2;  /**🟧 Digital In/Out HIGHT ON BOOT **/
constexpr int MP_D8  = 15;  /**🟢 VSPI bus (SS)                    LOW ON BOOT   **/              /*⚡️GND*/
/*⚡️3.3V*/                  /******************************************************/               /*⚡️5V*/

constexpr int MP_LED_BUILTIN = MP_D4; //// LED_BUILTIN

// @formatter:on

#endif
#endif
