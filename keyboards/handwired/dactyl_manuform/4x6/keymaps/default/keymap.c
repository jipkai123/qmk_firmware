#include QMK_KEYBOARD_H


#define _BASE 0
#define _RAISE 2
#define _LOWER 3
#define _GAME 1

// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define GAME  TG(_GAME)
#define BASE TG(_BASE)

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
    KC_TAB(KC_TAB | KC_ALT) ,  KC_Q,  KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_MINS,   \
    LCTL(KC_ESC)            ,  KC_A,  KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,   \
    KC_LSFT                 , KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,                 KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_BSLASH, \
                    KC_LBRC,KC_RBRC,                                              KC_PLUS,KC_EQL,                    \
                                    RAISE ,KC_SPC,KC_BSPACE,      KC_DELETE, KC_ENT,  LOWER                                \
),

[_GAME] = LAYOUT(
    KC_TAB,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,_______,    \
    KC_LSFT,_______,_______,_______,_______,_______,             _______,_______,_______,_______,_______,_______,    \
    LCTL  ,_______,_______,_______,_______,_______,            _______,_______,_______,_______,_______,_______,    \
                                  KC_M,KC_SPC,    KC_ALT|KC_F4,BASE,                                    \
                                    KC_4,_______,_______,_______,_______,_______                                  \
),

[_LOWER] = LAYOUT(
    _______,_______,_______,_______,_______,KC_LBRC,            KC_RBRC, KC_P7, KC_P8,  KC_P9,  RESET,  KC_PLUS,   \
    _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,            KC_RPRN, KC_P4, KC_P5,  KC_P6,  KC_MINS,KC_PIPE,   \
    _______,GAME,_______,_______,_______,_______,            _______, KC_P1, KC_P2,  KC_P3,  KC_EQL, KC_UNDS,   \
                                            _______,KC_PSCR,    _______, KC_P0,                                    \
                                    _______,_______,_______,_______,_______                                  \
),

[_RAISE] = LAYOUT(
    _______,RESET,  _______,_______,_______,KC_LBRC,            KC_RBRC,_______,KC_NLCK,KC_INS, KC_SLCK,KC_MUTE,   \
    _______,KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,            KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,KC_VOLU,   \
    _______,GAME,_______,_______,_______,_______,            _______,_______,_______,_______,_______,KC_VOLD,   \
                                            _______,_______,    KC_EQL, _______,                                   \
                                     _______,KC_SPC,KC_TAB,KC_HOME, KC_ENT,KC_CTRL | KC_SHIFT | KC_ESC                                  \
)
};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
