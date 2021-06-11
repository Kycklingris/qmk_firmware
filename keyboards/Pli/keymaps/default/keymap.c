#include QMK_KEYBOARD_H

enum custom_keycodes {
    LCBO = SAFE_RANGE,
    RCBP,
    LABO,
    RABP,
    LSBO,
    RSBP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ansi_iso_combo(
		KC_MPLY, DM_PLY1, DM_PLY2, RGB_VAD, KC_SPC, KC_MNXT, KC_MPRV, 
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_PSCR, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_INS, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_DEL, 
		KC_LSFT, LT(1, KC_NUBS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, TT(3), 
		KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_NO, KC_RALT, TT(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT),

  [1] = LAYOUT_ansi_iso_combo(
		KC_TRNS, DM_REC1, DM_REC2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_PAUS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, 
		LSBO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RSBP, KC_TRNS, KC_TRNS, 
		LCBO, KC_TRNS, LABO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RABP, KC_TRNS, RCBP, KC_TRNS, KC_TRNS),

  [2] = LAYOUT_ansi_iso_combo(
		KC_TRNS, DM_REC1, DM_REC2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_PAUS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [3] = LAYOUT_ansi_iso_combo(
		TT(4), RGB_MOD, RGB_VAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_NUMLOCK, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_PSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLCK, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_PMNS, KC_TRNS, KC_PENT, KC_END, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_PPLS, KC_COMM, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case LCBO:
            if (record->event.pressed) {
                SEND_STRING("{");
            } else {
            }
            break;
        case RCBP:
            if (record->event.pressed) {
                SEND_STRING("}");
            } else {
            }
            break;
        case LABO:
            if (record->event.pressed) {
                SEND_STRING("[");
            } else {
            }
            break;
        case RABP:
            if (record->event.pressed) {
                SEND_STRING("]");
            } else {
            }
            break;
        case LSBO:
            if (record->event.pressed) {
                SEND_STRING("(");
            } else {
            }
            break;
        case RSBP:
            if (record->event.pressed) {
                SEND_STRING(")");
            } else {
            }
            break;
    }
    return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(3)) {
        if (clockwise) {
            rgblight_increase_hue();
        } else {
            rgblight_decrease_hue();
        }
    } else if (IS_LAYER_ON(2)) {
        if (clockwise) {
            rgblight_increase_sat();
        } else {
            rgblight_decrease_sat();
        }
    } else {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}

void suspend_power_down_user(void) { rgb_matrix_set_suspend_state(true); }

void suspend_wakeup_init_user(void) { rgb_matrix_set_suspend_state(false); }