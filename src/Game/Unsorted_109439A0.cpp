// Game/Unsorted_109439A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cEntryArray.h"
#include "Game/Class_10946B20.h"
#include "Game/Class_10A32000.h"
#include "Game/Object_10944D50.h"

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

// FUNCTION: 0x10944D50 ?FUN_10944d50@@YGXPAVObject_10944D50@@HHPAVClass_10A32000@@PAH@Z
void __stdcall FUN_10944d50(Object_10944D50* A, int B, int Size, Class_10A32000* C, int* Offset)
{
    int Base = 0;
    A->Virtual6(0, 0, &Base);
    char* Src = (char*)(Base + B);
    C->FUN_10a32000(*Offset + Size);
    memcpy(C->Unknown08 + *Offset, Src, Size);
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
