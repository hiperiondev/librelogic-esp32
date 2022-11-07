/*******************************************************************************
 LibreLogic : a free PLC library
 Copyright (C) 2022, Antonis K. (kalamara AT ceid DOT upatras DOT gr)

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
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

void esp32_dio_read(unsigned int n, BYTE *bit) {
    return;
}

void esp32_dio_write(const unsigned char *buf, unsigned int n, BYTE bit) {
    return;
}

void esp32_dio_bitfield(const BYTE *mask, BYTE *bits) {
    return;
}

void esp32_data_read(unsigned int index, uint64_t *value) {
    return;
}

void esp32_data_write(unsigned int index, uint64_t value) {
    return;
}

struct hardware Dry = {
        HW_ESP32,
        0,                  //errorcode
        "no hardware",
        esp32_enable,       // enable
        esp32_disable,      //disable
        esp32_fetch,        //fetch
        esp32_flush,        //flush
        esp32_dio_read,     //dio_read
        esp32_dio_write,    //dio_write
        esp32_dio_bitfield, //dio_bitfield
        esp32_data_read,    //data_read
        esp32_data_write,   //data_write
        esp32_config,       //hw_config
        };

