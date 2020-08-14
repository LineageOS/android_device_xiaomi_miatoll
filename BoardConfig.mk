#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from sm6250-common
include device/xiaomi/sm6250-common/BoardConfigCommon.mk

DEVICE_PATH := device/xiaomi/miatoll

# Display
TARGET_SCREEN_DENSITY := 440

# HIDL
ODM_MANIFEST_SKUS += \
    nfc

ODM_MANIFEST_NFC_FILES := $(DEVICE_PATH)/manifest_nfc.xml

# OTA assert
TARGET_OTA_ASSERT_DEVICE := curtana,excalibur,gram,joyeuse,miatoll

# Inherit proprietary blobs
include vendor/xiaomi/miatoll/BoardConfigVendor.mk
