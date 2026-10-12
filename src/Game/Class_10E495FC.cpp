// Game/Class_10E495FC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E499A8.h"
#include "Game/cString.h"

class Class_10915D50
{
public:
    Class_10915D50() : m_Collisions(0), m_Count(0), m_Size(0), m_NoResize(false), m_Table(0) {}

    void Rehash(int Size);

    int m_Collisions;
    int m_Count;
    int m_Bits;
    int m_Size;
    bool m_NoResize;
    void* m_Table;
    Class_10E499A8 m_KeyTraits;
};

class Class_10E495FC
{
public:
    Class_10E495FC();

    virtual ~Class_10E495FC();

    cString Unknown04;
    Class_10915D50 Unknown08;
};

// FUNCTION: 0x10916CD0 ??0Class_10E495FC@@QAE@XZ
Class_10E495FC::Class_10E495FC()
{
    Unknown08.Rehash(8);
}

// FUNCTION: 0x10917500 ??_GClass_10E495FC@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10916CD0's definition in this unit.

// FUNCTION: 0x109178D0 ?PaddingToAlign@@YAIII@Z
unsigned int PaddingToAlign(unsigned int Value, unsigned int Alignment)
{
    return (Value + Alignment - 1) / Alignment * Alignment - Value;
}
