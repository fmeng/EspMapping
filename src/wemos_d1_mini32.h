/**
 * https://www.espboards.dev/esp32/esp32/  https://www.espboards.dev/esp32/
 * https://wiki.csgalileo.org/_media/projects:internetofthings:d1_mini_esp32_-_pinout.pdf
 * https://docs.platformio.org/en/latest/boards/espressif32/wemos_d1_mini32.html
 * https://item.taobao.com/item.htm?id=562228261907
 *
 * [env:wemos_d1_mini32]
 * platform = espressif32
 * board = wemos_d1_mini32
 * framework = arduino
 */
#ifndef WEMOS_D1_MINI32_H
#define WEMOS_D1_MINI32_H

#if defined(ESP32) && defined(CONFIG_IDF_TARGET_ESP32)

#define  MP_MCU_NAME "ESP32"

///////////////////////////////////////////////   IN PINOUT   ///////////////////////////////////////////////
//////////////////////////////////////////   C0051 C0052 C0053   ////////////////////////////////////////////
/*RESET*/               /**🔺 RESET                           **/ const int MP_TX = 3;   /**🟡 UART0 TX                 **/
const int MP_A0  = 36;  /**🟥 Input Only (0-3.3V) ADC1-0      **/ const int MP_RX = 1;   /**🟡 UART0 RX                 **/
const int MP_D0  = 26;  /**🟣 Analog Out          ADC2-9 DAC2 **/ const int MP_D1 = 22;  /**⚪ I2C (SCL)                **/
const int MP_D5  = 18;  /**🟢 VSPI bus (SCK)                  **/ const int MP_D2 = 21;  /**⚪ I2C (SDA)                **/
const int MP_D6  = 19;  /**🟢 VSPI bus (MISO)                 **/ const int MP_D3 = 17;  /**🟧 Digital In/Out           **/
const int MP_D7  = 23;  /**🟢 VSPI bus (MOSI)                 **/ const int MP_D4 = 16;  /**🟧 Digital In/Out           **/
const int MP_D8  = 5;   /**🟢 VSPI bus (SS)                   **/                        /**⚡️ GND                      **/
/** ⚡️3.3V **/          /***************************************/                        /**⚡️ 5V                       **/
const int MP_TCK = 13;  /**🟧 Digital In/Out      ADC2-4 T4   **/ const int MP_TD0 = 15; /**🟧 Digital In/Out ADC2-3 T3 **/
/*MP_SD3 Do not use*/   /**⛔ 禁止使用 SPI FLASH               **/ /*MP_SD0  Do not use**/


///////////////////////////////////////////////   OUT PINOUT   ///////////////////////////////////////////////
///////////////////////////////////////////////   C0011 C0012   ///////////////////////////////////////////////
/*⚡️GND*/               /**⚡️GND                        **/             /*⚡️GND*/
/*NC*/                  /**NC                          **/ const int MP_rx = 27;  /**🟧 Digital In/Out        T7   **/
const int MP_d0  = 39;  /**🟥 Input Only     ADC1-3    **/ const int MP_d1 = 25;  /**🟧 Digital In/Out ADC2-8 DAC1 **/
const int MP_d5  = 35;  /**🟥 Input Only     ADC1-7    **/ const int MP_d2 = 32;  /**🟧 Digital In/Out ADC1-4 T9   **/
const int MP_d6  = 33;  /**🟧 Digital In/Out ADC1-5 T8 **/ const int MP_d3 = 12;  /**🟧 Digital In/Out ADC2-5 T5   **/
const int MP_d7  = 34;  /**🟥 Input Only     ADC1-6    **/ const int MP_d4 = 4;   /**🟧 Digital In/Out ADC2-0 T0   **/
const int MP_d8  = 14;  /**🟧 Digital In/Out ADC2-6 T6 **/                        /**⚡️ GND                        **/
/** ⚡️3.3V **/          /********************************/                        /**⚡️ 5V                         **/
/*MP_tck Do not use */  /**⛔ 禁止使用 SPI FLASH        **/ /*MP_td0 Do not use */
/*MP_sd3 Do not use */  /**⛔ 禁止使用 SPI FLASH        **/ /*MP_sd0 Do not use */

const int MP_LED_BUILTIN = 2; //// LED_BUILTIN

#endif // ESP32

#endif // WEMOS_D1_MINI32_H