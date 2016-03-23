#include "keymap_common.h"


#define DEFAULT_LAYER 0
#define FN1_LAYER     1
#define KEYPAD_LAYER  2
#define SPACEFN_LAYER 3

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|BSp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |  Fn4   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * |-----------------------------------------------------------'
     * | Fn1 |Alt|LGui  |         Space         |Gui  |Alt|Fn2|Fn3 |
     * `-----------------------------------------------------------'
     */
    /*
    */
    [DEFAULT_LAYER] =
    KEYMAP( \
           ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,   QUOT,ENT, \
           LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM,DOT, SLSH,   FN3,FN1, \
            FN0,LALT,LGUI,           FN2,                 RGUI,  FN4,FN5,FN6),

    // FN1
    [FN1_LAYER] =
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
            NO,MRWD,MPLY,MFFD,  NO,  NO,  NO,PGUP,HOME,  NO,  NO,SLCK,PAUS,DEL, \
            NO,VOLD,VOLU,MUTE,  NO,  NO,LEFT,DOWN,UP  ,RGHT,  NO,  NO,  NO, \
            NO,TRNS,  NO,  NO,  NO,  NO,  NO,PGDN,END ,  NO,  NO,PGUP,  NO, \
          TRNS,  NO,  NO,            NO,                 NO,HOME,PGDN,END),

    // Keypad
    [KEYPAD_LAYER] =
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,PSLS,PMNS,PPLS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,PAST,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   1,   2,   3,TRNS,TRNS, ENT, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,   0, DOT,TRNS,  UP,FN1, \
           TRNS,TRNS,TRNS,           PPLS,              PAST,LEFT,DOWN,RGHT),

    // Space Layer
    [SPACEFN_LAYER] =
    KEYMAP(GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10,VOLD,VOLU,MUTE, INS, \
          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,END,HOME,TRNS,MPLY,MRWD,MFFD,DEL, \
          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP  ,RGHT,TRNS,TRNS,TRNS, \
          TRNS,TRNS,TRNS,TRNS,TRNS, SPC,TRNS,PGDN,PGUP,TRNS,TRNS,TRNS,TRNS, \
          TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),

    /*
    [1] =
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),
    */


};

/*
 * Fn action definition
 */
const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(FN1_LAYER),            // FN0
    [1] = ACTION_LAYER_TAP_TOGGLE(KEYPAD_LAYER),        // FN1
    [2] = ACTION_LAYER_TAP_KEY(SPACEFN_LAYER, KC_SPC),  // FN2
    [3] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_UP),         // FN3
    [4] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_LEFT),       // FN4
    [5] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DOWN),       // FN5
    [6] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RIGHT),      // FN6
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),            // FN7
};

