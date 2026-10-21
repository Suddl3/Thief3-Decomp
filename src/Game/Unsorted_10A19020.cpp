// Game/Unsorted_10A19020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A19330.h"
#include "Game/cIntArray.h"
#include "Game/cString.h"

extern const char DAT_10e5b554[];

extern const char DAT_10e54edc[];

void __cdecl FUN_10a4f840(cString& Name);

bool __cdecl FUN_10a4fb00(cString& Name, int A);

void __cdecl FUN_10a4fb70(cString& Name);

// The object the settings are pushed into.
class Class_10A19090_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Class_10A19090
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

    void FUN_10a19090(int Arg);

    Class_10A19090_Member* Unknown04;
    char Pad08[0x66C];
    int Unknown674;
};

// FUNCTION: 0x10A19090 ?FUN_10a19090@Class_10A19090@@QAEXH@Z
void Class_10A19090::FUN_10a19090(int Arg)
{
    Unknown674 = Arg;
    Virtual7();
    Unknown04->Virtual1();
    {
        cString Name("Game");
        FUN_10a4f840(Name);
    }
    {
        cString Name(DAT_10e5b554);
        FUN_10a4f840(Name);
    }
    {
        cString Name(DAT_10e54edc);
        FUN_10a4f840(Name);
    }
    {
        cString Name("Game");
        FUN_10a4fb00(Name, 0);
    }
    {
        cString Name(DAT_10e5b554);
        FUN_10a4fb00(Name, 0);
    }
    {
        cString Name(DAT_10e54edc);
        FUN_10a4fb00(Name, 0);
    }
    {
        cString Name("Game");
        FUN_10a4fb70(Name);
    }
}

// FUNCTION: 0x10A19330 ?RemoveItem@Class_10A19330@@QAEXHH@Z
void Class_10A19330::RemoveItem(int Item, int Which)
{
    int Index = m_Lists[Which].FindIndex(Item);
    if (Index != -1)
        m_Lists[Which].RemoveAt(Index);
}
