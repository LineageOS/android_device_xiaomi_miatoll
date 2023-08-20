#!/bin/bash
#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# If we're being sourced by the common script that we called,
# stop right here. No need to go down the rabbit hole.
if [ "${BASH_SOURCE[0]}" != "${0}" ]; then
    return
fi

set -e

export DEVICE=miatoll
export DEVICE_COMMON=sm6250-common
export VENDOR=xiaomi

function blob_fixup() {
    case "${1}" in
        vendor/etc/libnfc-nci.conf)
            sed -i "s/\/data\/nfc\/data\/vendor\/nfc/g" "${2}"
            ;;
    esac
}

"./../../${VENDOR}/${DEVICE_COMMON}/extract-files.sh" "$@"
