// Game/Unsorted_10924A00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10924AE0.h"
#include "Game/Class_10924B30.h"
#include "Game/Struct_10924B30_Slot.h"
#include "Game/Struct_1094D980.h"

// FUNCTION: 0x10924B30 ?FUN_10924b30@Class_10924B30@@QAE_NHH@Z
bool Class_10924B30::FUN_10924b30(int Index, int A)
{
    if (Index != -1)
    {
        if (Unknown48[Index].Unknown00)
        {
            if (FUN_109246b0(&Unknown48[Index], A))
                UnknownA8 = Index;
        }
    }
    return false;
}
