#include "keymap_common.h"

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
    [0] =
    KEYMAP( \
           ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,ENT, \
           LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT,FN1, \
           FN0,LALT,LGUI,           SPC,                  RGUI,RALT,FN2,FN3),
    */
    [0] =
    KEYMAP( \
           ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL,FN7,  S,   D,   F,   G,   H,   J,   K,   L,SCLN,   QUOT,ENT, \
           LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,  SLSH,FN2,FN1, \
           FN0,LALT,LGUI,           SPC,                 RGUI,   FN3,FN4,FN5),

   /* Layer 1: Arrow/NumPad mode
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |  Up  |   |
     * `-----------------------------------------------------------'
     * |     |   |      |                       |     |Lef|Dow|Righ|
     * `-----------------------------------------------------------'
     *
     */
    [1] =
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP  ,TRNS, \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,LEFT,DOWN,RGHT),

    /* Layer 2: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |Prv|Stp|Nxt|   |   |   |PgU|Hom|   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |Lef|Dow| Up|Rig|   |   |Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |PgD|End|   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |Gui|Alt  |         Space         |Alt  |Gui|   |     |
     * `-----------------------------------------------------------'
     */
    [2] =
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           APP,MRWD,MPLY,MFFD,  NO,  NO,  NO,PGUP,HOME,  NO,  NO,SLCK,PAUS,DEL, \
            NO,VOLD,VOLU,MUTE,  NO,  NO,LEFT,DOWN,UP  ,RGHT,  NO,  NO,  NO, \
            NO, NO,  NO,  NO,  NO,  NO,  NO,PGDN,END ,  NO,  NO,PGUP,  NO, \
          TRNS,  NO,  NO,            NO,                 NO,HOME,PGDN,END),

   /* Layer 3: Arrow/NumPad mode
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |  Up  |   |
     * `-----------------------------------------------------------'
     * |     |   |      |                       |     |Lef|Dow|Righ|
     * `-----------------------------------------------------------'
     *
     */
    [3] =
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,PSLS,PMNS,PPLS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,PAST,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   1,   2,   3,TRNS,TRNS, ENT, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,   0, DOT,TRNS,  UP,FN1, \
           TRNS,TRNS,TRNS,           PPLS,              PAST,LEFT,DOWN,RGHT),

    /* Layer 4: Arrow/NumPad mode
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |  Up  |   |
     * `-----------------------------------------------------------'
     * |     |   |      |                       |     |Lef|Dow|Righ|
     * `-----------------------------------------------------------'
     *
     */
    [4] =
    KEYMAP(TRNS,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HAEN,TRNS,VOLD,VOLU,MUTE,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MFFD,MFFD,MPLY, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),
    /*
    [1] =
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),
    */

    [5] =
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,PSLS,PMNS,PPLS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,PAST,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   1,   2,   3,TRNS,TRNS,ENT, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,   0, DOT,TRNS,PGUP,FN1, \
           TRNS,TRNS,TRNS,           PPLS,              PAST,HOME,PGDN,END),


};

/*
 * Fn action definition
 */
const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(2),     // FN0
    [1] = ACTION_LAYER_TAP_TOGGLE(3),        // FN1
    [2] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_UP), // FN2
    [3] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_LEFT), // FN3
    [4] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DOWN), // FN4
    [5] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RIGHT), // FN5
    [6] = ACTION_MODS_TAP_KEY(MOD_RGUI, KC_BSPC), // FN6
    [7] = ACTION_LAYER_TAP_KEY(5, KC_A ),     // FN7
};

