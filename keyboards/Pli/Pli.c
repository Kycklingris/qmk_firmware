
#include "Pli.h"

void bootmagic_lite(void)
{
	// The lite version of TMK's bootmagic made by Wilba.
	// 100% less potential for accidentally making the
	// keyboard do stupid things.

	// We need multiple scans because debouncing can't be turned off.
	matrix_scan();
	wait_ms(DEBOUNCE);
	matrix_scan();

	// If the Esc and space bar are held down on power up,
	// reset the EEPROM valid state and jump to bootloader.
	// Assumes Esc is at [0,0] and spacebar is at [4,7].
	// This isn't very generalized, but we need something that doesn't
	// rely on user's keymaps in firmware or EEPROM.
	if ( ( matrix_get_row(1) & (1<<0) ) &&
		( matrix_get_row(4) & (1<<5) ) )
	{
		// Set the TMK/QMK EEPROM state as invalid.
		eeconfig_disable();
		//eeprom_set_valid(false);
		// Jump to bootloader.
		bootloader_jump();
	}
}

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 },
  { 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15 },
  { 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33 && 32 && 31, 30 },
  { 61 && 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46 },
  { 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62 }
}, {
  // LED Index to Physical Position
  {224,  0}, {199,  0}, {177,  0}, {162,  0}, {148,  0}, {133,  0}, {118,  0}, {103,  0}, {89,  0}, {74,  0}, {59,  0}, {44,  0}, {30, 0}, {15, 0}, {0, 0},
  {224,  16}, {203,  16}, {185,  16}, {170,  16}, {155,  16}, {141,  16}, {126,  16}, {111,  16}, {96,  16}, {82,  16}, {66,  16}, {52,  16}, {38, 16}, {23, 16}, {4, 16},
  {224,  32}, {205,  25}, {198,  33}, {188,  32}, {174,  32}, {159,  32}, {145,  32}, {130,  32}, {115,  32}, {100,  32}, {86,  32}, {70,  32}, {56, 32}, {42, 32}, {27, 32}, {6,32},
  {224,  48}, {209,  48}, {186,  48}, {166,  48}, {151,  48}, {137,  48}, {122,  48}, {107,  48}, {92,  48}, {78,  48}, {62,  48}, {48,  48}, {34, 48}, {19, 48}, {9, 48}, {2,48},
  {224,  64}, {209,  64}, {194,  64}, {175,  64}, {162,  64}, {150,  64}, {124,  64}, {91,  64}, {65,  64}, {39,  64}, {23,  64}, {3,  64}
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4 /*enter*/, 4, 4 /*enter*/, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0 /*ansi shift*/, 1,
  4, 4, 4, 1, 4, 1, 4, 4, 4, 1, 4, 1
} };

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

	matrix_init_user();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware

	return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        writePin(D1, led_state.num_lock);
        writePin(D0, led_state.caps_lock);
    }
    return res;
}
