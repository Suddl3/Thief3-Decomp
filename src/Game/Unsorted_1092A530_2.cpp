// Game/Unsorted_1092A530_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

class Class_1092AC20_Unknown30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_1090B040
{
public:
    cString FUN_1090b040(int A);

    cString Unknown00;
    char Pad04[0x14];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    Class_1092AC20_Unknown30* Unknown30;
    char Pad34[0x8];
    unsigned char Unknown3C;
};

void FUN_10928bd0(Class_1090B040* Obj, int A);

void* FUN_1092cac0(const char* A, int B, int C, unsigned char D, int E, int F);

// FUNCTION: 0x1092AC20 ?FUN_1092ac20@@YAXPAVClass_1090B040@@@Z
void FUN_1092ac20(Class_1090B040* Obj)
{
    Obj->Unknown20 = 0;
    Obj->Unknown18 = 0;
    Obj->Unknown1C = 0;
    FUN_10928bd0(Obj, 1);
    if (Obj->Unknown30)
    {
        Obj->Unknown30->Virtual2();
        Obj->Unknown30 = 0;
    }
    int Length = Obj->Unknown00.Unknown00 == 0 ? 0 : ((int*)Obj->Unknown00.Unknown00)[-1];
    if (Obj->Unknown00.Unknown00[Length - 3] == '_' && Obj->Unknown00.Unknown00[Length - 2] == 'r' && Obj->Unknown00.Unknown00[Length - 1] == 't')
    {
        Obj->Unknown00 = Obj->FUN_1090b040(Length - 3);
    }
    FUN_1092cac0(*Obj->Unknown00, Obj->Unknown24, Obj->Unknown28, Obj->Unknown3C, Obj->Unknown2C, (int)Obj);
}
