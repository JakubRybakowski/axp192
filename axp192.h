/*

Copyright (c) 2019 Mika Tuupola

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#ifndef _AXP192_H
#define _AXP192_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define	AXP192_ADDRESS	        (0x34)

#define AXP192_EXTEN_DCDC2      (0x10)
#define AXP192_LDO23_VOLTAGE    (0x28)
#define AXP192_ADC_ENA1         (0x82)
#define AXP192_ADC_ENA2         (0x83)
#define AXP192_CHARGE_CTRL1     (0x33)
#define AXP192_COULOMB_COUNTER  (0xb8)
#define AXP192_DCDC13_LDO23     (0x12)
#define AXP192_PEK              (0x36)
#define AXP192_GPIO0            (0x90)
#define AXP192_VOFF             (0x31)

void axp192_init();

/* These should be provided by the HAL. */
extern int32_t i2c_hal_master_init();
extern int32_t i2c_hal_master_read(uint8_t address, uint8_t reg, uint8_t *buffer, uint16_t size);
extern int32_t i2c_hal_master_write(uint8_t address, uint8_t reg, uint8_t *buffer, uint16_t size);
extern int32_t i2c_hal_master_close();

#ifdef __cplusplus
}
#endif
#endif
