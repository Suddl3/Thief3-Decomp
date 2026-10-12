// Game/Unsorted_10C5B9A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A32000.h"
#include "Game/Class_10C5B9A0.h"
#include "Game/Class_10C5BA80.h"
#include "Game/Class_10C5BFA0.h"
#include "Game/Class_10C5C3A0.h"

struct Info_10C5BFA0
{
    int Unknown00;
    Class_10C5BA80 Unknown04;
};

// FUNCTION: 0x10C5B9A0 ?Append@Class_10C5B9A0@@QAEXD@Z
void Class_10C5B9A0::Append(char Item)
{
    Class_10A32000* Array = &m_Chars;
    int Index = Array->m_Count;
    Array->SetCount(Index + 1);
    Array->m_Data[Index] = Item;
}

// FUNCTION: 0x10C5BFA0 ?FUN_10c5bfa0@Class_10C5BFA0@@QAE?AVClass_10C5BA80@@XZ
Class_10C5BA80 Class_10C5BFA0::FUN_10c5bfa0()
{
    return Class_10C5BA80(Unknown00->Unknown04);
}

// FUNCTION: 0x10C5C3A0 ?Init@Class_10C5C3A0@@QAEXXZ
void Class_10C5C3A0::Init()
{
    Unknown20 = -1;
    FUN_10c5bf20(0x40);
}
