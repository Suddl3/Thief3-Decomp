// Game/Class_10E49C6C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49C6C.h"

extern bool DAT_10f2c757;

// FUNCTION: 0x10930110 ?FUN_10930110@Class_10E49C6C@@QAEXHH@Z
void Class_10E49C6C::FUN_10930110(int Param1, int Param2)
{
    if (!DAT_10f2c757 && FUN_10925160(Param2))
    {
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(Param1, 4, m_Items[i]);
        FUN_10925190(4);
    }
}
