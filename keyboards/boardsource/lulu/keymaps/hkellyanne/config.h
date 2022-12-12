#pragma once

// Left side is master
#define MASTER_LEFT 

// allow split OLED animation and track WPM
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

//RGB
#define RGB_MATRIX_KEYPRESSES // enable keypress effects
#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGBLIGHT_SPLIT
#define RGB_MATRIX_DEFAULT_HUE 180 // violet
// Disable RGB Matrix effects (from lulu/config.h)
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
// Enable RGB Matrix effects
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_COLOR
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE