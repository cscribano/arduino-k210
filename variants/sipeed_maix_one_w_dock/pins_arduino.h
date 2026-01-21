#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

// UART
#define UART1_TX            (4)
#define UART1_RX            (5)

#define TFT_CSX_PIN         (36)
#define TFT_RST_PIN         (37)
#define TFT_DCX_PIN         (38)
#define TFT_CLK_PIN         (39)

#define SDCARD_CLK_PIN      (27) // SPI0_SCLK
#define SDCARD_MIS_PIN      (26) // SPI0_MISO
#define SDCARD_MOS_PIN      (28) // SPI0_MOSI
#define SDCARD_CSX_PIN      (29) // SPI0_CS0

// https://github.com/sipeed/Maixduino/blob/4d31122a39995862b7f486fb3fc8220a8ef3c5c2/libraries/Sipeed_OV2640/src/Sipeed_OV2640.cpp#L745
#define CAMERA_PCLK_PIN     (47)
#define CAMERA_XCLK_PIN     (46)
#define CAMERA_HSYNC_PIN    (45)
#define CAMERA_VSYNC_PIN    (43)
#define CAMERA_PWDN_PIN     (44)
#define CAMERA_RST_PIN      (42)
#define CAMERA_SDA_PIN      (40)
#define CAMERA_SCL_PIN      (41)

// flash filesystem config
#define FLASH_FS_ADDR       (0xD00000)
#define FLASH_FS_SIZE       (0x300000)

#endif /* Pins_Arduino_h */
