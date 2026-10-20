// Game/Class_10E49EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E49EE0.h"
#include "Game/cD3DVertexBuffer.h"
#include "Game/Struct_10932ED0.h"
#include "Game/Class_10E49D1C.h"

class Class_10E49EE0_Owner
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9(Class_10E49EE0* Object);
};

// FUNCTION: 0x109341E0 ?AddRef@Class_10E49EE0@@UAEHXZ
int Class_10E49EE0::AddRef()
{
    return ++Unknown08;
}

// FUNCTION: 0x109341F0 ?Release@Class_10E49EE0@@UAEHXZ
int Class_10E49EE0::Release()
{
    int Count = --Unknown08;
    if (Count == 0)
    {
        ((Class_10E49EE0_Owner*)Unknown04)->Virtual9(this);
        delete this;
    }
    return Count;
}
