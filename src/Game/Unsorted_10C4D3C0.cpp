// Game/Unsorted_10C4D3C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C4D250.h"
#include "Game/Class_10C4E8D0.h"
#include "Game/Class_10905A90_Member.h"
#include <float.h>

struct Struct_10C4D810
{
    int Count;
    char Unknown04[4];
    int Unknown08;
};

Class_10905A90_Member* GetAllocator();

// The element: 0x18 bytes, its six words cleared by the loop.
class Class_10C4D550_Unknown08
{
public:
    float Unknown00;
    float Unknown04;
    float Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
};

// FUNCTION: 0x10C4D550 ?FUN_10c4d550@Class_10C4E8D0@@QAEXH@Z
void Class_10C4E8D0::FUN_10c4d550(int Count)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10C4D550_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4D550_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C4D550_Unknown08);
        Unknown08 = Block;
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C4D550_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C4D550_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < Count; j++)
    {
        Class_10C4D550_Unknown08* Element = (Class_10C4D550_Unknown08*)((char*)Unknown08 + j * sizeof(Class_10C4D550_Unknown08));
        if (Element)
        {
            Element->Unknown00 = -FLT_MAX;
            Element->Unknown04 = FLT_MAX;
            Element->Unknown08 = 1.0f;
            Element->Unknown0C = -1;
            Element->Unknown10 = -1;
            Element->Unknown14 = -1;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}

// FUNCTION: 0x10C4D810 ?FUN_10c4d810@Class_10C4D250@@QAEMPAUStruct_10C4D810@@@Z
float Class_10C4D250::FUN_10c4d810(Struct_10C4D810* Arg)
{
    float Sum = 0.0f;
    for (int i = 1; i < Arg->Count - 1; i++)
    {
        int P = Arg->Unknown08 + i * 12;
        Sum += FUN_10c4d250(Arg->Unknown08, P, P + 12);
    }
    return Sum;
}
