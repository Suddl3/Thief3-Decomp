// Game/Unsorted_109295C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E49B48.h"
#include "Game/Struct_10929600.h"
#include "Game/Struct_10929D60.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10929710
{
public:
    void FUN_10929710();

    char Unknown00[0xC];
    char* Unknown0C;
};

typedef unsigned short WORD;

typedef unsigned long DWORD;

class Object_10929600
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

extern int DAT_10f31ad4;

extern Struct_10929600** DAT_10f31adc;

struct Struct_10928B50;

void FUN_10928b50(Struct_10928B50* Video);

extern int DAT_10f31ac8;

extern Struct_10928B50** DAT_10f31ad0;

// FUNCTION: 0x109295C0 ?FUN_109295c0@@YAXM@Z
void FUN_109295c0(float Value)
{
    if (Value != 0.0f)
    {
        for (int i = 0; i < DAT_10f31ac8; i++)
            FUN_10928b50(DAT_10f31ad0[i]);
    }
}

// FUNCTION: 0x10929600 ?FUN_10929600@@YAXXZ
void FUN_10929600()
{
    for (int i = 0; i < DAT_10f31ad4; i++)
    {
        if (DAT_10f31adc[i]->Unknown30)
        {
            DAT_10f31adc[i]->Unknown30->Virtual2();
            DAT_10f31adc[i]->Unknown30 = 0;
        }
    }
}

// FUNCTION: 0x10929D60 ?FUN_10929d60@Class_10E49B48@@UAEXHHHPAUStruct_10929D60@@@Z
void Class_10E49B48::FUN_10929d60(int A, int B, int C, Struct_10929D60* Out)
{
    DWORD Packed;
    Virtual0(A, B, C, &Packed);
    const float Scale = 1.0f / 32767.0f;
    Out->Unknown00 = (WORD)(Packed >> 16) * Scale;
    Out->Unknown04 = (WORD)Packed * Scale;
    Out->Unknown08 = Scale;
}
