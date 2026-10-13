// Game/Class_10E8DBA4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E8D7B8.h"
#include "Game/Class_10E8DBA4.h"

class Class_10A68D20;

void FUN_10a68d50(Class_10A68D20* Owner, int A, int B, int C, int D);

// FUNCTION: 0x10BAEB30 ?FUN_10baeb30@Class_10E8DBA4@@UAEXPAVClass_10A68D20@@@Z
void Class_10E8DBA4::FUN_10baeb30(Class_10A68D20* Owner)
{
    const char* Name = m_Name.Unknown00;
    if (!Name)
        Name = DAT_10e47660;
    FUN_10a68d50(Owner, (int)Name, (int)&Unknown08, (int)&Unknown14, 0);
}
