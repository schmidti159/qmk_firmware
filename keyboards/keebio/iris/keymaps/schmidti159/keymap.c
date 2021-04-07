#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define _NEO 0
#define _QUER 1
#define _SYMB 2
#define _FUN1 3
#define _FUN2 4
#define _MAST 5

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
#define UC_NBSP 0x00a0 // non breaking speed

#define GL(KC) LGUI_T(KC)
#define AL(KC) LALT_T(KC)
#define CL(KC) LCTL_T(KC)
#define SL(KC) LSFT_T(KC)

#define SR(KC) RSFT_T(KC)
#define CR(KC) RCTL_T(KC)
#define AR(KC) LALT_T(KC)
#define GR(KC) RGUI_T(KC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_NEO] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_HYPR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MEH,  KC_X,    KC_V,    KC_L,    KC_C,    KC_W,                               KC_K,    KC_H,    KC_G,    KC_F,    KC_Q,    DE_SS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   CL(KC_ESC),GL(KC_U),AL(KC_I),CL(KC_A),SL(KC_E),KC_O,                               KC_S,    SR(KC_N),CR(KC_R),AR(KC_T),GR(KC_D),DE_Y,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     MO(_MAST),DE_UE,  DE_OE,   DE_AE,   KC_P,    DE_Z,    MO(_FUN2),       MO(_MAST),KC_B,    KC_M,    DE_COMM, DE_DOT,  KC_J,    MO(_FUN2),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    MO(_SYMB),LT(_FUN1,KC_TAB),
                                                      SL(KC_SPC),              SR(KC_BSPC),
                                                                                       LT(_FUN1,KC_ENT),MO(_SYMB)
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
     KC_LCTL, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    MO(_MAST),        MO(_MAST),DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, MO(_MAST),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_TAB,  KC_SPC,                    KC_BSPC, KC_ENT,  KC_LALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
// Symbols
  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, UC(UC_3DOTS),
                       DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC,                            DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    UC(UC_NBSP),DE_BSLS,DE_SLSH,DE_LCBR, DE_RCBR, DE_ASTR,                            DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN ,DE_AT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,  _______,          _______, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,               _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// Function 1: arrow keys, numpad
  [_FUN1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     LOCK,    _______, _______, _______, _______, _______,                            _______, DE_COLN, KC_PSLS, KC_PAST, KC_PMNS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_APP,  KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_HOME,                            KC_SPC,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_INS,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                            DE_COLN,SR(KC_P4),CR(KC_P5),AR(KC_P6),GR(DE_DOT),_______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     LT(_MAST,KC_ALGR),
              KC_TAB,  KC_WBAK, KC_WFWD, KC_ENT,  KC_SPC, _______,          _______, KC_TAB,  KC_P1,   KC_P2,   KC_P3,   DE_COMM, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

// Function 2: F-Keys, ...
  [_FUN2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     C(KC_F1),C(KC_F2),C(KC_F3),C(KC_F4),C(KC_F5),C(KC_F6),                          C(KC_F13),C(KC_F14),C(KC_F15),C(KC_F16),C(KC_F17),C(KC_F18),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     C(KC_F7),C(KC_F8),C(KC_F9),C(KC_F10),C(KC_F11),C(KC_F12),                       C(KC_F19),C(KC_F20),C(KC_F21),C(KC_F22),C(KC_F23),C(KC_F24),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,          _______, KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LALT, KC_LSFT,                   KC_RSFT, KC_LALT, KC_RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
// Master: Switch Layouts, Media, RGB, QMK, ...
  [_MAST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     TO(_NEO),TO(_QUER),_______,_______, _______, RESET,                              _______, _______, _______, _______, _______, RESET,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_SLEP, _______, KC_VOLD, _______, KC_VOLU, _______,                            KC_BTN6, KC_BTN1, KC_MS_U, KC_BTN2, _______, DM_RSTP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     BL_STEP, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,                            KC_BTN7, KC_MS_L, KC_MS_D, KC_MS_R, DM_PLY1, DM_REC1,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_CALC, _______, _______, _______, _______, KC_MUTE,          _______, KC_BTN8, KC_BTN4, KC_BTN3, KC_BTN5, DM_PLY2, DM_REC2,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

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

// #### ENCODER SETUP ####
bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

bool is_ctrl_tab_active = false;
uint16_t ctrl_tab_timer = 0;

void encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(_MAST)) {
        if (index == 0) {
            for(int i=0; i<2; i++) {
                clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
            }
        } else if (index == 1) {
            clockwise ? tap_code(KC_WH_R) : tap_code(KC_WH_L);
        }
    } else if (IS_LAYER_ON(_FUN2)) {
        if (index == 0) {
            clockwise ? tap_code16(KC_WFWD) : tap_code16(KC_WBAK);
        } else if (index == 1) {
            clockwise ? tap_code16(C(DE_Y)) : tap_code16(C(DE_Z));
        }
    } else if (IS_LAYER_ON(_FUN1)) {
        if (index == 0) {
            clockwise ? tap_code(KC_RIGHT) : tap_code(KC_LEFT);
        } else if (index == 1) {
            clockwise ? tap_code(KC_DOWN) : tap_code(KC_UP);
        }
    } else if (IS_LAYER_ON(_SYMB)) {
        if (index == 0) {
            if (!is_ctrl_tab_active) {
                is_ctrl_tab_active = true;
                register_code(KC_LCTRL);
            }
            ctrl_tab_timer = timer_read();

            clockwise ? tap_code(KC_TAB) : tap_code16(S(KC_TAB));
        } else if (index == 1) {
            // scroll fast
            for(int i=0; i<20; i++) {
                clockwise ? tap_code(KC_WH_D) : tap_code(KC_WH_U);
            }
        }
    } else if (IS_LAYER_ON(_NEO)) {
        if (index == 0) {
            if (!is_alt_tab_active) {
                is_alt_tab_active = true;
                register_code(KC_LALT);
            }
            alt_tab_timer = timer_read();

            clockwise ? tap_code(KC_TAB) : tap_code16(S(KC_TAB));
        } else if (index == 1) {
            clockwise ? tap_code(KC_WH_D) : tap_code(KC_WH_U);
        }
    }
}

void matrix_scan_user(void) { // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 700) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
  if(is_ctrl_tab_active) {
    if (timer_elapsed(ctrl_tab_timer) > 700) {
      unregister_code(KC_LCTRL);
      is_ctrl_tab_active = false;
    }
  }
}

// #### RGB LAYERS ####
void keyboard_post_init_user(void) {
    rgblight_setrgb(RGB_WHITE);
    rgblight_disable();
}
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_enable();
    switch (get_highest_layer(state)) {
    case _QUER:
        rgblight_setrgb(RGB_BLUE);
        break;
    case _SYMB:
        rgblight_setrgb(RGB_CYAN);
        break;
    case _FUN1:
        rgblight_setrgb(RGB_YELLOW);
        break;
    case _FUN2:
        rgblight_setrgb(RGB_ORANGE);
        break;
    case _MAST:
        rgblight_setrgb(RGB_RED);
        break;
    default: //  for any other layers, or the default layer
        rgblight_disable();
        break;
    }
  return state;
}
