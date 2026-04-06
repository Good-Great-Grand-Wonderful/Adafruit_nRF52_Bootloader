/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Pierre Constantineau
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _LEVELS54
#define _LEVELS54

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3
/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER 1
#define LED_PRIMARY_PIN PINNUM(0, 4)
#define LED_STATE_ON 1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
 // Buttons change from side to side.

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "GGGW"
#define BLEDIS_MODEL "Levels54"

#define UF2_PRODUCT_NAME "Levels54"
#define UF2_INDEX_URL "https://ergokeyboards.com"
#define UF2_VOLUME_LABEL "LEVELS54"
#define UF2_BOARD_ID "levels_rev_6"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID 0x1209
#define USB_DESC_UF2_PID 0x5284
#define USB_DESC_CDC_ONLY_PID 0x5284
#endif // LEVELS54
