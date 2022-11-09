/*
 * Copyright 2022 Emiliano Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site: https://github.com/hiperiondev/librelogic-esp32 *
 *
 * This is based on other projects:
 *    Free PLC logic library  (https://github.com/kalamara/librelogic)
 *    Others (see individual files)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include "data.h"
#include "instruction.h"
#include "rung.h"

#include "plc_iface.h"

int esp32_config(void *conf) {
    return PLC_OK;
}

int esp32_enable() { // Enable bus communication
    return PLC_OK;
}

int esp32_disable() { // Disable bus communication
    return PLC_OK;
}

int esp32_fetch() {
    return 0;
}

int esp32_flush() {
    return 0;
}

void esp32_dio_read(unsigned int n, PLC_BYTE *bit) {
    return;
}

void esp32_dio_write(const unsigned char *buf, unsigned int n, PLC_BYTE bit) {
    return;
}

void esp32_dio_bitfield(const PLC_BYTE *mask, PLC_BYTE *bits) {
    return;
}

void esp32_data_read(unsigned int index, uint64_t *value) {
    return;
}

void esp32_data_write(unsigned int index, uint64_t value) {
    return;
}

struct hardware Esp32 = {
        HW_EXT,
        0,                  // error code
        "no hardware",
        esp32_enable,       // enable
        esp32_disable,      // disable
        esp32_fetch,        // fetch
        esp32_flush,        // flush
        esp32_dio_read,     // dio_read
        esp32_dio_write,    // dio_write
        esp32_dio_bitfield, // dio_bitfield
        esp32_data_read,    // data_read
        esp32_data_write,   // data_write
        esp32_config,       // hw_config
        };
