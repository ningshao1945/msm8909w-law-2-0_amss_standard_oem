/********************************************************************************
 * Copyright (c) 2014, PixArt Imaging Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the PixArt Imaging Inc. nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************/
#ifndef _SNS_DD_PIXART_PPG_H
#define _SNS_DD_PIXART_PPG_H

const uint8_t revd_init_touch_register_array[][2] = {
{0x7f, 0x01},	//switch to bank1
{0x4C, 0x00},
{0xe6, 0xC8}, 
{0xe7, 0x00}, 
{0xF1, 0x00},
{0x07, 0x01},
{0xAE, 0x06},
{0xAF, 0x07},
//{0xBA, 0x48},
{0x6C, 0x10},
{0x6D, 0x10},
{0x7A, 0x01},
{0x6F, 0x10},
{0x7F, 0x00},  //switch to bank0
{0x08, 0xFF},
{0x09, 0x03},
{0x5A, 0x01},
{0x5C, 0x58}, //Touch Threshold
{0x5D, 0x02},
{0x60, 0x00},
{0x61, 0x02},
{0x64, 0x01},
{0x65, 0x01},
{0x35, 0x80},
{0x36, 0x02},
{0x84, 0x78},
{0x8C, 0x00},
{0x8E, 0x00},
{0xDE, 0x00},
{0xD9, 0x01},
{0xDD, 0x04},
{0x3B, 0x01},
{0x43, 0x00},
{0x47, 0x01},
{0x48, 0x00},
{0x49, 0x00},
{0x4A, 0x01},
{0x4D, 0x01},
{0x16, 0x01},
{0x13, 0x01},
{0x14, 0x01},
{0x15, 0x01},
{0x50, 0x01},
{0x51, 0x01},
{0x59, 0x00},
{0x57, 0x00},
{0x6B, 0x00},
{0x6C, 0x00},
{0x3E, 0x00},
{0x0D, 0x78},
{0x0E, 0x00},
{0x7F, 0x02},  //switch to bank2
{0x17, 0x00},
{0x18, 0x00},
{0x1B, 0x01},
{0x1C, 0x01},
{0x25, 0x04},
{0x29, 0x00},
{0x2d, 0x01},
{0x4F, 0x0C},
{0x66, 0x01},
{0x67, 0x01},
{0x68, 0x01},
{0x69, 0x01},
{0x6A, 0x01},
//{0x6B, 0x01},
//{0x6C, 0x01},
{0x6D, 0x01},
{0x6E, 0x01},
{0x6F, 0x01},
{0x70, 0x01},
{0x74, 0x01},
{0x76, 0x01},
{0x8D, 0x01},
{0x8F, 0x01},
{0x92, 0x00},
{0x7F, 0x01},  //switch to bank1
{0xA2, 0x40},
{0x7C, 0x01},
{0x4F, 0x07},
{0x3F, 0x04},
{0x0C, 0x05},
{0x4D, 0x05},
{0x52, 0x05},
{0x86, 0x50},
{0x92, 0x1C},
{0x98, 0x1D},
{0x9A, 0x42},
{0x81, 0x01},
{0x3B, 0x00},
{0xEA, 0xC9},
{0xA4, 0x50},
{0xA5, 0x00},
{0xA6, 0x52},
{0xA7, 0x00},
{0xA8, 0x53},
{0xA9, 0x00},
{0xAD, 0x00},
{0xD6, 0xFF},
{0xD7, 0x1F},
{0xD8, 0x01},
{0xD9, 0x00},
{0xDA, 0x10},
{0xDB, 0x00},
{0xDC, 0x16},
{0xDD, 0x00},
{0xDE, 0x17},
{0xDF, 0x00},
{0xE0, 0xFE},
{0xE1, 0x1F},
};
#define REVD_INIT_TOUCH_REG_ARRAY_SIZE (sizeof(revd_init_touch_register_array)/sizeof(revd_init_touch_register_array[0]))
const uint8_t revd_init_ppg_register_array[][2] = {
{0x7f, 0x01},	//bank1
{0xE6, 0xC8},
{0xE7, 0x00},
{0x07, 0x01},
{0xAE, 0x06},
{0xAF, 0x07},
{0x4D, 0x00},
//{0xBA, 0x48},
{0xBB, 0x7C},
{0xBC, 0x7C},
{0xBD, 0x06},
{0xBE, 0x06},
{0xBF, 0x06},
{0xB1, 0x06},
{0xB2, 0x06},
{0xB3, 0x06},
{0x6A, 0x00}, 
{0x6B, 0x01}, 
{0x6C, 0x10},
{0x6D, 0x10},
{0x7A, 0x00},
{0x6F, 0x10},
{0x7F, 0x00}, //switch to bank0
{0x08, 0xFF},
{0x09, 0x03},
{0x4F, 0x0C},
{0xE6, 0x07},
{0x8C, 0x00},
{0xAE, 0x01},
{0xD0, 0x01},
{0x8E, 0x00},
{0xD2, 0x01},
{0xB0, 0x01},
{0x27, 0x80},
{0x28, 0x12},
{0x35, 0xC0},
{0x36, 0x12},
{0x37, 0xC0},
{0x38, 0x12},
{0x39, 0xC0},
{0x3A, 0x12},
{0xDE, 0x00},
{0xD9, 0x01},
{0xDD, 0x04},
{0x3B, 0x01},
{0x3C, 0x15},
{0x3D, 0x15},
{0x47, 0x01},
{0x48, 0x01},
{0x49, 0x01},
{0x4A, 0x01},
{0x4B, 0x00},
{0x4C, 0x00},
{0x4D, 0x00},
{0x16, 0x00},
{0x13, 0x01},
{0x14, 0x01},
{0x15, 0x01},
{0x50, 0x00},
{0x59, 0x00},
{0x56, 0x00},
{0x57, 0x00},
{0x6B, 0x01},
{0x6C, 0x00},
{0x8F, 0x01},
{0xB1, 0x01},
{0x3E, 0x02},
{0x3F, 0x04},
{0x40, 0x04},
{0x0D, 0x78},
{0x0E, 0x00}, 
{0x0F, 0xF0},
{0x10, 0x00},
{0x11, 0xF0},
{0x12, 0x00},
{0x6D, 0xF0},
{0x6E, 0x00},
{0x6F, 0x00},
{0x70, 0x02},
{0x71, 0x10},
{0x72, 0x00},
{0x77, 0x00},
{0x78, 0x0C},
{0x79, 0x00},
{0x7A, 0x08},
{0x7B, 0x00},
{0x7C, 0x0B},
{0x7D, 0x00},
{0x7E, 0x09},
{0x80, 0x00},
{0x81, 0x0D},
{0x82, 0x00},
{0x83, 0x07},
{0x85, 0x01},
{0x90, 0xF0},
{0x91, 0x00},
{0x92, 0x20},
{0x93, 0x12},
{0x94, 0x10},
{0x95, 0x00},
{0x9A, 0x00},
{0x9B, 0x0C},
{0x9C, 0x00},
{0x9D, 0x08},
{0x9E, 0x00},
{0x9F, 0x0B},
{0xA0, 0x00},
{0xA1, 0x09},
{0xA2, 0x00},
{0xA3, 0x0D},
{0xA4, 0x00},
{0xA5, 0x07},
{0xA7, 0x01},
{0xB2, 0xF0},
{0xB3, 0x00},
{0xB4, 0x20},
{0xB5, 0x12},
{0xB6, 0x10},
{0xB7, 0x00},
{0xBC, 0x00},
{0xBD, 0x0C},
{0xBE, 0x00},
{0xBF, 0x08},
{0xC0, 0x00},
{0xC1, 0x0B},
{0xC2, 0x00},
{0xC3, 0x09},
{0xC4, 0x00},
{0xC5, 0x0D},
{0xC6, 0x00},
{0xC7, 0x07},
{0xC9, 0x01},
{0x7F, 0x02}, //switch to bank2
{0x17, 0x00},
{0x18, 0x00},
{0x1B, 0x01},
{0x1C, 0x01},
{0x25, 0x02},
{0x29, 0x00},
{0x2d, 0x01},
{0x4F, 0x10},
{0x66, 0x01},
{0x67, 0x01},
{0x68, 0x01},
{0x69, 0x01},
{0x6A, 0x01},
//{0x6B, 0x01},
//{0x6C, 0x01},
{0x6D, 0x01},
{0x6E, 0x01},
{0x70, 0x01},
{0x7B, 0xFF},
{0x7F, 0x01}, //switch to bank1
{0xA2, 0x40},
{0x7C, 0x01},
{0x4F, 0x07},
{0x3F, 0x04},
{0x0C, 0x05},
{0x4D, 0x05},
{0x52, 0x05},
{0x86, 0x50},
{0x92, 0x1C},
{0x98, 0x1D},
{0x9A, 0x42},
{0x81, 0x01},
{0x3B, 0x00},
{0xEA, 0xC9},
{0xA4, 0x50},
{0xA5, 0x00},
{0xA6, 0x52},
{0xA7, 0x00},
{0xA8, 0x53},
{0xA9, 0x00},
{0xD6, 0x40},
{0xD7, 0x06},
{0xD8, 0x01},
{0xD9, 0x00},
{0xDA, 0x11},
{0xDB, 0x00},
{0xDC, 0x84},
{0xDD, 0x02},
{0xDE, 0x85},
{0xDF, 0x02},
{0xE0, 0x3F},
{0xE1, 0x06},
};
#define REVD_INIT_PPG_REG_ARRAY_SIZE (sizeof(revd_init_ppg_register_array)/sizeof(revd_init_ppg_register_array[0]))
const uint8_t revd_suspend_register_array[][2] = {
{0x7f, 0x01}, 
{0x09, 0x01},
{0x23, 0x01},
{0xB4, 0x01},
{0xB7, 0x01},
{0xE6, 0xC8},
{0xE7, 0x00},
{0xF1, 0x00},
{0x07, 0x01}, 
{0xAE, 0x06}, 
{0xAF, 0x07}, 
{0xBA, 0x48}, 
{0x6C, 0x10}, 
{0x6D, 0x10}, 
{0x7A, 0x00},
{0x6F, 0x10}, 
{0x7F, 0x00}, //bank0
{0x08, 0xFF},
{0x09, 0x03},
{0xD6, 0x01},
{0x5C, 0x00},
{0x5D, 0x05},
{0x60, 0x00},
{0x61, 0x03},
{0x64, 0x05},
{0x65, 0x05},
{0x35, 0x80},
{0x36, 0x02},
{0x8C, 0x00},
{0x8E, 0x00},
{0xDE, 0x00},
{0xD9, 0x01},
{0xDD, 0x04},
{0x3B, 0x01},
{0x47, 0x01},
{0x48, 0x00},
{0x49, 0x00},
{0x4A, 0x00},
{0x4D, 0x00},
{0x16, 0x00},
{0x13, 0x01},
{0x14, 0x01},
{0x15, 0x01},
{0x50, 0x01},
{0x51, 0x01},
{0x59, 0x00},
{0x57, 0x00},
{0x6B, 0x00},
{0x6C, 0x00},
{0x3E, 0x00},
{0x43, 0x00},
{0x0D, 0x78},
{0x0E, 0x00},
{0x7F, 0x02},	//bank2
{0x17, 0x00},
{0x18, 0x00},
{0x1B, 0x01},
{0x1C, 0x01},
{0x1F, 0x00},
{0x29, 0x00},
{0x2d, 0x01},
{0x2B, 0x00},
{0x2C, 0x00},
{0x31, 0x00}, //INT output low to avoid current leakage
{0x4F, 0x10},
{0x66, 0x01},
{0x67, 0x01},
{0x68, 0x01},
{0x69, 0x01},
{0x6A, 0x01},
{0x6B, 0x01},
{0x6C, 0x01},
{0x6D, 0x01},
{0x6E, 0x01},
{0x6F, 0x01},
{0x70, 0x01},
{0x74, 0x00},
{0x76, 0x01},
{0x78, 0x01},
{0x7A, 0x01},
{0x7B, 0xFF},
{0x8D, 0x01},
{0x8F, 0x01},
{0x92, 0x00},
{0x7F, 0x01},//switch to bank1
{0xA2, 0x40},
{0x7C, 0x01},
{0x4C, 0x01},
{0x4F, 0x07},
{0x3F, 0x04},
{0x0C, 0x05},
{0x4D, 0x05},
{0x52, 0x05},
{0x86, 0x50},
{0x92, 0x1C},
{0x98, 0x1D},
{0x9A, 0x42},
{0x81, 0x01},
{0x3B, 0x00},
{0xEA, 0xC9},
{0xA4, 0x50},
{0xA5, 0x00},
{0xA6, 0x52},
{0xA7, 0x00},
{0xA8, 0x53},
{0xA9, 0x00},
{0xD6, 0xFF},
{0xD7, 0x1F},
{0xD8, 0x01},
{0xD9, 0x00},
{0xDA, 0x10},
{0xDB, 0x00},
{0xDC, 0x13},
{0xDD, 0x00},
{0xDE, 0x14},
{0xDF, 0x00},
{0xE0, 0xFE},
{0xE1, 0x1F},
{0x7F, 0x01}, //switch to bank1
{0xd5, 0x01},
};
#define REVD_SUSPEND_REG_ARRAY_SIZE (sizeof(revd_suspend_register_array)/sizeof(revd_suspend_register_array[0]))
const uint8_t revd_init_stress_register_array[][2] = {
{0x7f, 0x01}, //switch to bank1
{0xE6, 0xC8},
{0xE7, 0x00},
{0x07, 0x01}, 
{0xAE, 0x06}, 
{0xAF, 0x07}, 
{0x4D, 0x00},
//{0xBA, 0x48},
{0xBB, 0x7C},
{0xBC, 0x7C},
{0xBD, 0x06},
{0xBE, 0x06},
{0xBF, 0x06},
{0xB1, 0x06},
{0xB2, 0x06},
{0xB3, 0x06},
{0x6A, 0x00},
{0x6B, 0x01},
{0x6C, 0x10},
{0x6D, 0x10},
{0x7A, 0x00},
{0x6F, 0x08},
{0x7F, 0x00},//switch to bank0
{0x08, 0xFF},
{0x09, 0x03},
{0x4F, 0x0C},
{0xE6, 0x07},
{0x8C, 0x00},
{0xAE, 0x01},
{0xD0, 0x01},
{0x8E, 0x00},
{0xD2, 0x01},
{0xB0, 0x01},
{0x27, 0x60},
{0x28, 0x0F},
{0x35, 0xA0},
{0x36, 0x0F},
{0x37, 0xA0},
{0x38, 0x0F},
{0x39, 0xA0},
{0x3A, 0x0F},
{0xDE, 0x00},
{0xD9, 0x01},
{0xDD, 0x04},
{0x3B, 0x01},
{0x3C, 0x02},
{0x3D, 0x02},
{0x43, 0x00},
{0x44, 0x00},
{0x45, 0x00},
{0x47, 0x01},
{0x48, 0x01},
{0x49, 0x01},
{0x4A, 0x01},
{0x4B, 0x00},
{0x4C, 0x00},
{0x4D, 0x00},
{0x16, 0x00},
{0x13, 0x01},
{0x14, 0x01},
{0x15, 0x01},
{0x50, 0x00},
{0x59, 0x00},
{0x56, 0x00},
{0x57, 0x00},
{0x6B, 0x01},
{0x6C, 0x00},
{0x8F, 0x01},
{0xB1, 0x01},
{0x3E, 0x00},
{0x3F, 0x00},
{0x40, 0x00},
{0x0D, 0x78},
{0x0E, 0x00},
{0x0F, 0xF0},
{0x10, 0x00},
{0x11, 0xF0},
{0x12, 0x00},
{0x6D, 0xF0},
{0x6E, 0x00},
{0x6F, 0x00},
{0x70, 0x02},
{0x71, 0x10},
{0x72, 0x00},
{0x77, 0x00},
{0x78, 0x0C},
{0x79, 0x00},
{0x7A, 0x08},
{0x7B, 0x00},
{0x7C, 0x0B},
{0x7D, 0x00},
{0x7E, 0x09},
{0x80, 0x00},
{0x81, 0x0D},
{0x82, 0x00},
{0x83, 0x07},
{0x85, 0x01},
{0x90, 0xF0},
{0x91, 0x00},
{0x92, 0x40},
{0x93, 0x0F},
{0x94, 0x10},
{0x95, 0x00},
{0x9A, 0x00},
{0x9B, 0x0C},
{0x9C, 0x00},
{0x9D, 0x08},
{0x9E, 0x00},
{0x9F, 0x0B},
{0xA0, 0x00},
{0xA1, 0x09},
{0xA2, 0x00},
{0xA3, 0x0D},
{0xA4, 0x00},
{0xA5, 0x07},
{0xA7, 0x01},
{0xB2, 0xF0},
{0xB3, 0x00},
{0xB4, 0x40},
{0xB5, 0x0F},
{0xB6, 0x10},
{0xB7, 0x00},
{0xBC, 0x00},
{0xBD, 0x0C},
{0xBE, 0x00},
{0xBF, 0x08},
{0xC0, 0x00},
{0xC1, 0x0B},
{0xC2, 0x00},
{0xC3, 0x09},
{0xC4, 0x00},
{0xC5, 0x0D},
{0xC6, 0x00},
{0xC7, 0x07},
{0xC9, 0x01},
{0x7F, 0x02},//switch to bank2
{0x17, 0x00},
{0x18, 0x00},
{0x1B, 0x01},
{0x1C, 0x01},
{0x25, 0x02},
{0x29, 0x00},
{0x2d, 0x01},
{0x4F, 0x0C},
{0x66, 0x01},
{0x67, 0x01},
{0x68, 0x01},
{0x69, 0x01},
{0x6A, 0x01},
{0x6D, 0x01},
{0x6E, 0x01},
{0x70, 0x01},
{0x7B, 0xFF},
{0x7F, 0x01},//switch to bank1
{0x22, 0x50},
{0x48, 0x50},
{0xA2, 0x40},
{0x7C, 0x01},
{0x4F, 0x07},
{0x3F, 0x04},
{0x0C, 0x05},
{0x4D, 0x05},
{0x52, 0x05},
{0x86, 0x50},
{0x92, 0x1C},
{0x98, 0x1D},
{0x9A, 0x42},
{0x81, 0x01},
{0x3B, 0x00},
{0xEA, 0xC9},
{0xA4, 0x50},
{0xA5, 0x00},
{0xA6, 0x52},
{0xA7, 0x00},
{0xA8, 0x53},
{0xA9, 0x00},
{0xD6, 0xA0},
{0xD7, 0x00},
{0xD8, 0x01},
{0xD9, 0x00},
{0xDA, 0x2C},
{0xDB, 0x00},
{0xDC, 0x8B},
{0xDD, 0x00},
{0xDE, 0x8C},
{0xDF, 0x00},
{0xE0, 0x9F},
{0xE1, 0x00},
};
#define REVD_INIT_STRESS_REG_ARRAY_SIZE (sizeof(revd_init_stress_register_array)/sizeof(revd_init_stress_register_array[0]))

#endif /* End include guard _SNS_DD_PIXART_PPG_H */
