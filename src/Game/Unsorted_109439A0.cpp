// Game/Unsorted_109439A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cEntryArray.h"
#include "Game/Class_10946B20.h"
#include "Game/Class_10A32000.h"
#include "Game/Object_10944D50.h"
#include "Game/Class_109434F0.h"

struct Entry_10946110
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

extern "C" void* memcpy(void*, const void*, unsigned int);

struct Struct_109439A0 {};

class Class_109439A0_Unknown128
{
public:
    Struct_109439A0* Unknown00;
    int Unknown04;
    Struct_109439A0* Unknown08;
};

class Class_109439A0
{
public:
    void FUN_109439a0();

    char Unknown00[0x128];
    Class_109439A0_Unknown128* Unknown128;
    Struct_109439A0* Unknown12C;
    char Unknown130[0x4];
    Class_109434F0 Unknown134;
    char Unknown140[0x2C];
    cEntryArray Unknown16C;
};

// FUNCTION: 0x109439A0 ?FUN_109439a0@Class_109439A0@@QAEXXZ
void Class_109439A0::FUN_109439a0()
{
    Unknown134.FUN_10dcd540(0);
    Unknown16C.Resize(0);
    Class_109439A0_Unknown128* Block = Unknown128;
    if (Block)
    {
        if (Block->Unknown00)
        {
            delete Block->Unknown00;
            Block->Unknown00 = 0;
        }
        if (Block->Unknown08)
        {
            delete Block->Unknown08;
            Block->Unknown08 = 0;
            Block->Unknown04 = 0;
        }
        delete Block;
    }
    if (Unknown12C)
        delete Unknown12C;
    Unknown128 = 0;
    Unknown12C = 0;
}

// FUNCTION: 0x10944D50 ?AppendBufferRange@@YGXPAVObject_10944D50@@HHPAVClass_10A32000@@PAH@Z
void __stdcall AppendBufferRange(Object_10944D50* A, int B, int Size, Class_10A32000* C, int* Offset)
{
    int Base = 0;
    A->Virtual6(0, 0, &Base);
    char* Src = (char*)(Base + B);
    C->SetCount(*Offset + Size);
    memcpy(C->m_Data + *Offset, Src, Size);
    *Offset += Size;
    A->Virtual7();
}

// FUNCTION: 0x10946110 ?Add@cEntryArray@@QAEHPBUEntry_10946110@@@Z
int cEntryArray::Add(const Entry_10946110* Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Entries[Index] = *Item;
    return Index;
}

// FUNCTION: 0x10946B20 ?FUN_10946b20@Class_10946B20@@QAEXXZ
void Class_10946B20::FUN_10946b20()
{
    FUN_109464c0(0, 1);
}
