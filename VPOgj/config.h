/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at
  https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

// ZSA ORYX-DEFINED

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "VPOgj/zLoZp4"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 2

#define RGB_MATRIX_STARTUP_SPD 60

// DAV0S CONFIGURATION

// MACRO BEHAVIOUR
#define TAP_CODE_DELAY 5 // (s) Slow down macro playback improves detection.

// TAP-HOLD BEHAVIOUR
#define TAPPING_TERM 222     // (ms) Maximum term a key press can be a 'tap'.
#define TAPPING_TERM_PER_KEY // Not sure where to configure though...
#define PERMISSIVE_HOLD // Ignores TAPPING_TERM and considers any length of key
// press to be a 'hold' if another key is pressed and released while the first
// is still pressed.
#define QUICK_TAP_T RM_PER_KEY
// Note: Also using Getreuer Achordion:
// https://getreuer.info/posts/keyboards/achordion/index.html
