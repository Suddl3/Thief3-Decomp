// Game/Unsorted_109E5340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct Struct_109E5700
{
    Struct_109E5700* Unknown00;
    Struct_109E5700* Unknown04;
};

class Class_109E5700
{
public:
    void FUN_109e5700();

    char Unknown00[0x18];
    Struct_109E5700* Unknown18;
    int Unknown1C;
};

class Class_10A4B960
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

void FUN_10a4b960(Class_10A4B960** Out, int A);

class Class_109E5620
{
public:
    void FUN_109e5620(int A, bool B);

    char Unknown00[0x208];
    int Unknown208;
};

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

class Class_109E53B0
{
public:
    int FUN_109e53b0(int A);

    char Unknown00[0x98];
    Class_109E53B0_Unknown98* Unknown98;
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

class Class_109E55C0
{
public:
    void FUN_109e55c0(Class_109E55C0_Param* Param);
};

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

// FUNCTION: 0x109E55C0 ?FUN_109e55c0@Class_109E55C0@@QAEXPAVClass_109E55C0_Param@@@Z
void Class_109E55C0::FUN_109e55c0(Class_109E55C0_Param* Param)
{
    Param->Virtual57();
    if (Param->Virtual54())
    {
        Struct_109E55C0* List = Param->Virtual43();
        for (int i = 0; i < List->Count; i++)
        {
            Class_109E55C0_Param* Child = List->Data[i];
            if (Child)
                FUN_109e55c0(Child);
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

// FUNCTION: 0x109E5700 ?FUN_109e5700@Class_109E5700@@QAEXXZ
void Class_109E5700::FUN_109e5700()
{
    Struct_109E5700* Node = Unknown18->Unknown00;
    Unknown18->Unknown00 = Unknown18;
    Unknown18->Unknown04 = Unknown18;
    Unknown1C = 0;
    while (Node != Unknown18)
    {
        Struct_109E5700* Next = Node->Unknown00;
        delete Node;
        Node = Next;
    }
}
