// Game/Class_10E6F3F4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5BBE0.h"
#include "Game/Struct_10ABA050.h"

class Object_10ABB070
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// Releases the object in the first field before the struct goes away.
Struct_10ABA050::~Struct_10ABA050()
{
    Object_10ABB070* P = Unknown00;
    if (P)
        P->Virtual2();
}

class Class_10E6F3F4 : public Class_10E5BBE0
{
public:
    Class_10E6F3F4();

    virtual ~Class_10E6F3F4();

    void FUN_10abaca0();

    int UnknownD8;
    int UnknownDC;
    int UnknownE0;
    int UnknownE4;
    int UnknownE8;
    int UnknownEC;
    int UnknownF0;
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
    int Unknown10C;
    int Unknown110;
    int Unknown114;
    int Unknown118;
    int Unknown11C;
    int Unknown120;
    int Unknown124;
    int Unknown128;
    int Unknown12C;
    int Unknown130;
    int Unknown134;
    int Unknown138;
    int Unknown13C;
    int Unknown140;
    int Unknown144;
    Struct_10ABA050 Unknown148;
};

// FUNCTION: 0x10ABB070 ??1Class_10E6F3F4@@UAE@XZ
Class_10E6F3F4::~Class_10E6F3F4()
{
    FUN_10abaca0();
}
