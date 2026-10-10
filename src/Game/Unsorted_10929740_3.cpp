// Game/Unsorted_10929740_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49AE0.h"
#include "Game/Struct_10929510.h"
#include "Game/Struct_10929D60.h"

extern float DAT_10e49684;

// FUNCTION: 0x109299D0 ?FUN_109299d0@Class_10E49AE0@@UAEXPAUStruct_10929510@@HHPAUStruct_10929D60@@@Z
void Class_10E49AE0::FUN_109299d0(Struct_10929510* Surface, int X, int Y, Struct_10929D60* Out)
{
    unsigned long Pixel;
    FUN_10929510(Surface, X, Y, &Pixel);
    Out->Unknown00 = ((Pixel >> 16) & 0xff) * (2.0f / 255.0f) - DAT_10e49684;
    Out->Unknown04 = ((Pixel >> 8) & 0xff) * (2.0f / 255.0f) - DAT_10e49684;
    Out->Unknown08 = (Pixel & 0xff) * (2.0f / 255.0f) - DAT_10e49684;
}
