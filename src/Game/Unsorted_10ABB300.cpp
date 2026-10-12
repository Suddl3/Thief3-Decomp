// Game/Unsorted_10ABB300.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10951900.h"
#include "Game/Class_10ABB300.h"
#include "Game/Class_10ABB480.h"
#include "Game/Struct_10ABB300.h"
#include "Game/Class_1092F270.h"

struct Struct_10ABB4B0
{
    char Unknown00[0x14];
};

class cHighlightMgr
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4(int A);
    virtual void Virtual5();
    virtual Struct_10ABB4B0* FindEntry(int A);

    char Unknown04[0x18];
    Struct_10ABB4B0* m_Entries;
};

struct Struct_10ABB300_Owner
{
    char Unknown00[0xB4];
    Class_1092F270* UnknownB4;
};

struct Struct_10ABB300_Slot
{
    char Unknown00[4];
    int Unknown04;
};

class Class_10ABB480_Element
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// FUNCTION: 0x10ABB300 ?FUN_10abb300@Class_10ABB300@@QAEXPAUStruct_10ABB300@@@Z
void Class_10ABB300::FUN_10abb300(Struct_10ABB300* P)
{
    if (P->Unknown00)
    {
        Class_1092F270* Inner = P->Unknown00->UnknownB4;
        P->Unknown04 = false;
        Class_10951900* Obj;
        if (Inner->UnknownB0)
        {
            P->Unknown04 = true;
            Obj = Inner->FUN_1092f270(0);
        }
        else
            Obj = Inner->FUN_1092f270(1);
        Obj->Acquire(&Unknown10[Unknown04 % Unknown08]->Unknown04, 2);
    }
}

// FUNCTION: 0x10ABB480 ?FUN_10abb480@Class_10ABB480@@QAEXXZ
void Class_10ABB480::FUN_10abb480()
{
    for (int i = 0; i < Unknown04; i++)
        Unknown0C[i]->Virtual1();
}

// FUNCTION: 0x10ABB4B0 ?FindEntry@cHighlightMgr@@UAEPAUStruct_10ABB4B0@@H@Z
Struct_10ABB4B0* cHighlightMgr::FindEntry(int A)
{
    int Index = Virtual4(A);
    if (Index == -1)
        return 0;
    return m_Entries + Index;
}
