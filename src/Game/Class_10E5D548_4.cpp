// Game/Unsorted_10A130D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5D548.h"
#include "Game/Struct_10A13110.h"

class Class_10A80E60;

// FUNCTION: 0x10A13110 ?FUN_10a13110@Class_10E5D548@@UAEPAUStruct_10A13110@@H@Z
Struct_10A13110* Class_10E5D548::FUN_10a13110(int Key)
{
    for (int i = 0; i < Unknown20; i++)
    {
        if (Unknown28[i].Unknown00 == Key)
            return &Unknown28[i];
    }
    return 0;
}
