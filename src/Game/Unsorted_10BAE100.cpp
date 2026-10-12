// Game/Unsorted_10BAE100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cVisualSubsystemArray.h"
#include "Game/VisualSubsystem.h"

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern const char DAT_10e8d7d0[];

extern const char DAT_10e48c2c[];

// FUNCTION: 0x10BAE2B0 ?Assign@cVisualSubsystemArray@@QAEXABV1@@Z
void cVisualSubsystemArray::Assign(const cVisualSubsystemArray& Other)
{
    Resize(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Items[i] = Other.m_Items[i];
}

// FUNCTION: 0x10BAE330 ?IntToString@@YA?AVcString@@H@Z
cString IntToString(int Value)
{
    char Buffer[8];
    if (Value < 10)
        sprintf(Buffer, DAT_10e8d7d0, Value);
    else
    {
        if (Value > 99)
            Value = 99;
        sprintf(Buffer, DAT_10e48c2c, Value);
    }
    return cString(Buffer);
}
