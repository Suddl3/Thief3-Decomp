// Game/Class_10E50928_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

#include "Game/Class_10E50928.h"

extern char DAT_10e47660[];

class Class_10984CF0
{
public:
    Class_10984CF0(const char* A, int B, int C);

    char Unknown00[0x10];
};

// FUNCTION: 0x10A2FAB0 ?FUN_10a2fab0@Class_10E50928@@UAEPAVClass_10984CF0@@XZ
Class_10984CF0* Class_10E50928::FUN_10a2fab0()
{
    return new(0, 0, 0, 0, 0) Class_10984CF0(m_Name ? m_Name : DAT_10e47660, Unknown08, Unknown0C);
}
