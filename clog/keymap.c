#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLR LCTL_T(KC_R)
#define KC_LALT LALT_T(KC_A)
#define KC_LSHT LSFT_T(KC_TAB)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(1, NO_ARNG)
#define KC_BSM1 LT(2, NO_AE)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)
#define KC_LWIS LWIN_T(KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
    KC_Q,    KC_W,      KC_F,       KC_P,    KC_B,         KC_J,    KC_L,   KC_U,    KC_Y,   KC_BSM1,
    KC_LALT, KC_CTLR,   KC_LWIS,    KC_T,    KC_G,         KC_M,    KC_N,   KC_E,    KC_I,   KC_O,
    KC_Z,    KC_X,      KC_C,       KC_D,    KC_V,         KC_K,    KC_H,   KC_COMM, KC_DOT, KC_RLSH,
                                    KC_LSHT, KC_SPC,       KC_ENT,  KC_SPM2
    ),

    [1] = LAYOUT_split_3x5_2(
    NO_RABK, NO_AT,     NO_LPRN,    NO_RPRN, KC_EXLM,      KC_PPLS, KC_7,   KC_8,    KC_9,   KC_0,
    NO_ARNG, KC_PSLS,   NO_LCBR,    NO_RCBR, NO_QUES,      KC_PAST, KC_4,   KC_5,    KC_6,   NO_OSTR,
    NO_LABK, NO_AMPR,   NO_LBRC,    NO_RBRC, NO_PIPE,      NO_EQL,  KC_1,   KC_2,    KC_3,   KC_0,
                                    KC_TAB,  KC_BSPC,      KC_TRNS, KC_TRNS  
    ),

    [2] = LAYOUT_split_3x5_2(
    NO_DLR,  KC_TRNS,   KC_TRNS,    KC_TRNS, KC_TRNS,      KC_F9,   KC_F10, KC_F11,  KC_F12, KC_TRNS,
    KC_TAB,  KC_LEFT,   KC_UP,      KC_RGHT, KC_TRNS,      KC_F5,   KC_F6,  KC_F7,   KC_F8,  KC_TRNS,
    KC_TRNS, KC_TRNS,   KC_DOWN,    KC_TRNS, NO_DIAE,      KC_F1,   KC_F2,  KC_F3,   KC_F4,  QK_BOOT,
                                    KC_HOME, KC_END,       KC_ESC,  KC_DEL
    )
};
