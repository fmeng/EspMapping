/**
 * https://item.taobao.com/item.htm?id=925354985241
 * https://github.com/fmeng/Prusa-Firmware-ESP32-Cam/blob/master/doc/ESP32-S3-CAM/README.md
 * https://github.com/fmeng/Prusa-Firmware-ESP32-Cam/blob/master/ESP32_PrusaConnectCam/module_ESP32-S3-CAM.h
 *
 * [env:esp32-s3-cam]
 * platform = espressif32
 * board = esp32-s3-devkitc-1
 * framework = arduino
 * board_build.extra_flags =
 *     -DBOARD_HAS_PSRAM
 * build_unflags =
 *     -DARDUINO_USB_CDC_ON_BOOT
 *     -DARDUINO_USB_MODE
 * build_flags =
 *     ${env.build_flags}
 *     -D ESP32S3_CAM
 */
#ifndef ESP_MAPPING_ESP32_S3_CAM_H
#define ESP_MAPPING_ESP32_S3_CAM_H

#if defined(ESP32S3_CAM)

// @formatter:off

#define  MP_MCU_NAME "ESP32S3"

///////////////////////////////////////////////   IN PINOUT   ///////////////////////////////////////////////
//////////////////////////////////////////   C0051 C0052 C0053   ////////////////////////////////////////////
/*RESET*/                   /**🔺 RESET                        **/   constexpr int MP_TX = 41;  /**🟧 普通IO TF card**/
constexpr int MP_A0  = 43;  /**✅ UART TX 烧录/Print串口         **/  constexpr int MP_RX = 40; /**🟧 普通IO TF card**/
constexpr int MP_D0  = 44;  /**✅ UART RX 烧录/Print串口         **/  constexpr int MP_D1 = 39; /**🟧 普通IO TF card**/
constexpr int MP_D5  = 19;  /**✅ 普通IO                        **/  constexpr int MP_D2 = 38;  /**✅ 普通IO **/
constexpr int MP_D6  = 20;  /**✅ 普通IO                        **/  constexpr int MP_D3 = 47;  /**⚠️ 启动绑定(Strapping Pin)默认内部上拉**/
constexpr int MP_D7  = 0;   /**⚠️ BOOT HIGH=boot, LOW=flashing **/  constexpr int MP_D4 = 14;  /***✅ 普通IO **/
constexpr int MP_D8  = -1;  /**⚡️           GND                **/  /** ⚡️ GND */
/** ⚡️3.3V **/              /************************************/  /** ⚡️ 5V **/

constexpr int MP_LED_BUILTIN = 2; //// LED_BUILTIN
constexpr int MP_LED_CAMERA_FLASH_WS2812_BUILTIN = 48; //// WS2812

// @formatter:on

#endif
#endif
