TARGET := iphone:clang:latest:7.0
INSTALL_TARGET_PROCESSES = SpringBoard
ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = RealFileInfoSB

RealFileInfoSB_LDFLAGS = -Llib
RealFileInfoSB_LIBRARIES = magic mryipc z bz2
RealFileInfoSB_FILES = Tweak.x
RealFileInfoSB_CFLAGS = -fobjc-arc -Iinclude -Wall -Werror -Wpedantic -Wno-dollar-in-identifier-extension -Wno-variadic-macros

include $(THEOS_MAKE_PATH)/tweak.mk
