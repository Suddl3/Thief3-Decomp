// Game/Class_10BAEC80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cObjectArray.h"
#include "Game/cStructArray.h"
#include "Game/Class_10BAEC80.h"
#include "Game/Struct_10C22BA0.h"
#include "Game/Struct_10C22AD0.h"

// FUNCTION: 0x10BAEC80 ?FUN_10baec80@Class_10BAEC80@@QAEXXZ
void Class_10BAEC80::FUN_10baec80()
{
    FUN_10a211e0(0);
    if (m_BlockBytes)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        m_BlockBytes = 0;
    }
}

// FUNCTION: 0x10C22AD0 ?CopyFrom@Class_10BAEC80@@QAEXABV1@@Z
void Class_10BAEC80::CopyFrom(const Class_10BAEC80& Other)
{
    FUN_10a211e0(Other.Count);
    for (int i = 0; i < Count; i++)
        Data[i] = Other.Data[i];
}
