// Game/Class_10E495F8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Game/Class_10915B00.h"
#include "Game/Class_10E499A8.h"
#include "Game/cString.h"

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

    cString Unknown04;
    char Unknown08;
    bool Unknown09;
    Class_10914D80 m_Map;
};

// FUNCTION: 0x10915860 ??0Class_10E495F8@@QAE@XZ
Class_10E495F8::Class_10E495F8()
    : Unknown09(false)
{
    m_Map.Rehash(0x40);
}

// FUNCTION: 0x10915AE0 ??_GClass_10E495F8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10915860's definition in this unit.

// FUNCTION: 0x10915B00 ?FindSubstring@Class_10915B00@@QAEHPBD@Z
int Class_10915B00::FindSubstring(const char* Needle)
{
    if (m_Text)
    {
        char* Found = strstr(m_Text, Needle);
        if (Found)
            return Found - m_Text;
    }
    return -1;
}
