// Game/Unsorted_10C54A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <list>
#include "Game/Class_10C54B70_Object.h"
#include "Game/Class_10C55320.h"
#include "Game/Object_10AB5B20.h"
#include "Game/cRefPtr.h"
#include "Game/Class_10C54B70_Member.h"
#include "Game/Class_10C55360.h"
#include "Game/Entry_10C55360.h"
#include "Game/Class_10C56E40_Field00.h"
#include "Game/Class_10C54A20.h"

struct Struct_10C55320
{
    Struct_10C55320* Unknown00;
    Struct_10C55320* Unknown04;
    char Unknown08[0x14];
    cRefPtr Unknown1C;
};

class Class_10EB7660
{
public:
    Class_10EB7660();

    virtual ~Class_10EB7660();

    int Unknown04;
};

class Class_10E9C300 : public Class_10EB7660
{
public:
    Class_10E9C300();

    Class_10C54B70_Member Unknown08;
};

class Class_10C5A160_Y;

// Class_10C56E40 as its header declares it, with the copy constructor and
// assignment the header lacks: a copy takes a reference (Virtual1), and a
// replaced or destroyed handle drops one (Virtual2).
class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C56E40_Field00* P)
    {
        Unknown00 = P;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    ~Class_10C56E40()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }
    Class_10C56E40() : Unknown00(0) {}
    Class_10C56E40(Class_10C5A160_Y*& A);
    Class_10C56E40(const Class_10C56E40& Other)
    {
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10C56E40_Field00* Old = Unknown00;
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
        if (Old)
            Old->Virtual2();
        return *this;
    }

    Class_10C56E40_Field00* Unknown00;
};

// An 8-byte element: an int, then a handle.
struct Struct_10C54A20
{
    int Unknown00;
    Class_10C56E40 Unknown04;
};

// FUNCTION: 0x10C54A20 ?Swap@Class_10C54A20@@QAEXHH@Z
void Class_10C54A20::Swap(int A, int B)
{
    Struct_10C54A20 Temp;
    Temp = m_Data[A];
    m_Data[A] = m_Data[B];
    m_Data[B] = Temp;
}

// FUNCTION: 0x10C54B70 ??0Class_10E9C300@@QAE@XZ
Class_10E9C300::Class_10E9C300()
{
}

// FUNCTION: 0x10C55320 ?GetFirst@Class_10C55320@@QAE?AVcRefPtr@@XZ
cRefPtr Class_10C55320::GetFirst()
{
    m_Current = m_Head->Unknown00;
    if (m_Current == m_Head)
        return cRefPtr();
    return m_Current->Unknown1C;
}

// FUNCTION: 0x10C55360 ?GetNext@Class_10C55360@@QAE?AVcRefPtr@@XZ
cRefPtr Class_10C55360::GetNext()
{
    ++m_Current;
    if (m_Current == m_Entries.end())
        return cRefPtr();
    return m_Current->Value;
}
