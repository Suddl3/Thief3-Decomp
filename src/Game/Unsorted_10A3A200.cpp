// Game/Unsorted_10A3A200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3A300_Primary.h"
#include "Game/Class_10E66718.h"
#include "Game/Class_10E6678C.h"
#include "Game/Struct_10919190.h"

class Class_10A3A300 : public Class_10A3A300_Primary, public Class_10E66718
{
public:
    virtual void FUN_10a3a300(int A);
};

class Class_10A3A4C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
};

// FUNCTION: 0x10A3A300 ?FUN_10a3a300@Class_10A3A300@@UAEXH@Z
void Class_10A3A300::FUN_10a3a300(int A)
{
    FUN_10948bd0();
    Unknown5C = 0;
    if (!Unknown130)
        ((Class_10A3A300_Primary*)this)->Virtual6();
}

// FUNCTION: 0x10A3A4C0 ?FUN_10a3a4c0@Class_10E6678C@@UAE_NXZ
bool Class_10E6678C::FUN_10a3a4c0()
{
    if (m_Items.Count == 0)
        return true;
    return (*(Class_10A3A4C0**)m_Items.Data)->Virtual4() == 0;
}
