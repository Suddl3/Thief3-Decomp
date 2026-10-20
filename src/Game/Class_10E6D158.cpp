// Game/Class_10E6D158.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A9C200_Arg2.h"
#include "Game/Class_10A9C200_Arg3.h"
#include "Game/Class_10A9C200_Unknown00.h"
#include "Game/Class_10C56E40.h"
#include "Game/Class_10C56E40_Field00.h"
#include "Game/Class_10E6D158.h"

class Class_10A9C200_Unknown00;

class Class_10A036A0;

class Class_10C56E40_Field00;

class Class_10C56E40;

class Class_10C5A160_Y;

class Class_10A9C200_Arg2;

class Class_10A9C200_Arg3;

class SoundSimulator;

struct Struct_10C549A0;

struct Struct_10C549A0_Entry;

class Class_10E6D158;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A036A0
{
public:
    ~Class_10A036A0()
    {
        if (Unknown00 && Unknown00->Virtual7(this))
            Unknown00->Virtual1(this);
    }

    Class_10A9C200_Unknown00* Unknown00;
    char Unknown04[0xC];
};

class SoundSimulator
{
public:
    virtual void Virtual0(Class_10C56E40 A);
    virtual void Virtual1();
    virtual void Virtual2(Class_10A9C200_Arg3** A, Class_10C56E40 B, Class_10A036A0* C, int D, int E);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10c549a0(Struct_10C549A0* A);
    virtual void FUN_10c547b0(int p1);
    virtual void FUN_10c547d0();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10c547f0(int p1);
    virtual void FUN_10c547e0();

    char Unknown04[0x48];
    int m_EntryCount;
    char Unknown50[4];
    Struct_10C549A0_Entry* m_Entries;
};

Class_10A036A0 FUN_10a9c050(int A, Class_10A9C200_Unknown00* B);

SoundSimulator* GetSoundSimulator();

// FUNCTION: 0x10A9BF20 ?FUN_10a9bf20@Class_10E6D158@@UAEHPAXPAVClass_10A9C200_Arg2@@PAVClass_10A9C200_Arg3@@@Z
int Class_10E6D158::FUN_10a9bf20(void* Arg1, Class_10A9C200_Arg2* Arg2, Class_10A9C200_Arg3* Arg3)
{
    Class_10A036A0 Holder = FUN_10a9c050(Arg3->Virtual4(0), Arg2->Virtual8());
    if (Holder.Unknown00 && Holder.Unknown00->Virtual7(&Holder))
    {
        GetSoundSimulator()->Virtual2(&Arg3, new(0, 0, 0, 0, 0) Class_10C56E40_Field00(Arg2->Virtual8(), 1), &Holder, 0, 0);
        if (Arg3)
            Arg3->Virtual2();
    }
    return 1;
}
