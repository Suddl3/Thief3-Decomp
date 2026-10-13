// Game/Class_10B116B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B116B0.h"
#include "Game/Class_10B11600.h"
#include "Game/Class_10E782A0.h"
#include "Game/Class_10B111A0_Unknown0C.h"
#include "Game/Class_10B111A0_Unknown10.h"
#include "Game/Struct_10B111A0_Node.h"

Class_10905A90_Member* GetAllocator();

// The element: 0xC bytes, its three words cleared by the loop.
class Class_10B11520_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B11520 ?Resize@Class_10B116B0@@QAEXH@Z
void Class_10B116B0::Resize(int NewCount)
{
    int OldCount = Count;
    int Capacity = !Data ? 0 : AllocBytes / sizeof(Class_10B11520_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Class_10B11520_Unknown08), 0, 0, 0, 0);
        AllocBytes = NewCapacity * sizeof(Class_10B11520_Unknown08);
        Data = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            AllocBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Class_10B11520_Unknown08), 0, 0, 0, 0);
            AllocBytes = NewCapacity * sizeof(Class_10B11520_Unknown08);
            Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10B11520_Unknown08* Element = (Class_10B11520_Unknown08*)((char*)Data + j * sizeof(Class_10B11520_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
            Element->Unknown08 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}

// FUNCTION: 0x10B116B0 ?Free@Class_10B116B0@@QAEXXZ
void Class_10B116B0::Free()
{
    Resize(0);
    if (AllocBytes)
    {
        GetAllocator()->Virtual5(Data);
        Data = 0;
        AllocBytes = 0;
    }
}
