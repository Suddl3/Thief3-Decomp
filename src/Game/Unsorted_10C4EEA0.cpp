// Game/Unsorted_10C4EEA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C4E970.h"
#include "Game/Item_10C50320.h"

// FUNCTION: 0x10C4F080 ??0Item_10C50320@@QAE@ABU0@@Z
Item_10C50320::Item_10C50320(const Item_10C50320& Other)
    : Unknown0C(Other.Unknown0C), Unknown10(Other.Unknown10), Unknown14(Other.Unknown14)
{
    Unknown00.FUN_10c4e910(&Other.Unknown00);
}
