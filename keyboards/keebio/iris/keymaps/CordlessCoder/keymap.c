// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Shift + esc = ~
const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRV));
// GUI + esc = `
const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_GUI, KC_ESC, KC_GRV);

// Shift + ( = 4
const key_override_t lprn_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_4);
// GUI + ( = GUI + 4
const key_override_t gui_4_override = ko_make_basic(MOD_MASK_GUI, KC_LPRN, LGUI(KC_4));
// Ctrl + ( = Ctrl + 4
const key_override_t ctrl_4_override = ko_make_basic(MOD_MASK_CTRL, KC_LPRN, LCTL(KC_4));
// Shift + ) = 7
const key_override_t rprn_override = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_7);
// GUI + ) = GUI + 7
const key_override_t gui_7_override = ko_make_basic(MOD_MASK_GUI, KC_RPRN, LGUI(KC_7));
// Ctrl + ) = Ctrl + 7
const key_override_t ctrl_7_override = ko_make_basic(MOD_MASK_CTRL, KC_RPRN, LCTL(KC_7));

// Shift + { = 3
const key_override_t lcbr_override = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_3);
// GUI + { = GUI + 3
const key_override_t gui_3_override = ko_make_basic(MOD_MASK_GUI, KC_LCBR, LGUI(KC_3));
// Ctrl + { = Ctrl + 3
const key_override_t ctrl_3_override = ko_make_basic(MOD_MASK_CTRL, KC_LCBR, LCTL(KC_3));
// Shift + } = 8
const key_override_t rcbr_override = ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_8);
// GUI + } = GUI + 8
const key_override_t gui_8_override = ko_make_basic(MOD_MASK_GUI, KC_RCBR, LGUI(KC_8));
// Ctrl + } = Ctrl + 8
const key_override_t ctrl_8_override = ko_make_basic(MOD_MASK_CTRL, KC_RCBR, LCTL(KC_8));

// Shift + [ = 2
const key_override_t lbrc_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_2);
// GUI + [ = GUI + 2
const key_override_t gui_2_override = ko_make_basic(MOD_MASK_GUI, KC_LBRC, LGUI(KC_2));
// Ctrl + [ = Ctrl + 2
const key_override_t ctrl_2_override = ko_make_basic(MOD_MASK_CTRL, KC_LBRC, LCTL(KC_2));
// Shift + ] = 9
const key_override_t rbrc_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, KC_9);
// GUI + ] = GUI + 9
const key_override_t gui_9_override = ko_make_basic(MOD_MASK_GUI, KC_RBRC, LGUI(KC_9));
// Ctrl + ] = Ctrl + 9
const key_override_t ctrl_9_override = ko_make_basic(MOD_MASK_CTRL, KC_RBRC, LCTL(KC_9));

// Shift + & = 5
const key_override_t ampr_override = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_5);
// GUI + & = GUI + 5
const key_override_t gui_5_override = ko_make_basic(MOD_MASK_GUI, KC_AMPR, LGUI(KC_5));
// Ctrl + & = Ctrl + 5
const key_override_t ctrl_5_override = ko_make_basic(MOD_MASK_CTRL, KC_AMPR, LCTL(KC_5));

// Shift + = = 6
const key_override_t eql_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_6);
// GUI + = = GUI + 6
const key_override_t gui_6_override = ko_make_basic(MOD_MASK_GUI, KC_EQL, LGUI(KC_6));
// Ctrl + = = Ctrl + 6
const key_override_t ctrl_6_override = ko_make_basic(MOD_MASK_CTRL, KC_EQL, LCTL(KC_6));

// Shift + + = 0
const key_override_t plus_override = ko_make_basic(MOD_MASK_SHIFT, KC_PLUS, KC_0);
// GUI + + = GUI + 0
const key_override_t gui_0_override = ko_make_basic(MOD_MASK_GUI, KC_PLUS, LGUI(KC_0));
// Ctrl + + = Ctrl + 0
const key_override_t ctrl_0_override = ko_make_basic(MOD_MASK_CTRL, KC_PLUS, LCTL(KC_0));

// Shift + ! = 1
const key_override_t exlm_override = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_1);
// GUI + ! = GUI + 1
const key_override_t gui_1_override = ko_make_basic(MOD_MASK_GUI, KC_EXLM, LGUI(KC_1));
// Ctrl + ! = Ctrl + 1
const key_override_t ctrl_1_override = ko_make_basic(MOD_MASK_CTRL, KC_EXLM, LCTL(KC_1));

// Shift + * = #
const key_override_t astr_override = ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_HASH);

// Register overrides

const key_override_t **key_overrides = (const key_override_t *[]){
    &tilde_esc_override,
    &grave_esc_override,
    &lprn_override,
    &rprn_override,
    &lbrc_override,
    &rcbr_override,
    &lbrc_override,
    &rbrc_override,
    &ampr_override,
    &eql_override,
    &plus_override,
    &exlm_override,
    &astr_override,
    &gui_0_override,
    &gui_1_override,
    &gui_2_override,
    &gui_3_override,
    &gui_4_override,
    &gui_5_override,
    &gui_6_override,
    &gui_7_override,
    &gui_8_override,
    &gui_9_override,
    &ctrl_0_override,
    &ctrl_1_override,
    &ctrl_2_override,
    &ctrl_3_override,
    &ctrl_4_override,
    &ctrl_5_override,
    &ctrl_6_override,
    &ctrl_7_override,
    &ctrl_8_override,
    &ctrl_9_override,
    NULL // Don't forget the NULL!
};

#define _MAIN 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
#define _QWERTY 4

enum custom_keycodes {
    MAIN = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    QWERTY,
};

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_MINS, KC_EXLM, KC_LBRC, KC_LCBR, KC_LPRN, KC_AMPR,                            KC_EQL,  KC_RPRN, KC_RCBR, KC_RBRC, KC_PLUS, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_RSFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_LALT,          KC_ESC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_ASTR,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_SPC,  LOWER,                     RAISE,   KC_BSPC, KC_ENT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PAST, KC_P6,   KC_P7,   KC_P8,   KC_NUM,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PMNS, KC_PPLS, KC_P9,   KC_P1,   KC_P2,   _______,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_PSLS, KC_P3,   KC_P4,   KC_P5,   _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_P0,   KC_P0,   _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______,                            KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_MPLY, KC_MPLY, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘

  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            RGB_MOD,  BL_UP, RGB_HUI, RGB_SAI, RGB_VAI,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     DF(_QWERTY),_______,_______,_______,_______, _______, _______,          _______, RGB_TOG, BL_DOWN, RGB_HUD, RGB_SAD, RGB_VAI, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          DF(_MAIN),KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ASTR,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_SPC,  LOWER,                     RAISE,   KC_BSPC, KC_ENT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MAIN:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MAIN);
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
        case QWERTY:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
            break;
    }
    return true;
}
