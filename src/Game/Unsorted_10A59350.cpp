// Game/Unsorted_10A59350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10A59370.h"

// FUNCTION: 0x10A59370 ?SetStringAt@Class_10A59370@@QAEXHABVcString@@@Z
void Class_10A59370::SetStringAt(int Index, const cString& Value)
{
    if (Index > -1 && Index < 4)
        m_Strings[Index] = Value;
}
