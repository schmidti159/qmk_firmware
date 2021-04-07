CONSOLE_ENABLE = no         # Console for debug
NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
UNICODE_ENABLE = yes        # Unicode
MOUSEKEY_ENABLE = yes       # Enable keys for mouse control
DYNAMIC_MACRO_ENABLE = yes  # Enable keys for dynamically recorded macros

EXTRAFLAGS += -flto
