// Game/Class_10B9CAC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9CB80.h"
#include "Game/Class_10B9CBE0.h"
#include "Game/Class_10B9CCD0.h"
#include "Game/Class_10B9CCF0.h"
#include "Game/Class_10B9CD10.h"
#include "Game/Class_10B9CD30.h"
#include "Game/Class_10B9CDA0.h"
#include "Game/Class_10B9CDC0.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7580.h"

class Object_10B9CAC0
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
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual int Virtual35(int A, int B);
};

class Class_10B9CAC0
{
public:
    int FUN_10b9d040(int A, int B);

    char Unknown00[0x10];
    int m_Count;
    char Unknown14[4];
    Object_10B9CAC0** m_Stack;
};

class Class_10BA9FD0;

class Class_10BB7580;

// FUNCTION: 0x10B9D040 ?FUN_10b9d040@Class_10B9CAC0@@QAEHHH@Z
int Class_10B9CAC0::FUN_10b9d040(int A, int B)
{
    if (m_Count)
    {
        Object_10B9CAC0* Obj = m_Stack[m_Count - 1];
        if (Obj)
            return Obj->Virtual35(A, B);
    }
    return 0;
}
