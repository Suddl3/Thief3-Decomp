// Game/Class_10E49EB8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10E49D1C.h"
#include "Game/Struct_10932ED0.h"

// A COM object the list at +0x20 holds (Direct3D): slot 2 is Release.
class Class_10933A60_Element
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
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
    Class_10933A60_Element** Unknown08;
    Class_10933A60_Element** Unknown0C;
    Class_10933A60_Element** Unknown10;
};

class Class_10E49EB8 : public Class_10E49D1C
{
public:
    virtual ~Class_10E49EB8();

    int Unknown1C;
    Class_1095D6C0 m_vecD3DVBs;
    int Unknown34;
    int Unknown38;
    Class_1095D6C0 m_vecVertexBuffers;
};

// FUNCTION: 0x10933A40 ??_GClass_10E49EB8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10933A60's definition in this unit.

// FUNCTION: 0x10933A60 ??1Class_10E49EB8@@UAE@XZ
Class_10E49EB8::~Class_10E49EB8()
{
    m_vecVertexBuffers.FUN_1095d6c0();
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown1C = 0;
    for (Class_10933A60_Element** It = m_vecD3DVBs.Unknown08; It != m_vecD3DVBs.Unknown0C; ++It)
    {
        if (*It)
        {
            (*It)->Virtual2();
            *It = 0;
        }
    }
    m_vecD3DVBs.FUN_1095d6c0();
}
