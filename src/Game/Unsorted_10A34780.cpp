// Game/Unsorted_10A34780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34D50.h"
#include "Game/Class_10EB7660.h"
#include "Game/Entry_10A34D50.h"

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E664A4 : public Class_10EB7660
{
public:
    Class_10E664A4();

    virtual ~Class_10E664A4();

    FArray Unknown40;
};

// FUNCTION: 0x10A34AC0 ??0Class_10E664A4@@QAE@XZ
Class_10E664A4::Class_10E664A4()
{
}

// FUNCTION: 0x10A34D50 ?Append@Class_10A34D50@@QAEHABUEntry_10A34D50@@@Z
int Class_10A34D50::Append(const Entry_10A34D50& Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Items[Index] = Item;
    return Index;
}

// FUNCTION: 0x10A34D80 ??_GClass_10E664A4@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A34AC0's definition in this unit.
