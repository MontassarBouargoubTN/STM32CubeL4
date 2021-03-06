/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.40.                      *
*        Compiled Mar 17 2017, 15:33:27                              *
*                                                                    *
*        (c) 1998 - 2017 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: player_icon_minus_unpressed                           *
* Dimensions:  10 * 1                                                *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmplayer_icon_minus_unpressed;

#if defined(__ICCARM__)
#pragma location="ExtFlashSection"
GUI_KEEP
#else
__attribute__((section(".ExtFlashSection")))
#endif
static GUI_CONST_STORAGE unsigned long _acplayer_icon_minus_unpressed[] = {
#if (GUI_USE_ARGB == 1)
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF
#else
  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF
#endif
};

GUI_CONST_STORAGE GUI_BITMAP bmplayer_icon_minus_unpressed = {
  10, // xSize
  1, // ySize
  40, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_acplayer_icon_minus_unpressed,  // Pointer to picture data
  NULL,  // Pointer to palette
#if (GUI_USE_ARGB == 1)
  GUI_DRAW_BMPM8888I
#else
  GUI_DRAW_BMP8888
#endif
};

/*************************** End of file ****************************/
