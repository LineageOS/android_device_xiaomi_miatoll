/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t curtanain_info = {
    .hwc_value = "India",

    .brand = "Redmi",
    .device = "curtana",
    .model = "Redmi Note 9 Pro",
    .build_description = "curtana-user 11 RKQ1.200826.002 V12.5.2.0.RJWINXM release-keys",
    .build_fingerprint = "Redmi/curtana/curtana:11/RKQ1.200826.002/V12.5.2.0.RJWINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t curtana_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "curtana",
    .model = "Redmi Note 9S",
    .build_description = "curtana_global-user 11 RKQ1.200826.002 V12.5.1.0.RJWMIXM release-keys",
    .build_fingerprint = "Redmi/curtana_global/curtana:11/RKQ1.200826.002/V12.5.1.0.RJWMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t excalibur_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "excalibur",
    .model = "Redmi Note 9 Pro Max",
    .build_description = "excalibur_in-user 11 RKQ1.200826.002 V12.5.3.0.RJXINXM release-keys",
    .build_fingerprint = "Redmi/excalibur_in/excalibur:11/RKQ1.200826.002/V12.5.3.0.RJXINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t gram_info = {
    .hwc_value = "",

    .brand = "POCO",
    .device = "gram",
    .model = "POCO M2 Pro",
    .build_description = "gram_in-user 11 RKQ1.200826.002 V12.5.2.0.RJPINXM release-keys",
    .build_fingerprint = "POCO/gram_in/gram:11/RKQ1.200826.002/V12.5.2.0.RJPINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t joyeuse_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "joyeuse",
    .model = "Redmi Note 9 Pro",
    .build_description = "joyeuse_global-user 11 RKQ1.200826.002 V12.5.2.0.RJZMIXM release-keys",
    .build_fingerprint = "Redmi/joyeuse_global/joyeuse:11/RKQ1.200826.002/V12.5.2.0.RJZMIXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    curtanain_info,
    curtana_info,
    excalibur_info,
    gram_info,
    joyeuse_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
