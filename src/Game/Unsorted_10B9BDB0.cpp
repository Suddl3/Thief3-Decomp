// Game/Unsorted_10B9BDB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9BDB0.h"
#include "Game/Class_10B9C030.h"
#include "Game/Class_10B9C9A0.h"
#include "Game/Class_10B9C9C0.h"
#include "Game/Class_10BB89D0.h"
#include "Game/Class_10BE3FF0.h"
#include "Game/Class_10BFB910.h"
#include "Game/Class_10BFC190.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10B9BEB0.h"
#include "Game/Struct_10B9BDB0_Unknown118.h"

// FUNCTION: 0x10B9C030 ?Contains@Class_10B9C030@@QAE_NH@Z
bool Class_10B9C030::Contains(int Value)
{
    return FindIndex(Value) != -1;
}

// FUNCTION: 0x10B9C9A0 ?Release@Class_10B9C9A0@@QAEXXZ
void Class_10B9C9A0::Release()
{
    Class_10B9BEB0* Object = Unknown00;
    if (Object)
    {
        Unknown00 = 0;
        Object->FUN_10b9beb0();
        ::operator delete(Object);
    }
}

// FUNCTION: 0x10B9C9C0 ?FUN_10b9c9c0@Class_10B9C9C0@@QAEXPAX@Z
void Class_10B9C9C0::FUN_10b9c9c0(void* A)
{
    if (Unknown38)
        ::operator delete(Unknown38);
    Unknown38 = A;
}
