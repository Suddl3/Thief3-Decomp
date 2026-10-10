// Game/Class_10E6FCBC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E67938.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10AC8F70
{
public:
    void FUN_10ac8f70(int Count);

    ~Class_10AC8F70()
    {
        FUN_10ac8f70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10E6FCBC : public Class_10E67938
{
public:
    virtual ~Class_10E6FCBC();

    Class_10AC8F70 Unknown04;
};

// FUNCTION: 0x10AC9110 ??1Class_10E6FCBC@@UAE@XZ
Class_10E6FCBC::~Class_10E6FCBC()
{
}

// FUNCTION: 0x10AC9190 ??_GClass_10E6FCBC@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AC9110's definition in this unit.
