// Game/Unsorted_1093EDB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1093EFB0.h"
#include "Game/Class_10940180.h"
#include "Game/Class_109418E0.h"
#include "Game/Class_10941C40.h"
#include "Game/Class_10951730.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1093EDB0.h"
#include "Game/Struct_10940180.h"

class Class_10E4A668
{
public:
    virtual void Virtual0();
    virtual void FUN_10942030(int p1);

    char Unknown04[0xAC];
    Class_10951730* UnknownB0;
};

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_1093EDB0_Element
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x1093EDB0 ?FUN_1093edb0@Class_1093EDB0@@QAE_NXZ
bool Class_1093EDB0::FUN_1093edb0()
{
    int Count = Unknown00;
    for (int i = 0; i < Count; i++)
    {
        if (Unknown08[i].Unknown04)
        {
            if (Unknown08[i].Unknown08 == 0)
                GDirect3DDevice8->Virtual78(Unknown08[i].Unknown04);
            else
                GDirect3DDevice8->Virtual90(Unknown08[i].Unknown04);
            Unknown08[i].Unknown04 = 0;
        }
    }
    return true;
}

// FUNCTION: 0x1093EE10 ?FUN_1093ee10@@YAXPAVClass_109081E0@@PBDZZ
void FUN_1093ee10(Class_109081E0* Out, const char* Format, ...)
{
    char Buffer[0x1000];
    if (Format)
    {
        va_list Args;
        va_start(Args, Format);
        _vsnprintf(Buffer, 0x1000, Format, Args);
        int Length = strlen(Buffer);
        if (Length)
        {
            Out->FUN_10907870(Length, 0);
            strcpy(Out->Unknown00, Buffer);
        }
    }
}

// FUNCTION: 0x1093EFB0 ?FUN_1093efb0@Class_1093EFB0@@QAEXXZ
void Class_1093EFB0::FUN_1093efb0()
{
    FUN_1093ee90(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10940180 ?FUN_10940180@Class_10940180@@QAEXPAUStruct_10940180@@@Z
void Class_10940180::FUN_10940180(Struct_10940180* P)
{
    switch (P->Unknown64)
    {
    case 4:
        FUN_1093fed0(P);
        break;
    case 5:
        FUN_1093ff60(P);
        break;
    }
}

// FUNCTION: 0x10941C40 ?FUN_10941c40@Class_10941C40@@QAEXXZ
void Class_10941C40::FUN_10941c40()
{
    if (Unknown1C == 0)
        FUN_10941b10(0);
    int Value = Unknown10;
    Class_109418E0* Item = Unknown1C;
    Item->Unknown06 = 0;
    Item->Unknown38 = Value;
    Item->FUN_109418e0();
}

// FUNCTION: 0x10942030 ?FUN_10942030@Class_10E4A668@@UAEXH@Z
void Class_10E4A668::FUN_10942030(int p1)
{
    if (UnknownB0)
        UnknownB0->FUN_10951730(p1);
}
