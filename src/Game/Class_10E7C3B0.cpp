// Game/Class_10E7C3B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10B154C0.h"
#include "Game/Class_10E7C3B0.h"

class WindowManager;

extern WindowManager* GWindowManager;

Class_10905A90_Member* GetAllocator();

void* GetWindowManager();

// Game/cString.h copied without its base: the destructor is the base's body as this class's own,
// and this unit's temporary is destroyed without the zero store the inherited one makes.
class cString
{
public:
    cString() : Unknown00(0) {}
    cString(const char* In);
    cString(const cString& Other);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }
    cString& operator=(const cString& Other);

    char* Unknown00;
};

// Copied from Game/Class_1090FD40.h with the constructor and destructor the function's locals use.
class Class_1090FD40
{
public:
    Class_1090FD40() : m_Count(0), m_CapacityBytes(0), m_Items(0) {}
    ~Class_1090FD40() { Empty(); }
    void SetCount(int Count);
    void Empty()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
    }

    int m_Count;
    int m_CapacityBytes;
    cString* m_Items;
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

// FUNCTION: 0x10B37370 ?ShowOkMessage@Class_10E7C3B0@@UAEHHHPAVClass_10B37370_Arg@@@Z
int Class_10E7C3B0::ShowOkMessage(int A, int B, Class_10B37370_Arg* C)
{
    if (GWindowManager)
    {
        Class_10AB37C0* Item = C->Virtual4(0);
        Class_1090FD40 Array;
        cString Text("<string=T_OK>");
        int Count = Array.m_Count;
        Array.SetCount(Count + 1);
        Array.m_Items[Count] = Text;
        ((Class_10B154C0*)GetWindowManager())->FUN_10b15770(0, Item->GetName(), &Array, 0, 0, 5.0f);
    }
    return 1;
}
