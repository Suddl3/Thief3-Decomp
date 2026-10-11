// Game/Unsorted_10C25EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9FBE0.h"

int FUN_10b0fdb0();

// FUNCTION: 0x10C25EF0 ?FUN_10c25ef0@@YAXPAVClass_10B9FBE0@@@Z
void FUN_10c25ef0(Class_10B9FBE0* Array)
{
    if (Array->Unknown00 == 0)
    {
        for (int Row = 0; Row < FUN_10b0fdb0(); Row++)
        {
            for (int Column = 0; Column < FUN_10b0fdb0(); Column++)
            {
                int Index = Array->Unknown00;
                Array->FUN_10b9f620(Index + 1);
                Array->Unknown08[Index] = 0;
            }
        }
    }
}
