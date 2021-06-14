#include QMK_KEYBOARD_H
#include "keymap_steno.h"
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (qwerty)
 * +-----------------------------------------+                             +-----------------------------------------+
 * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |      |
 * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
 *               |  [   |   ]  |                                                         |      |      |
 *               +-------------+-------------+                             +-------------+-------------+
 *                             |      |      |                             |      |      |
 *                             |------+------|                             |------+------|
 *                             |      |      |                             |      |      |
 *                             +-------------+                             +-------------+
 *                                           +-------------+ +-------------+
 *                                           |      |      | |      |      |
 *                                           |------+------| |------+------|
 *                                           |      |      | |      |      |
 *                                           +-------------+ +-------------+
 */

[_BASE] = LAYOUT( \
    KC_GESC , KC_Q,  KC_W,   KC_E,   KC_R,   KC_T,                KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_MINS,   \
    KC_TAB  , KC_A, HOME_S, HOME_D, HOME_F,   KC_G,            KC_H,KC_J, KC_K, KC_L, KC_SCLN,KC_QUOT,   \
    KC_LSFT , KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,                 KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_BSLASH, \
                    HOME_LBRC,KC_RBRC,                                              UNDO,REDO,                    \
                                    RAISE ,KC_SPC,KC_BSPACE,      KC_DELETE, KC_ENT,  LOWER                                \
),

[_GAME] = LAYOUT(
    KC_M,KC_TAB,KC_Q,KC_W,KC_E,KC_R,            _______,_______,_______,_______,_______,_______,    \
    KC_B,KC_LSFT,  KC_A,   KC_S,   KC_D,   KC_G,               _______,_______,_______,_______,_______,_______,    \
    KC_LCTL,KC_LCTL,  KC_Z,  KC_X,   KC_C,   KC_V,         _______,_______,_______,_______,_______,_______,    \
                                  KC_M,KC_SPC,                  KC_LALT,GAME,                                    \
                                    KC_SPC,KC_4,KC_3,_______,_______,_______                                  \
),

[_LOWER] = LAYOUT(
    _______,KC_F10,KC_F7, KC_F8,  KC_F9,KC_LBRC,            KC_RBRC, KC_P7, KC_P8,  KC_P9,  RESET,  KC_PLUS,   \
    _______,KC_F11,KC_F4, KC_F5,  KC_F6 ,KC_LPRN,            KC_RPRN, KC_P4, KC_P5,  KC_P6,  KC_MINS,KC_PIPE,   \
    _______,KC_F12,KC_F1, KC_F2,  KC_F3 ,_______,            _______, KC_P1, KC_P2,  KC_P3,  KC_EQL, KC_UNDS,   \
                                            GAME,PLOVER,    _______, KC_P0,                                    \
                                    KC_LCTL,KC_LALT,KC_LSHIFT,_______,_______,_______                                   \
),

[_RAISE] = LAYOUT(
    _______,RESET,  _______,_______,_______,KC_LBRC,            KC_RBRC,_______,KC_NLCK,KC_INS, KC_SLCK,KC_MUTE,   \
    _______,KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,            KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,KC_VOLU,   \
    _______,_______,_______,_______,_______,_______,            _______,KC_AT,KC_PERCENT,_______,_______,KC_VOLD,   \
                                            GAME,PLOVER,    KC_EQL, _______,                                   \
                                     _______,KC_SPC,KC_TAB,KC_HOME, KC_ENT,_______                                 \
),


[_PLOVER] = LAYOUT(
        _______, STN_N1, STN_N2, STN_N3, STN_N4, STN_N5,     STN_N6, STN_N7,  STN_N8,  STN_N9,  STN_NA, KC_BSPC,
        _______, STN_S1, STN_TL, STN_PL, STN_HL,STN_ST1,    STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        _______, STN_S2, STN_KL, STN_WL, STN_RL,STN_ST2,    STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                                          STN_A,  STN_O,      STN_E,  STN_U,
                                    PLOVER,_______,_______,_______,_______,_______                                \
)

};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
