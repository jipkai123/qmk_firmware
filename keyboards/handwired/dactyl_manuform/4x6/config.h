/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x3436
#define DEVICE_VER      0x0001
#define DESCRIPTION     A split keyboard for the cheap makers

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// row-driven
#define MATRIX_COL_PINS_RIGHT { F7, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }

#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4, F7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// Default tapping term is 200
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// This prevents accidental repeats of the tap-hold keys when typing quickly.
//#define TAPPING_FORCE_HOLD_PER_KEY

// This prevents short hold periods to be interpreted as individual taps when typing quickly.
#define PERMISSIVE_HOLD
