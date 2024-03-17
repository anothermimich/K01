# Build Options

BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no          # Audio output
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight.
SPLIT_KEYBOARD = yes       # Inform that it is a split keeb

# VIAL config

LTO_ENABLE = yes           # For pro micro
VIA_ENABLE = yes           # Enables VIA
VIAL_ENABLE = yes          # Enables VIAL

# Space otimization

EXTRAFLAGS += -flto        # Enables Link Time Optimization
UNICODE_ENABLE = no        # Unicode
KEY_OVERRIDE_ENABLE = no   # Disable key override
