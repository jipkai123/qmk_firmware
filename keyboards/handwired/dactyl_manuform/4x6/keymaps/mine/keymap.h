#pragma once

#include QMK_KEYBOARD_H

// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
uint8_t oneshot_mod_state;
uint16_t last_keycode;

bool caps_word_on;
void caps_word_enable(void);
void caps_word_disable(void);

enum layer_names {
    _BASE,
    _GAME,
    _RAISE,
    _LOWER,
    _PLOVER,
};

//original filler
#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define GAME  TG(_GAME)
#define BASE TG(_BASE)
#define PLOVER TG(_PLOVER)



// Miscellaneous keyboard shortcuts in direct access
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)
#define COMPOSE KC_APP

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)
#define HOME_LBRC LGUI_T(KC_LBRC)


// Right-hand home row mods
#define HOME_J RGUI_T(KC_J)
#define HOME_K LALT_T(KC_K)
#define HOME_L RSFT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

// One Shot Shifts
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)



