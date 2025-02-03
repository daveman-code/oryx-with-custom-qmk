/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "VPOgj/zLoZp4"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 1

#define RGB_MATRIX_STARTUP_SPD 60

// DAV0S

// Slow down macros to improve detection reliability.
#define TAP_CODE_DELAY 5

// Tap-hold configuration for home row mods.
#define TAPPING_TERM 170
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY
