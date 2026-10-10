// Game/Unsorted_10BA4B20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6D0.h"
#include "Game/Class_10E8C860.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4B20 ?FUN_10ba4b20@Class_10E8C6D0@@UAEPAVClass_10E8C860@@XZ
Class_10E8C860* Class_10E8C6D0::FUN_10ba4b20()
{
    Class_10E8C860* Object = (Class_10E8C860*)operator new(sizeof(Class_10E8C860), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4b60();
    return 0;
}
