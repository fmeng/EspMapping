/**
 * https://item.taobao.com/item.htm?id=591819151590&skuId=4535846336810
 * https://lastminuteengineers.com/esp32-cam-pinout-reference/
 * https://docs.platformio.org/en/latest/boards/espressif32/esp32cam.html
 *
 * [env:esp32-cam]
 * platform = espressif32
 * board = esp32cam
 * framework = arduino
 * build_flags =
 *     ${env.build_flags}
 *     -D ESP32_CAM
 */
#ifndef ESP_MAPPING_ESP32_CAM_H
#define ESP_MAPPING_ESP32_CAM_H
#if defined(ESP32_CAM)

// @formatter:off

#define  MP_MCU_NAME "ESP32"

///////////////////////////////////////////////   IN PINOUT   ///////////////////////////////////////////////
//////////////////////////////////////////   C0051 C0052 C0053   ////////////////////////////////////////////
/*RESET*/                  /**🔺 RESET                   **/ constexpr int MP_TX = 4;   /**🟧 SD_Data2  ADC2_0 T0  HSPI_HD  PWM , on-board Flash LED **/
constexpr int MP_A0  = 1;  /**🟣 U0_TXD PWM 烧录          **/ constexpr int MP_RX = 2;   /**🟧 SD_Data3  ADC2_2 T2  HSPI_WP  PWM **/
constexpr int MP_D0  = 3;  /**🟣 U0_RXD PWM 烧录          **/ constexpr int MP_D1 = 14;  /**🟧 SD_CMD    ADC2_6 T6  HSPI_CLK PWM **/
constexpr int MP_D5  = -1; /**⚡️ VCC                     **/ constexpr int MP_D2 = 15;  /**🟧 SD_CLK    ADC2_3 T3  HSPI_CS0 PWM **/
constexpr int MP_D6  = -1; /**⚡️ GND                     **/ constexpr int MP_D3 = 13;  /**🟧 SD_Data0  ADC2_4 T4  HSPI_ID  PWM **/
constexpr int MP_D7  = 0;  /**⚠️ HIGH=boot, LOW=flashing **/ constexpr int MP_D4 = 12;  /**🟧 SD_Data1  ADC2_5 T5  HSPI_Q   PWM **/
constexpr int MP_D8  = 16; /**🟢 U2_RXD PWM              **/ /** ⚡️ GND */
/** ⚡️3.3V **/             /*******************************/ /** ⚡️ 5V **/

constexpr int MP_LED_BUILTIN = 33; //// LED_BUILTIN
constexpr int MP_LED_CAMERA_FLASH_YELLOW_BUILTIN = MP_TX; //// LED_BUILTIN

// @formatter:on

#endif
#endif
