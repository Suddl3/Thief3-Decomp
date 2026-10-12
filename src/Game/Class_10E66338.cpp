// Game/Class_10E66338.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E66338.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A2F630 ?Clone@Class_10E66338@@UAEPAV1@XZ
Class_10E66338* Class_10E66338::Clone()
{
    Class_10E66338* Copy = new(0, 0, 0, 0, 0) Class_10E66338();
    Copy->Virtual4(Virtual5());
    Copy->CopyOptionalString(&Copy->Unknown18, &Copy->Unknown3C, Unknown3C ? &Unknown18 : 0);
    Copy->CopyOptionalString(&Copy->Unknown24, &Copy->Unknown40, Unknown40 ? &Unknown24 : 0);
    Copy->CopyOptionalString(&Copy->Unknown30, &Copy->Unknown44, Unknown44 ? &Unknown30 : 0);
    return Copy;
}
