// Game/Class_10E7B89C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7B89C.h"
#include "Game/Struct_10B2EE40.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10B27FD0.h"
#include "Game/Class_10B32D60.h"
#include "Game/Class_10E7AD44.h"
#include "Game/cT3ReadBookWindow.h"
#include "Game/Class_10E7C380.h"
#include "Game/Class_10E7C38C.h"
#include "Game/Class_10E7C3B0.h"
#include "Game/Class_10E7C3BC.h"
#include "Game/Class_10E7C3C8.h"
#include "Game/Class_10E7C3D4.h"
#include "Game/Class_10E7C3E0.h"
#include "Game/Class_10E7C404.h"
#include "Game/Class_10E7C410.h"
#include "Game/Class_10E7C41C.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10B2EE40 ?FUN_10b2ee40@Class_10E7B89C@@UAE?AUStruct_10B2EE40@@XZ
Struct_10B2EE40 Class_10E7B89C::FUN_10b2ee40()
{
    return Unknown14;
}

// FUNCTION: 0x10B2EE60 ?FUN_10b2ee60@Class_10E7B89C@@UAE_NXZ
bool Class_10E7B89C::FUN_10b2ee60()
{
    if (m_Value < DAT_10eafbdc)
        return false;
    return m_MaxValue >= m_Value ? 1 : 0;
}

// FUNCTION: 0x10B2EE90 ?ResetValue@Class_10E7B89C@@QAEXXZ
void Class_10E7B89C::ResetValue()
{
    Field0C = Field10;
}
