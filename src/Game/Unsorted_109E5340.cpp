// Game/Unsorted_109E5340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109E53B0.h"
#include "Game/Class_109E5620.h"
#include "Game/Class_109E5700.h"
#include "Game/Class_10E5B7C8.h"
#include "Game/Class_109E5340.h"
#include "Game/Class_10A4B960.h"

struct Struct_109E5700
{
    Struct_109E5700* Unknown00;
    Struct_109E5700* Unknown04;
};

void FUN_10a4b960(Class_10A4B960** Out, int A);

extern const char DAT_10e47660[];

class Class_10E50848 : public FString
{
public:
    Class_10E50848() : FString(DAT_10e47660)
    {
        Unknown10 = true;
    }

    virtual void Virtual0();

    bool Unknown10;
};

class Class_109E53B0_Unknown30
{
public:
    virtual int Virtual0(int A, Class_10E50848* B);
};

class Class_109E53B0_Unknown98
{
public:
    char Unknown00[0x30];
    Class_109E53B0_Unknown30 Unknown30;
};

class Class_109E55C0_Param;

struct Struct_109E55C0;

class Class_109E55C0_Param
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
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual Struct_109E55C0* Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual bool Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
};

struct Struct_109E55C0
{
    int Count;
    char Unknown04[4];
    Class_109E55C0_Param** Data;
};

class Class_109E5340_Param;

struct Struct_109E5340;

class Class_109E5340_Param
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
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual Struct_109E5340* Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual bool Virtual54();
};

struct Struct_109E5340
{
    int Count;
    char Unknown04[4];
    Class_109E5340_Param** Data;
};

// FUNCTION: 0x109E5340 ?FUN_109e5340@Class_109E5340@@QAEXPAVClass_109E5340_Param@@H@Z
void Class_109E5340::FUN_109e5340(Class_109E5340_Param* Param, int Arg2)
{
    if (Param && Param->Virtual54())
    {
        Param->Virtual36();
        Struct_109E5340* List = Param->Virtual43();
        if (Param->Virtual54())
        {
            for (int i = 0; i < List->Count; i++)
                FUN_109e5340(List->Data[i], Arg2);
        }
    }
}

// FUNCTION: 0x109E53B0 ?FUN_109e53b0@Class_109E53B0@@QAEHH@Z
int Class_109E53B0::FUN_109e53b0(int A)
{
    if (Unknown98)
    {
        Class_10E50848 Callback;
        return Unknown98->Unknown30.Virtual0(A, &Callback);
    }
    return 0;
}

// FUNCTION: 0x109E55C0 ?VisitParam@Class_10E5B7C8@@QAEXPAVClass_109E55C0_Param@@@Z
void Class_10E5B7C8::VisitParam(Class_109E55C0_Param* Param)
{
    Param->Virtual57();
    if (Param->Virtual54())
    {
        Struct_109E55C0* List = Param->Virtual43();
        for (int i = 0; i < List->Count; i++)
        {
            Class_109E55C0_Param* Child = List->Data[i];
            if (Child)
                VisitParam(Child);
        }
    }
}

// FUNCTION: 0x109E5620 ?FUN_109e5620@Class_109E5620@@QAEXH_N@Z
void Class_109E5620::FUN_109e5620(int A, bool B)
{
    if (!Unknown208 || B)
    {
        Class_10A4B960* Obj;
        FUN_10a4b960(&Obj, A);
        if (Obj)
            Obj->Virtual2();
    }
}

// FUNCTION: 0x109E5700 ?Clear@Class_109E5700@@QAEXXZ
void Class_109E5700::Clear()
{
    Struct_109E5700* Node = m_Head->Unknown00;
    m_Head->Unknown00 = m_Head;
    m_Head->Unknown04 = m_Head;
    m_Count = 0;
    while (Node != m_Head)
    {
        Struct_109E5700* Next = Node->Unknown00;
        delete Node;
        Node = Next;
    }
}
