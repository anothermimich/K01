// Copyright 2024 Lu (@anothermimich)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define USE_I2C         // Use protocol I2C to connect the halves

// Vial

#define VIAL_KEYBOARD_UID {0xAC, 0x36, 0x12, 0x43, 0x5D, 0xE9, 0x81, 0x06}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0} 
#define VIAL_UNLOCK_COMBO_COLS {0, 1} 

// Firmware size reduction.

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

/* disable action features */

//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
