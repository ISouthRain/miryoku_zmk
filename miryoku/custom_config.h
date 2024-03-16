// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
/*
nice_nano_v2
corne_left,corne_right
CONFIG_ZMK_DISPLAY=y\nCONFIG_ZMK_SLEEP=y\nCONFIG_ZMK_IDLE_TIMEOUT=20000\nCONFIG_ZMK_IDLE_SLEEP_TIMEOUT=1200000\nCONFIG_ZMK_WIDGET_BATTERY_STATUS_SHOW_PERCENTAGE=y\nCONFIG_ZMK_WIDGET_OUTPUT_STATUS=y

*/

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_APPAD  10

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(APPAD,  "AppAD")



#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         &tog U_APPAD,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,                &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,                &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,                U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_APPAD \
&kp INS,          &kp FSLH,           &kp UP,               &kp ASTERISK,            &kp MINUS,   &tog U_APPAD,   &kp KP_NUMBER_7,      &kp KP_NUMBER_8,     &kp KP_NUMBER_9,        &kp NON_US_BACKSLASH,            \
U_MT(LGUI, DEL),  U_MT(LALT, LEFT),   U_MT(LCTRL, DOWN),    U_MT(LSHFT, RIGHT),       &kp PLUS,     U_NA,          &kp KP_NUMBER_4,      &kp KP_NUMBER_5,     &kp KP_NUMBER_6,        &kp LGUI,          \
&kp Z,               &kp X,           &kp C,                &kp V,                    &kp PERIOD,   U_NA,          &kp KP_NUMBER_1,      &kp KP_NUMBER_2,     &kp KP_NUMBER_3,        &kp PLUS,              \
U_NP,                U_NP,            &kp ESC,              &kp SPACE,                &kp TAB,      U_NA,          &kp KP_NUMBER_0,             U_NA,              U_NP,           U_NP