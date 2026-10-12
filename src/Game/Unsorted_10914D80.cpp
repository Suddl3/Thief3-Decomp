// Game/Unsorted_10914D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10915210.h"
#include "Game/Class_10915830.h"
#include "Game/Class_109169E0.h"
#include "Game/Class_10916CA0.h"
#include "Game/Class_109242E0.h"
#include "Game/Class_10924E80.h"

class Class_1090A780;

extern Class_109242E0* DAT_10f319a0;

class Class_10924100;

extern Class_10924100* DAT_10f2c740;

extern Class_10924E80* DAT_10f2c734;

extern int DAT_10efef54;

extern char DAT_10f2c75a;

extern int DAT_10f2c708;

extern int DAT_10f2c70c;

extern int DAT_10f2c710;

extern int DAT_10f2c714;

void SetViewport(int A, int B, int C, int D);

// FUNCTION: 0x10915810 ?Lookup@Class_10915210@@QAEHABVClass_1090A780@@0@Z
int Class_10915210::Lookup(const Class_1090A780& A, const Class_1090A780& B)
{
    Class_109169E0* Obj = FUN_10915210(A);
    if (Obj == 0)
        return 0;
    return Obj->FUN_109169e0(B);
}

// FUNCTION: 0x10915830 ?Free@Class_10915830@@QAEXXZ
void Class_10915830::Free()
{
    Clear(0x40);
    ::operator delete(m_Table);
    m_Count = 0;
    m_Size = 0;
    m_Table = 0;
    m_Collisions = 0;
}

// FUNCTION: 0x10916CA0 ?Free@Class_10916CA0@@QAEXXZ
void Class_10916CA0::Free()
{
    Clear(0x40);
    ::operator delete(m_Table);
    m_Count = 0;
    m_Size = 0;
    m_Table = 0;
    m_Collisions = 0;
}

// FUNCTION: 0x10917C50 ?FUN_10917c50@@YAXH@Z
void FUN_10917c50(int p1)
{
    DAT_10f319a0->FUN_109242e0(p1);
}

// FUNCTION: 0x10917FC0 ?FUN_10917fc0@@YAXH@Z
void FUN_10917fc0(int A)
{
    if (DAT_10f2c740)
    {
        DAT_10efef54 = A;
        DAT_10f2c734->FUN_10924e80(A);
    }
    else
        DAT_10efef54 = -1;
}

// FUNCTION: 0x10918200 ?FUN_10918200@@YAXXZ
void FUN_10918200()
{
    if (DAT_10f2c75a)
        SetViewport(DAT_10f2c708, DAT_10f2c70c, DAT_10f2c710, DAT_10f2c714);
}
