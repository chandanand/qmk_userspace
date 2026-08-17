// Copyright 2026 Chandanand
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    L_BASE,
    L_NAV,
    L_MEDIA,
    L_MOUSE,
    L_NUM,
    L_FUN,
    L_SYM,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                                      KC_J,           KC_L,         KC_U,         KC_Y,         KC_SCLN,      KC_NO,
        KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,                                      KC_M,           LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), KC_NO,
        KC_NO, KC_Z,         KC_X,         KC_C,         KC_D,         KC_V,                                      KC_K,           KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_NO,
                                                     LT(L_MEDIA, KC_ESC), LT(L_NAV, KC_BSPC), LT(L_MOUSE, KC_TAB), LT(L_SYM, KC_ENT), LT(L_NUM, KC_SPC), LT(L_FUN, KC_DEL)
    ),

    [L_NAV] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                           SCMD(KC_Z), LCMD(KC_V), LCMD(KC_C), LCMD(KC_X), LCMD(KC_Z), KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                           CW_TOGG,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                           KC_INS,     KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_NO,
                                             KC_NO, KC_NO, KC_NO,          KC_ENT, KC_SPC, KC_DEL
    ),

    [L_MEDIA] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                           RM_TOGG, RM_NEXT, RM_HUEU, RM_SATU, RM_VALU, KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                           KC_NO,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                             KC_NO, KC_NO, KC_NO,          KC_MSTP, KC_MPLY, KC_MUTE
    ),

    [L_MOUSE] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                           SCMD(KC_Z), LCMD(KC_V), LCMD(KC_C), LCMD(KC_X), LCMD(KC_Z), KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                           KC_NO,      MS_LEFT,    MS_DOWN,    MS_UP,      MS_RGHT,    KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                           KC_NO,      MS_WHLL,    MS_WHLD,    MS_WHLU,    MS_WHLR,    KC_NO,
                                             KC_NO, KC_NO, KC_NO,          MS_BTN2, MS_BTN1, MS_BTN3
    ),

    [L_NUM] = LAYOUT_split_3x6_3(
        KC_NO, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_QUOT, KC_4,    KC_5,    KC_6,    KC_EQL,                          KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                             KC_DOT, KC_0, KC_MINS,        KC_NO, KC_NO, KC_NO
    ),

    [L_FUN] = LAYOUT_split_3x6_3(
        KC_NO, KC_F12, KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                          KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_F11, KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                          KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO, KC_F10, KC_F1,   KC_F2,   KC_F3,   KC_PAUS,                          KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                           KC_APP, KC_BSPC, KC_TAB,        KC_NO, KC_NO, KC_NO
    ),

    [L_SYM] = LAYOUT_split_3x6_3(
        KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_DQUO, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                         KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                           KC_LPRN, KC_RPRN, KC_UNDS,      KC_NO, KC_NO, KC_NO
    ),
};
// clang-format on

#if defined(KEYBOARD_boardsource_unicorne) && defined(OLED_ENABLE)
#    include "unicorne_oled.h"

static void render_layer_state_user(void) {
    switch (get_highest_layer(layer_state)) {
        case L_BASE:
            oled_write_raw_P(layer0_img, sizeof(layer0_img));
            break;
        case L_NAV:
            oled_write_raw_P(layer1_img, sizeof(layer1_img));
            break;
        case L_MEDIA:
            oled_write_raw_P(layer2_img, sizeof(layer2_img));
            break;
        case L_MOUSE:
            oled_write_raw_P(layer3_img, sizeof(layer3_img));
            break;
        case L_NUM:
            oled_write_raw_P(layer4_img, sizeof(layer4_img));
            break;
        case L_FUN:
            oled_write_raw_P(layer5_img, sizeof(layer5_img));
            break;
        case L_SYM:
            oled_write_raw_P(layer6_img, sizeof(layer6_img));
            break;
    }
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_layer_state_user();
    } else {
        oled_write_raw_P(bs_logo_img, sizeof(bs_logo_img));
    }
    return false;
}
#endif
