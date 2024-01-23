// Copyright 2024 Lu (@anothermimich)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define USE_I2C         // Use protocol I2C to connect the halves
#define TAPPING_TERM 20 // Time to hold key to acces tap-hold functions

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
