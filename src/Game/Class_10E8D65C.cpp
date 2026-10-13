// Game/Class_10E8D65C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C15EF0.h"

class Class_10E8D658
{
public:
    Class_10E8D658();

    virtual ~Class_10E8D658();

    char Unknown04[0x4014];
};

class Class_10E8D65C
{
public:
    Class_10E8D65C();

    virtual ~Class_10E8D65C();

    char Unknown04;
    bool m_Active;
    char Unknown06[2];
    int Unknown08;
    int m_OwnerKey;
    Class_10E8D658 Unknown10;
    char Unknown4028[0x8];
    Class_10E8D658 Unknown4030;
};

class Class_10E98C84
{
public:
    void ResetVTable();

    void* Field00;
};

// FUNCTION: 0x10BA8F30 ??0Class_10E8D65C@@QAE@XZ
Class_10E8D65C::Class_10E8D65C()
    : Unknown04(1), m_Active(false), Unknown08(0), m_OwnerKey(0)
{
}

// FUNCTION: 0x10BA8F90 ??_GClass_10E8D65C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10BA8FB0's definition in this unit.

// FUNCTION: 0x10BA8FB0 ??1Class_10E8D65C@@UAE@XZ
Class_10E8D65C::~Class_10E8D65C()
{
}
