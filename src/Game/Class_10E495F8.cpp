// Game/Class_10E495F8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Game/Class_10915B00.h"
#include "Game/Class_10E499A8.h"
#include "Game/Class_109081E0.h"

class Class_10914D80
{
public:
    Class_10914D80() : m_Collisions(0), m_Count(0), m_Size(0), m_NoResize(false), m_Table(0) {}

    void Rehash(int Size);

    int m_Collisions;
    int m_Count;
    int m_Bits;
    int m_Size;
    bool m_NoResize;
    void* m_Table;
    Class_10E499A8 m_KeyTraits;
};

class Class_10E495F8
{
public:
    Class_10E495F8();

    virtual ~Class_10E495F8();

    Class_109081E0 Unknown04;
    char Unknown08;
    bool Unknown09;
    Class_10914D80 Unknown0C;
};

// FUNCTION: 0x10915860 ??0Class_10E495F8@@QAE@XZ
Class_10E495F8::Class_10E495F8()
    : Unknown09(false)
{
    Unknown0C.Rehash(0x40);
}

// FUNCTION: 0x10915AE0 ??_GClass_10E495F8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10915860's definition in this unit.

// FUNCTION: 0x10915B00 ?FUN_10915b00@Class_10915B00@@QAEHPBD@Z
int Class_10915B00::FUN_10915b00(const char* Needle)
{
    if (Unknown00)
    {
        char* Found = strstr(Unknown00, Needle);
        if (Found)
            return Found - Unknown00;
    }
    return -1;
}
