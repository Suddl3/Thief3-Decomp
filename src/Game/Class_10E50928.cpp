// Game/Class_10E50928.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E50928.h"

extern const char DAT_10e47660[];

int FUN_10af36e0(const char* A, const char* B);

// FUNCTION: 0x10A2FB40 ?IsSameName@Class_10E50928@@UAEHPBV1@@Z
int Class_10E50928::IsSameName(const Class_10E50928* Other)
{
    if (Other && !FUN_10af36e0(m_Name ? m_Name : DAT_10e47660, Other->m_Name ? Other->m_Name : DAT_10e47660))
        return 1;
    return 0;
}
