// Game/Unsorted_10955B20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955C30.h"
#include "Game/Class_1095AFD0.h"

void FUN_1092bdb0(void* P);

extern const char DAT_10e47660[];

int FUN_1095af30(int A);

void* FUN_1092cac0(const char* Name, int A, int B, int C, int D, int E);

// FUNCTION: 0x10955C30 ?Destroy@Class_10955C30@@QAEXXZ
void Class_10955C30::Destroy()
{
    if (m_Object)
        delete m_Object;
    else if (m_Handle)
        FUN_1092bdb0(m_Handle);
    m_Object = 0;
    m_Handle = 0;
}

// FUNCTION: 0x10956270 ?Create@Class_10955C30@@QAEXXZ
void Class_10955C30::Create()
{
    const char* Name = DAT_10e47660;
    if (m_Name)
        Name = m_Name;
    m_Handle = FUN_1092cac0(Name, Unknown08, FUN_1095af30(Unknown08), 0, 0, 0);
}
