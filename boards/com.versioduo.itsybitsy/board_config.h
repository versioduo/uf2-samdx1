#pragma once

#define VENDOR_NAME                "Versio Duo"
#define PRODUCT_NAME               "itsybitsy"
#define VOLUME_LABEL               PRODUCT_NAME
#define INDEX_URL                  "https://versioduo.com/#" PRODUCT_NAME
#define BOARD_ID                  "versioduo:samd:" PRODUCT_NAME

#define USB_VID                    0x6666
#define USB_PID                    0xdf50
#define USB_POWER_MA               20

#define LED_PIN PIN_PA22

#define BOARD_RGBLED_CLOCK_PIN     PIN_PB02
#define BOARD_RGBLED_DATA_PIN      PIN_PB03

#define BOOT_USART_MODULE          SERCOM3
#define BOOT_USART_MASK            APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX MCLK_APBBMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS    UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3            PINMUX_UNUSED
#define BOOT_USART_PAD2            PINMUX_UNUSED
#define BOOT_USART_PAD1            PINMUX_PA22C_SERCOM3_PAD0
#define BOOT_USART_PAD0            PINMUX_PA23C_SERCOM3_PAD1
#define BOOT_GCLK_ID_CORE          SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW          SERCOM3_GCLK_ID_SLOW

#ifdef DEFINE_CONFIG_DATA
#define HAS_METADATA
const char metadata[] = "{\"com.versioduo.bootloader\":{\"board\":\"" BOARD_ID "\"}}";
#endif
