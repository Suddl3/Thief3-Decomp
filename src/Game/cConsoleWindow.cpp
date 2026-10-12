// Game/cConsoleWindow.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cConsoleWindow.h"

// FUNCTION: 0x10A5B530 ?FUN_10a5b530@cConsoleWindow@@QAEXXZ
void cConsoleWindow::FUN_10a5b530()
{
    GetAllocator()->Virtual8(0, 0);
    if (Unknown1DC)
    {
        cString* Str = Unknown1E4;
        if (Str->Unknown00)
        {
            char* Block = Str->Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Str->Unknown00 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown1D8 = 0;
    Unknown1D4 = 0;
    Virtual56(0);
    Unknown1C8 = 0;
}
