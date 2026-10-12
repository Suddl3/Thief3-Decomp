// Game/Class_10E7C3B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10B154C0.h"

class WindowManager;

extern WindowManager* GWindowManager;

Class_10905A90_Member* GetAllocator();

void* FUN_10b154c0();

// Game/Class_109081E0.h copied without its base: the destructor is the base's body as this class's own,
// and this unit's temporary is destroyed without the zero store the inherited one makes.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

// Copied from Game/Class_1090FD40.h with the constructor and destructor the function's locals use.
class Class_1090FD40
{
public:
    Class_1090FD40() : m_Count(0), Unknown04(0), m_Items(0) {}
    ~Class_1090FD40() { Empty(); }
    void FUN_1090f2c0(int Count);
    void Empty()
    {
        FUN_1090f2c0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }

    int m_Count;
    int Unknown04;
    Class_109081E0* m_Items;
};

class Class_10B37370_Arg
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10AB37C0* Virtual4(int A);
};

class Class_10E7C3B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int ShowOkMessage(int A, int B, Class_10B37370_Arg* C);
};

// FUNCTION: 0x10B37370 ?ShowOkMessage@Class_10E7C3B0@@UAEHHHPAVClass_10B37370_Arg@@@Z
int Class_10E7C3B0::ShowOkMessage(int A, int B, Class_10B37370_Arg* C)
{
    if (GWindowManager)
    {
        Class_10AB37C0* Item = C->Virtual4(0);
        Class_1090FD40 Array;
        Class_109081E0 Text("<string=T_OK>");
        int Count = Array.m_Count;
        Array.FUN_1090f2c0(Count + 1);
        Array.m_Items[Count] = Text;
        ((Class_10B154C0*)FUN_10b154c0())->FUN_10b15770(0, Item->FUN_10ab37c0(), &Array, 0, 0, 5.0f);
    }
    return 1;
}
