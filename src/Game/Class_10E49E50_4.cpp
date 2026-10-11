// Game/Class_10E49E50_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Struct_10932ED0.h"
#include "Game/Class_10E49D1C.h"

extern "C" void* memset(void* Dest, int Value, unsigned int Count);

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

// A list element (a COM object or similar): slot 1 is called here.
class Class_109337B0_Element
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// A list of pointers in a block: the first, last and end pointers at +0x08.
class Class_1095D6C0
{
public:
    void FUN_1095d6c0();

    ~Class_1095D6C0()
    {
        if (Unknown08)
            ::operator delete(Unknown08);
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
    }

    char Unknown00[8];
    Class_109337B0_Element** Unknown08;
    Class_109337B0_Element** Unknown0C;
    Class_109337B0_Element** Unknown10;
};

class Class_10E49E50 : public Class_10E49D1C
{
public:
    virtual ~Class_10E49E50();

    Class_1095D6C0 Unknown1C;
};

// FUNCTION: 0x109337B0 ??1Class_10E49E50@@UAE@XZ
Class_10E49E50::~Class_10E49E50()
{
    for (Class_109337B0_Element** It = Unknown1C.Unknown08; It != Unknown1C.Unknown0C; It = Unknown1C.Unknown08)
    {
        if (*It)
        {
            (*It)->Virtual1();
            *It = 0;
        }
        else
        {
            Class_109337B0_Element** Next = It + 1;
            memmove(It, Next, (Unknown1C.Unknown0C - Next) * 4);
            Unknown1C.Unknown0C--;
        }
    }
    Unknown1C.FUN_1095d6c0();
}
