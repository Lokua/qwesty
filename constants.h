extern const uint8_t MAJOR[7] = {0, 2, 4, 5, 7, 9, 11};
extern const uint8_t HARMONIC_MAJOR[7] = {0, 2, 4, 5, 7, 8, 11};
extern const uint8_t MIXOLYDIAN[7] = {0, 2, 4, 5, 7, 9, 10};
extern const uint8_t MAJOR_PENTATONIC[5] = {0, 2, 4, 7, 9};

extern const uint8_t MINOR[7] = {0, 2, 3, 5, 7, 8, 10};
extern const uint8_t HARMONIC_MINOR[7] = {0, 2, 4, 5, 7, 8, 11};
extern const uint8_t BLUES_MINOR[6] = {0, 3, 5, 6, 7, 10};
extern const uint8_t MINOR_PENTATONIC[5] = {0, 3, 5, 7, 10};

extern const uint8_t DORIAN[7] = {0, 2, 3, 5, 7, 9, 10};
extern const uint8_t PHRYGIAN[7] = {0, 1, 3, 5, 7, 8, 10};
extern const uint8_t PHRYGIAN_DOMINANT[7] = {0, 1, 4, 5, 7, 8, 10};
extern const uint8_t LYDIAN_DOMINANT[7] = {0, 2, 4, 6, 7, 9, 10};

extern const uint8_t KEYS[] = {
  // 1
  PS2_KEY_Z,
  PS2_KEY_X,
  PS2_KEY_C,
  PS2_KEY_V,
  PS2_KEY_B,
  PS2_KEY_N,
  PS2_KEY_M,
  PS2_KEY_COMMA,
  PS2_KEY_DOT,
  PS2_KEY_DIV,
  PS2_KEY_R_SHIFT,
  // 2
  PS2_KEY_A,
  PS2_KEY_S,
  PS2_KEY_D,
  PS2_KEY_F,
  PS2_KEY_G,
  PS2_KEY_H,
  PS2_KEY_J,
  PS2_KEY_K,
  PS2_KEY_L,
  PS2_KEY_SEMI,
  PS2_KEY_SINGLE,
  PS2_KEY_ENTER,
  // 3
  PS2_KEY_Q,
  PS2_KEY_W,
  PS2_KEY_E,
  PS2_KEY_R,
  PS2_KEY_T,
  PS2_KEY_Y,
  PS2_KEY_U,
  PS2_KEY_I,
  PS2_KEY_O,
  PS2_KEY_P,
  PS2_KEY_OPEN_SQ,
  PS2_KEY_CLOSE_SQ,
  PS2_KEY_BACK,
  // 4
  PS2_KEY_1,
  PS2_KEY_2,
  PS2_KEY_3,
  PS2_KEY_4,
  PS2_KEY_5,
  PS2_KEY_6,
  PS2_KEY_7,
  PS2_KEY_8,
  PS2_KEY_9,
  PS2_KEY_0,
  PS2_KEY_MINUS,
  PS2_KEY_EQUAL,
  PS2_KEY_BS
};

extern const uint8_t KEY_CODE_TO_INDEX[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  10,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  48,
  0,
  22,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  45,
  36,
  37,
  38,
  39,
  40,
  41,
  42,
  43,
  44,
  0,
  7,
  46,
  8,
  9,
  0,
  21,
  11,
  4,
  2,
  13,
  25,
  14,
  15,
  16,
  30,
  17,
  18,
  19,
  6,
  5,
  31,
  32,
  23,
  26,
  12,
  27,
  29,
  3,
  24,
  1,
  28,
  0,
  20,
  35,
  33,
  34,
  47,
  0,
  0,
  0,
  0
};