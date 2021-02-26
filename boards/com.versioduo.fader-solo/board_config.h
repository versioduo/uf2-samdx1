#pragma once

#define VENDOR_NAME                "Versio Duo"
#define PRODUCT_NAME               "fader"
#define VOLUME_LABEL               PRODUCT_NAME
#define INDEX_URL                  "https://versioduo.com/#" PRODUCT_NAME
#define BOARD_ID                   "versioduo:samd:" PRODUCT_NAME

#define USB_VID                    0x6666
#define USB_PID                    0xd9f0
#define USB_POWER_MA               20

#define LED_PIN                    PIN_PA27

#define BOOT_USART_MODULE          SERCOM0
#define BOOT_USART_MASK            APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS    UART_RX_PAD3_TX_PAD0
#define BOOT_USART_PAD3            PINMUX_PA07D_SERCOM0_PAD3
#define BOOT_USART_PAD2            PINMUX_UNUSED
#define BOOT_USART_PAD1            PINMUX_UNUSED
#define BOOT_USART_PAD0            PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE          SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW          SERCOM0_GCLK_ID_SLOW

#ifdef DEFINE_CONFIG_DATA
#define HAS_METADATA
const char metadata[] = "{\"com.versioduo.bootloader\":{\"board\":\"" BOARD_ID "\"}}";
#endif
