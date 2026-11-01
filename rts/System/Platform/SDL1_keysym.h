/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#ifndef SDL1_KEYSYM_H
#define SDL1_KEYSYM_H

// Synthetic wheel keycodes retain their values across SDL compatibility conversions.
constexpr int SPRING_KEY_WHEELUP = 0xE100;
constexpr int SPRING_KEY_WHEELDOWN = 0xE101;

extern int SDL21_keysyms(const int SDL2_keycode);
extern int SDL12_keysyms(const int SDL1_keycode);

#endif // SDL1_KEYSYM_H
