// Game/Class_10E67938_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B0AED0.h"
#include "Game/Class_10E67938.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern Class_10B0AED0* DAT_10f3a248;

// FUNCTION: 0x10AA6180 ?FUN_10aa6180@Class_10E67938@@QAEXXZ
void Class_10E67938::FUN_10aa6180()
{
    if (DAT_10f3a248 == 0)
        DAT_10f3a248 = new(0, 0, 0, 0, 0) Class_10B0AED0;
    DAT_10f3a248->RefCount++;
}
