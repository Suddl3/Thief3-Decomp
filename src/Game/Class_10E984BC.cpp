// Game/Class_10E984BC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6BF84.h"

Class_10905A90_Member* GetAllocator();

class Class_10E984BC : public Class_10E6BF84
{
public:
    virtual ~Class_10E984BC();

    int* m_Elements;
};

// FUNCTION: 0x10C12A00 ??1Class_10E984BC@@UAE@XZ
Class_10E984BC::~Class_10E984BC()
{
    if (m_Elements)
    {
        int* Obj = m_Elements - 1;
        GetAllocator()->Virtual5(Obj);
        m_Elements = 0;
    }
}

// FUNCTION: 0x10C12BC0 ??_GClass_10E984BC@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C12A00's definition in this unit.
