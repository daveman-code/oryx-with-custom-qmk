# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
ORYX_ENABLE = yes
RGB_MATRIX_CUSTOM_KB = yes
TAP_DANCE_ENABLE = no
SPACE_CADET_ENABLE = no
COMBO_ENABLE = yes
LAYER_LOCK_ENABLE = yes
REPEAT_KEY_ENABLE = yes
CAPS_WORD_ENABLE = yes
SRC += features/custom_shift_keys.c
SRC += features/select_word.c
SRC += features/sentence_case.c
SRC += features/achordion.c
