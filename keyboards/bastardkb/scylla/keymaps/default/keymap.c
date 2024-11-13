/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"


const key_override_t shift_1_override = ko_make_basic(MOD_MASK_SHIFT, SE_1, SE_EXLM);    // Shift+1 = !
const key_override_t shift_2_override = ko_make_basic(MOD_MASK_SHIFT, SE_2, SE_AT);      // Shift+2 = @
const key_override_t shift_3_override = ko_make_basic(MOD_MASK_SHIFT, SE_3, SE_HASH);    // Shift+3 = #
const key_override_t shift_4_override = ko_make_basic(MOD_MASK_SHIFT, SE_4, SE_DLR);     // Shift+4 = $
const key_override_t shift_5_override = ko_make_basic(MOD_MASK_SHIFT, SE_5, SE_PERC);    // Shift+5 = %
const key_override_t shift_6_override = ko_make_basic(MOD_MASK_SHIFT, SE_6, SE_CIRC);    // Shift+6 = ^
const key_override_t shift_7_override = ko_make_basic(MOD_MASK_SHIFT, SE_7, SE_AMPR);    // Shift+7 = &
const key_override_t shift_8_override = ko_make_basic(MOD_MASK_SHIFT, SE_8, SE_ASTR);    // Shift+8 = *
const key_override_t shift_9_override = ko_make_basic(MOD_MASK_SHIFT, SE_9, SE_LPRN);    // Shift+9 = (
const key_override_t shift_0_override = ko_make_basic(MOD_MASK_SHIFT, SE_0, SE_RPRN);    // Shift+0 = )

const key_override_t shift_grv_override = ko_make_basic(MOD_MASK_SHIFT, SE_GRV, SE_TILD);    // Shift+` = ~
const key_override_t shift_bsls_override = ko_make_basic(MOD_MASK_SHIFT, SE_BSLS, SE_PIPE);    // Shift+\ = |
const key_override_t shift_quot_override = ko_make_basic(MOD_MASK_SHIFT, SE_QUOT, SE_DQUO);    // Shift+' = "
const key_override_t shift_eql_override = ko_make_basic(MOD_MASK_SHIFT, SE_EQL, SE_PLUS);    // Shift+= = +

const key_override_t shift_lbrc_override = ko_make_basic(MOD_MASK_SHIFT, SE_LBRC, SE_LCBR);    // Shift+[ = {
const key_override_t shift_rbrc_override = ko_make_basic(MOD_MASK_SHIFT, SE_RBRC, SE_RCBR);    // Shift+] = }

const key_override_t shift_mins_override = ko_make_basic(MOD_MASK_SHIFT, SE_MINS, SE_UNDS);    // Shift+- = _

const key_override_t shift_comm_override = ko_make_basic(MOD_MASK_SHIFT, SE_COMM, SE_LABK);    // Shift+, = <
const key_override_t shift_dot_override = ko_make_basic(MOD_MASK_SHIFT, SE_DOT, SE_RABK);    // Shift+. = >

const key_override_t shift_scln_override = ko_make_basic(MOD_MASK_SHIFT, SE_SCLN, SE_COLN);    // Shift+; = :
const key_override_t shift_slsh_override = ko_make_basic(MOD_MASK_SHIFT, SE_SLSH, SE_QUES);    // Shift+/ = ?

// Override list
const key_override_t *key_overrides[] = {
&shift_1_override,
&shift_2_override,
&shift_3_override,
&shift_4_override,
&shift_5_override,
&shift_6_override,
&shift_7_override,
&shift_8_override,
&shift_9_override,
&shift_0_override,
&shift_grv_override,
&shift_bsls_override,
&shift_quot_override,
&shift_eql_override,
&shift_lbrc_override,
&shift_rbrc_override,
&shift_mins_override,
&shift_comm_override,
&shift_dot_override,
&shift_scln_override,
&shift_slsh_override
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_4x6_5(
        SE_GRV, SE_1, SE_2, SE_3, SE_4, SE_5,       SE_6, SE_7, SE_8, SE_9, SE_0, SE_BSLS,
        KC_TAB, SE_Q, SE_W, SE_F, SE_P, SE_B,        SE_J, SE_L, SE_U, SE_Y, SE_QUOT, SE_EQL,
        SE_LBRC, SE_A, SE_R, SE_S, SE_T, SE_G,       SE_M, SE_N, SE_E, SE_I, SE_O, SE_MINS,
        SE_RBRC, SE_Z, SE_X, SE_C, SE_D, SE_V,       SE_K, SE_H, SE_COMM, SE_DOT, SE_SCLN, SE_SLSH,

        KC_LCTL, MO(2), KC_LSFT,                       KC_ESC, MO(3), KC_RGUI,
                   KC_LALT, KC_SPC,                     KC_BSPC, KC_ENT
    ),

    [1] = LAYOUT_split_4x6_5(
        SE_GRV, SE_1, SE_2, SE_3, SE_4, SE_5,       SE_6, SE_7, SE_8, SE_9, SE_0, SE_BSLS,
        KC_TAB, SE_Q, SE_W, SE_E, SE_R, SE_T,        SE_Y, SE_U, SE_I, SE_O, SE_P, SE_EQL,
        SE_LBRC, SE_A, SE_S, SE_D, SE_F, SE_G,       SE_H, SE_J, SE_K, SE_L, SE_QUOT, SE_MINS,
        SE_RBRC, SE_Z, SE_X, SE_C, SE_V, SE_D,       SE_N, SE_M, SE_COMM, SE_DOT, SE_SCLN, SE_SLSH,

        KC_LCTL, MO(2), KC_LSFT,                       KC_ESC, MO(3), KC_RGUI,
                   KC_LALT, KC_SPC,                     KC_BSPC, KC_ENT
    ),

    [2] = LAYOUT_split_4x6_5(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,         KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_NO, KC_F13, KC_F14, KC_F15, KC_PGUP, KC_CAPS,  KC_NO, KC_HOME, KC_PSCR, KC_PAUS, KC_NO, KC_F12,
        KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DEL,   KC_NO, SE_ADIA, SE_ARNG, SE_ODIA, KC_NO, KC_NO,
        KC_NO, KC_MPLY, KC_F16, KC_F17, KC_PGDN, KC_NO,    KC_NO, KC_END, KC_INS, KC_SCRL, KC_NO, KC_NO,

        KC_LCTL, MO(2), KC_LSFT,                            KC_ESC, MO(3), KC_RGUI,
                   KC_LALT, KC_SPC,                          KC_BSPC, KC_ENT
    ),

    [3] = LAYOUT_split_4x6_5(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(1),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_VOLD, KC_VOLU, KC_MPLY, KC_MUTE, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_MRWD, KC_MFFD, KC_NO, KC_NO, KC_NO,

        KC_LCTL, MO(2), KC_LSFT,                            KC_ESC, MO(3), KC_RGUI,
                   KC_LALT, KC_SPC,                          KC_BSPC, KC_ENT
    ),
};