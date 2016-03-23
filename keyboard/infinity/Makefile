PROJECT = infinity

TMK_DIR = ../../tmk_core
MBED_DIR = $(TMK_DIR)/tool/mbed/mbed-sdk

VPATH += $(TMK_DIR):$(MBED_DIR)

OBJDIR = ./build

OBJECTS = \
	$(OBJDIR)/matrix.o \
	$(OBJDIR)/keymap_common.o \
	$(OBJDIR)/led.o \
	$(OBJDIR)/main.o

ifdef KEYMAP
    OBJECTS := $(OBJDIR)/keymap_$(KEYMAP).o $(OBJECTS)
else
    OBJECTS := $(OBJDIR)/keymap.o $(OBJECTS)
endif

CONFIG_H = config.h

INCLUDE_PATHS = -I.


# Build Options
#   Comment out to disable
#BOOTMAGIC_ENABLE = yes
#MOUSEKEY_ENABLE = yes
BOOTMAGIC_ENABLE = yes        # Virtual DIP switch configuration
## (Note that for BOOTMAGIC on Teensy LC you have to use a custom .ld script.)
MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
CONSOLE_ENABLE = yes  # Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
SLEEP_LED_ENABLE = yes  # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes         # USB Nkey Rollover


include $(TMK_DIR)/tool/mbed/common.mk
include mbed-infinity.mk
include $(TMK_DIR)/tool/mbed/mbed.mk
include $(TMK_DIR)/tool/mbed/gcc.mk

program: $(OBJDIR)/$(PROJECT).bin
	dfu-util -D $(OBJDIR)/$(PROJECT).bin
