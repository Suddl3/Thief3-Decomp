// Game/Unsorted_10A78070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_1096D780_Field98.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10A78070.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10AA3520_Unknown78.h"
#include "Game/Class_1096D780.h"

class Class_10DA0870;

class Class_10A12AE0
{
public:
    void FUN_10a12ae0(Class_1096D780* A, int B);
};

extern Struct_10AA3520* DAT_10f35dec;

extern Class_10A12AE0* DAT_10f39874;

// FUNCTION: 0x10A78070 ?Spawn@Class_10A78070@@QAEPAVClass_1096D780@@HPBVFVector@@PBVFRotator@@HHHH@Z
Class_1096D780* Class_10A78070::Spawn(int A, const FVector* B, const FRotator* C, int D, int E, int F, int G)
{
    int Index = m_NextIndex;
    if (Index >= m_PoolCount)
        return 0;
    m_NextIndex = Index + 1;
    Class_1096D780* Item = m_Pool[Index];
    if (Index + 1 >= m_PoolCount)
        m_NextIndex = 0;
    int Key = 1;
    ((Class_1098E3D0*)Item)->FUN_1098e3d0(0x40800056, &Key);
    ((Class_1098E3D0*)Item)->FUN_1098e3d0(0x100272, &F);
    DAT_10f39874->FUN_10a12ae0(Item, E);
    ((Class_1098E3D0*)Item)->FUN_1098e3d0(0x40100030, &G);
    E = 0;
    ((Class_1098E3D0*)Item)->FUN_1098e3d0(0x40800056, &E);
    ((Class_1098E3D0*)Item)->FUN_1098e3d0(0x2047b, &A);
    Item->Unknown38 = *C;
    DAT_10f35dec->Unknown78->Virtual17(Item, D, 1);
    static_cast<Class_1096D780_Field98*>(Item->Get())->Virtual43(Item, *B, 0, 0, 0);
    return Item;
}
