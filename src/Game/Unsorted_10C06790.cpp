// Game/Unsorted_10C06790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9FBE0.h"

// FUNCTION: 0x10C06790 ?FUN_10c06790@@YAXPAVClass_10B9FBE0@@@Z
void FUN_10c06790(Class_10B9FBE0* Array)
{
    if (Array->Unknown00 == 0)
    {
        for (int Row = 0; Row < 8; Row++)
        {
            for (int Column = 0; Column < 8; Column++)
            {
                int Index = Array->Unknown00;
                Array->FUN_10b9f620(Index + 1);
                Array->Unknown08[Index] = 0;
            }
        }
    }
}
