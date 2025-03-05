#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
    KC_NO,          KC_B,           KC_L,           KC_D,           KC_C,           KC_V,                                           KC_K,           KC_Y,           KC_O,           KC_U,           KC_J,           KC_NO,          
    KC_NO,          MT(MOD_LGUI, KC_N),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_T),MT(MOD_LCTL, KC_S),KC_G,                                           KC_P,           MT(MOD_RCTL, KC_H),MT(MOD_RSFT, KC_A),MT(MOD_RALT, KC_E),MT(MOD_RGUI, KC_I),KC_NO,          
    KC_NO,          LT(5,KC_X),     LT(3,KC_Q),     LT(2,KC_M),     LT(1,KC_W),     KC_Z,                                           KC_BSPC,        LT(1,KC_F),     LT(2,KC_MINUS), LT(3,KC_DOT),   LT(4,KC_SLASH), KC_NO,          
                                                    KC_SPACE,       MEH_T(KC_TAB),                                  KC_ESCAPE,      KC_ENTER
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AMPR,        KC_PLUS,        KC_AT,          KC_DLR,         KC_EXLM,                                        KC_CIRC,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ASTR,        KC_EQUAL,       KC_HASH,        KC_GRAVE,       KC_QUES,                                        KC_LABK,        KC_QUOTE,       KC_LPRN,        KC_LBRC,        KC_LCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_PIPE,        KC_PERC,        KC_SCLN,        KC_TILD,                                        KC_RABK,        KC_DQUO,        KC_RPRN,        KC_RBRC,        KC_RCBR,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_KP_ENTER
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,                                          KC_NO,          KC_NUM,         KC_PSCR,        KC_SCRL,        KC_PAUSE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_0,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_UP,          KC_PAGE_UP,     KC_NO,                                          KC_NO,          TO(6),          TO(7),          TO(8),          TO(9),          KC_TRANSPARENT, 
    KC_NO,          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,                                         KC_NO,          KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_PGDN,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TO(9),          TO(8),          TO(7),          TO(6),          KC_NO,                                          KC_NO,          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    LCTL(KC_KP_0),  LCTL(KC_PGDN),  LCTL(KC_R),     LCTL(KC_PAGE_UP),KC_MS_WH_RIGHT, KC_HOME,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LCTL(KC_KP_PLUS),KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,    KC_PAGE_UP,                                     KC_NO,          RGB_TOG,        RGB_VAI,        RGB_MODE_FORWARD,KC_BRIGHTNESS_UP,KC_TRANSPARENT, 
    LCTL(KC_KP_MINUS),KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_PGDN,                                        LED_LEVEL,      TOGGLE_LAYER_COLOR,RGB_VAD,        RGB_SLD,        KC_BRIGHTNESS_DOWN,KC_TRANSPARENT, 
    ST_MACRO_0,     KC_MS_BTN5,     KC_MS_BTN3,     KC_MS_BTN4,     KC_MS_WH_LEFT,  KC_END,                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_EQUAL,       
                                                    KC_LEFT_ALT,    KC_SPACE,                                       KC_ENTER,       KC_LEFT_GUI
  ),
  [9] = LAYOUT_voyager(
    KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_GUI,   
    KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_ALT,   
    KC_LEFT_SHIFT,  KC_N,           KC_R,           KC_T,           KC_S,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_H,           KC_A,           KC_E,           KC_I,           KC_UP,          
    KC_LEFT_CTRL,   KC_X,           KC_Q,           KC_M,           KC_W,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_MINUS,       KC_DOT,         KC_SLASH,       KC_RIGHT_CTRL,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_BSPC, KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_RIGHT_GUI, KC_LEFT_GUI, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(0)),
    COMBO(combo1, TO(0)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [4] = { {101,255,59}, {100,255,121}, {100,255,184}, {101,255,255}, {42,255,77}, {42,255,130}, {0,0,0}, {0,0,0}, {0,0,0}, {71,255,255}, {216,255,255}, {0,0,0}, {0,0,0}, {143,255,255}, {71,255,255}, {71,255,255}, {71,255,255}, {143,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {216,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {165,255,72}, {0,0,0}, {0,0,0} },

    [6] = { {41,255,117}, {196,255,255}, {0,255,117}, {196,255,255}, {68,255,60}, {81,255,255}, {41,255,117}, {226,255,255}, {152,255,255}, {226,255,255}, {68,255,135}, {49,255,255}, {41,255,117}, {152,255,255}, {152,255,255}, {152,255,255}, {68,255,135}, {27,255,255}, {135,255,255}, {227,255,117}, {226,255,255}, {227,255,117}, {68,255,60}, {12,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {73,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {188,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {188,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {188,255,255}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {73,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {41,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {41,255,255}, {41,255,255}, {215,255,255}, {215,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {73,255,255}, {188,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 4:
      set_layer_color(4);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_C)) SS_DELAY(100) SS_LCTL(SS_TAP(X_T)) SS_DELAY(100) SS_LCTL(SS_TAP(X_V))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



