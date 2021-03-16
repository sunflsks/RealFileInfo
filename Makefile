TARGET := iphone:clang:latest:7.0
INSTALL_TARGET_PROCESSES = SpringBoard
ARCHS = arm64e arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = RealFileInfo

RealFileInfo_FILES = Tweak.xm RealFileInfo.m
RealFileInfo_CFLAGS = -fobjc-arc -Wall -Werror -Wpedantic -Wno-dollar-in-identifier-extension -Wno-variadic-macros
RealFileInfo_LIBRARIES = mryipc

include $(THEOS_MAKE_PATH)/tweak.mk
SUBPROJECTS += realfileinfosb
include $(THEOS_MAKE_PATH)/aggregate.mk
