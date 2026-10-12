// Game/Class_10E66390_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A905A0.h"

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    cString& operator=(const cString& Other);

    char* Unknown00;
};

class Class_10E66390 : public Class_10A905A0
{
public:
    Class_10E66390(const cString& A);

    virtual void Virtual1();
    virtual int FUN_10a2fcb0(Class_10E66390* A);

    cString Unknown04;
};

// FUNCTION: 0x10A2FFA0 ??0Class_10E66390@@QAE@ABVcString@@@Z
Class_10E66390::Class_10E66390(const cString& A)
{
    Unknown04 = A;
}
