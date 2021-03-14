#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define _NEO 0
#define _NEO2 1
#define _SYMB 2
#define _FUN1 3
#define _FUN2 4
#define _MAST 5
#define _QUER 6

// german keycodes redefined
#define DE_AE DE_ADIA
#define DE_OE DE_ODIA
#define DE_UE DE_UDIA

enum custom_keycodes {
  LOCK = SAFE_RANGE,
  NEXT
};

// unicode code points
#define UC_L_AR 0x2190 // ←
#define UC_R_AR 0x2192 // →
#define UC_LR_AR 0x2194 // ↔
#define UC_CHK_MRK 0x2713 // ✔
#define UC_X_MRK 0x2717 // ✗
#define UC_DE_LQQ 0x201e // „
#define UC_DE_RQQ 0x201c // “
#define UC_EN_RQQ 0x201d // ”
#define UC_DE_LQ 0x201a // ‚
#define UC_DE_RQ 0x2018 // ‘
#define UC_EN_RQ 0x2019 // ’
#define UC_3DOTS 0x2026 // …

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /*[_NEO] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_HYPR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MEH,  KC_X,    KC_V,    KC_L,    KC_C,    KC_W,                               KC_K,    KC_H,    KC_G,    KC_F,    KC_Q,    DE_SS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     LT(_FUN1,KC_PSCR),
              KC_U,    KC_I,    KC_A,    KC_E,    KC_O,                               KC_S,    KC_N,    KC_R,    KC_T,    KC_D,    CTL_T(KC_Y),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_T(KC_ESC),
              DE_UE,   DE_OE,   DE_AE,   KC_P,    KC_Z,    MO(_MAST),        KC_DEL,  KC_B,    KC_M,    DE_COMM, DE_DOT,  KC_J,    MO(_SYMB),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, LT(_SYMB,KC_TAB),
                                                      LT(_NEO2,KC_SPC),          LT(_NEO2,KC_BSPC),
                                                                                          LT(_FUN1,KC_ENT),
                                                                                                   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),*/
  [_NEO] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_HYPR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MEH,  KC_X,    KC_V,    KC_L,    KC_C,    KC_W,                               KC_K,    KC_H,    KC_G,    KC_F,    KC_Q,    DE_SS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     LT(_FUN1,KC_PSCR),
            LGUI_T(KC_U),LALT_T(KC_I),
                              LCTL_T(KC_A),LSFT_T(KC_E),KC_O,                         KC_S,  RSFT_T(KC_N),RCTL_T(KC_R),
                                                                                                               LALT_T(KC_T),RGUI_T(KC_D),DE_Y,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_T(KC_ESC),
              DE_UE,   DE_OE,   DE_AE,   KC_P,    DE_Z,    MO(_FUN2),        MO(_MAST),  KC_B,    KC_M,    DE_COMM, DE_DOT,  KC_J,    MO(_SYMB),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, LT(_SYMB,KC_TAB),
                                                      KC_SPC,                    KC_BSPC,
                                                                                          LT(_FUN1,KC_ENT),
                                                                                                   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


// "shift" layer
  [_NEO2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    UC(UC_L_AR),UC(UC_LR_AR),UC(UC_R_AR),
                                         UC(UC_CHK_MRK),UC(UC_X_MRK),                 _______, DE_EURO, DE_DEG,  UC(UC_DE_LQQ),UC(UC_DE_RQQ),UC(UC_EN_RQQ),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, S(KC_X), S(KC_V), S(KC_L), S(KC_C), S(KC_W),                            S(KC_K), S(KC_H), S(KC_G), S(KC_F), S(KC_Q), KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, S(KC_U), S(KC_I), S(KC_A), S(KC_E), S(KC_O),                            S(KC_S), S(KC_N), S(KC_R), S(KC_T), S(KC_D), S(CTL_T(KC_Y)),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     S(CTL_T(KC_ESC)),
              S(DE_UE),S(DE_OE),S(DE_AE),S(KC_P), S(KC_Z), _______,          _______, S(KC_B), S(KC_M), _______, _______, S(KC_S), _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// Symbols
  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, UC(UC_3DOTS),
                       DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC,                            DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR,                            DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, CTL_T(DE_AT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,  _______,          _______, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// Function 1: arrow keys, numpad
  [_FUN1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    _______, _______, _______, _______, _______,                            _______, DE_COLN, KC_PSLS, KC_PAST, KC_PMNS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_HOME,                            _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                             _______, KC_P4,   KC_P5,   KC_P6,   DE_DOT,  KC_RCTL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_TAB,  _______, _______, KC_ENT,  _______, _______,          _______, _______, KC_P1,   KC_P2,   KC_P3,   DE_COMM, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, ALT_T(KC_P0)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// Function 2: F-Keys, ...
  [_FUN2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F21,  KC_F22,  KC_F23,  KC_F24,  _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                             _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                             _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// Master: Switch Layouts, Media, RGB, QMK, ...
  [_MAST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    _______, _______, _______, _______, _______,                            TO(_NEO),TO(_QUER),_______,_______,_______, RESET,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// QUERTZ
  [_QUER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    DE_1,    DE_2,    DE_3,    DE_4,    DE_5,                               DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,                               DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, DE_A,    DE_S,    DE_D,    DE_F,    DE_G,                               DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    MO(_MAST),        _______, DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, _______, KC_SPC,                    KC_BSPC, KC_ENT,  KC_LALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};
void eeconfig_init_user(void) {
  set_unicode_input_mode(UC_WIN);
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /*switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }*/
  return true;
}

bool is_alt_tab_active = false; // ADD this near the begining of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.


void encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(_NEO)) {
        if (index == 0) {
            if (!is_alt_tab_active) {
                is_alt_tab_active = true;
                register_code(KC_LALT);
            }
            alt_tab_timer = timer_read();
            if (clockwise) {
                tap_code(KC_TAB);
            } else {
                tap_code16(S(KC_TAB));
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_WH_D);
            } else {
                tap_code(KC_WH_U);
            }
        }
    } else if (IS_LAYER_ON(_SYMB)) {
        if (index == 0) {
            if (clockwise) {
                tap_code16(C(KC_TAB));
            } else {
                tap_code16(C(S(KC_TAB)));
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_WH_R);
            } else {
                tap_code(KC_WH_L);
            }
        }
    } else if (IS_LAYER_ON(_FUN1)) {
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_RIGHT);
            } else {
                tap_code(KC_LEFT);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_DOWN);
            } else {
                tap_code(KC_UP);
            }
        }
    } else if (IS_LAYER_ON(_FUN2)) {
        if (index == 0) {
            // nothing (is used as layer activation switch)
        } else if (index == 1) {
            if (clockwise) {
                tap_code16(C(DE_Y));
            } else {
                tap_code16(C(DE_Z));
            }
        }
    } else if (IS_LAYER_ON(_MAST)) {
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if (index == 1) {
            // nothing (is used as layer activation switch)
        }
    }
}

void matrix_scan_user(void) { // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 500) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
}
