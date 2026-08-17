// Copyright 2026 Chandanand
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef KEYBOARD_boardsource_unicorne
#    undef STARTUP_SONG
#    define STARTUP_SONG SONG(COLEMAK_SOUND)

#    undef ANALOG_JOYSTICK_Y_AXIS_PIN
#    undef ANALOG_JOYSTICK_X_AXIS_PIN
#    define ANALOG_JOYSTICK_Y_AXIS_PIN GP27
#    define ANALOG_JOYSTICK_X_AXIS_PIN GP26

#    undef POINTING_DEVICE_INVERT_X
#    define ANALOG_JOYSTICK_SPEED_REGULATOR 10
#    define SPLIT_POINTING_ENABLE
#    define POINTING_DEVICE_RIGHT
#endif
