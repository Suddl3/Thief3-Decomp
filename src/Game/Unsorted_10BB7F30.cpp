// Game/Unsorted_10BB7F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10BB7F30.h"
#include "Game/Class_10BB7F60.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"

extern float DAT_10eafbdc;

float appFrand();

class AAIPawn;

class Class_10B9CAC0;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// FUNCTION: 0x10BB7F30 ?FUN_10bb7f30@Class_10BB7F30@@QAEPAVClass_10B9CAC0@@XZ
Class_10B9CAC0* Class_10BB7F30::FUN_10bb7f30()
{
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        return Controller->Unknown118->Unknown08;
    return 0;
}

// FUNCTION: 0x10BB7F60 ?GetRoll@Class_10BB7F60@@QAEMXZ
float Class_10BB7F60::GetRoll()
{
    if (m_Roll == DAT_10eafbdc)
        m_Roll = appFrand();
    return m_Roll;
}
