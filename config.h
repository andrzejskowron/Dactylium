#pragma once

//#define USE_MATRIX_I2C


/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }

// #define USE_SERIAL_PD2
#define USE_SERIAL

#define SOFT_SERIAL_PIN 13

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN 10
#define RGBLED_NUM 18
#define RGBLED_SPLIT { 9, 9 }
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
// #define RGBLIGHT_SLEEP

// Encoder
#ifdef ENCODER_ENABLE
    #define ENCODERS_PAD_A { D5 }
    #define ENCODERS_PAD_B { I5 }
    #define ENCODERS_PAD_A { encoder1a, encoder2a }
    #define ENCODERS_PAD_B { encoder1b, encoder2b }
    // Enable if encoder is on the left side
    // #define ENCODER_DIRECTION_FLIP
#endif


#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define TAPPING_TERM_PER_KEY
// #define PERMISSIVE_HOLD
