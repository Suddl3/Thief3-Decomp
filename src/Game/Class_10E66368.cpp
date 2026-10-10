// Game/Class_10E66368.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E66320.h"
#include "Game/Class_10E66350.h"
#include "Game/Class_10E66368.h"

// FUNCTION: 0x10A2F0C0 ?FUN_10a2f0c0@Class_10E66368@@UAEHPAVClass_10E66320@@@Z
int Class_10E66368::FUN_10a2f0c0(Class_10E66320* Other)
{
    int Mine = Unknown38;
    int Theirs = static_cast<Class_10E66368*>(Other)->Unknown38;
    if ((Mine == 0 || Theirs == 0 || Mine == Theirs) && Class_10E66350::FUN_10a2f0c0(Other))
        return 1;
    return 0;
}
