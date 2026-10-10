// Game/Unsorted_10B9D0C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10B9CAC0.h"

class Class_10B9CAC0
{
public:
    bool FUN_10b9d0e0(int A);

    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[4];
    Object_10B9CAC0** Unknown18;
};

// FUNCTION: 0x10B9D0E0 ?FUN_10b9d0e0@Class_10B9CAC0@@QAE_NH@Z
bool Class_10B9CAC0::FUN_10b9d0e0(int A)
{
    if (Unknown10)
    {
        Object_10B9CAC0* Obj = Unknown18[Unknown10 - 1];
        if (Obj)
            return Obj->Virtual56(A);
    }
    return false;
}
