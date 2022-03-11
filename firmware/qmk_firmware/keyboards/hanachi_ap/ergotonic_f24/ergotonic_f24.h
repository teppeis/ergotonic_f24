/* Copyright 2022 hanachi-ap
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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define XXX KC_NO

#define LAYOUT( \
    L01, L05, L08, L11, L15, L19,            R27, R31, R35, R39, R42, R45, \
    L02, L06, L09, L12, L16, L20,            R28, R32, R36, R40, R43, R46, \
    L03, L07, L10, L13, L17, L21, L23,  R25, R29, R33, R37, R41, R44, R47, \
    L04,           L14, L18, L22, L24,  R26, R30, R34, R38,           R48  \
    ) \
    { \
        { L01, L05, L08, L11, L15, L19, XXX  }, \
        { L02, L06, L09, L12, L16, L20, XXX  }, \
        { L03, L07, L10, L13, L17, L21, L23  }, \
        { L04, XXX, XXX, L14, L18, L22, L24  }, \
        { XXX, R27, R31, R35, R39, R42, R45  }, \
        { XXX, R28, R32, R36, R40, R43, R46  }, \
        { R25, R29, R33 ,R37, R41, R44, R47  }, \
        { R26, R30, R34, R38, XXX, XXX, R48  }  \
    }
