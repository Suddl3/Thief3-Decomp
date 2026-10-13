// Game/Class_10E6D164.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A9C200_Arg2.h"
#include "Game/Class_10A9C200_Arg3.h"
#include "Game/Class_10A9C200_Unknown00.h"

class Class_10A036A0;

// Class_10A036A0 as include/Game/Class_10A036A0.h declares it, with the destructor added
// (the funclet's destructor, FUN_109ea420) and the first 4 bytes typed as the pointer it holds.
class Class_10A036A0
{
public:
    ~Class_10A036A0()
    {
        if (Unknown00 && Unknown00->Virtual7(this))
            Unknown00->Virtual1(this);
    }
    Class_10A036A0& FUN_10a036a0(const Class_10A036A0& Other);

    Class_10A9C200_Unknown00* Unknown00;
    char Unknown04[0xC];
};

// SoundSimulator as include/Game/SoundSimulator.h declares it, with Virtual3's real arguments
class Class_10C56E40;

struct Struct_10C549A0;

struct Struct_10C549A0_Entry;

class SoundSimulator
{
public:
    virtual void Virtual0(Class_10C56E40 A);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(Class_10A9C200_Arg2** A, Class_10A036A0* B, int C, int D);
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

SoundSimulator* GetSoundSimulator();

Class_10A036A0 FUN_10a9c050(int A, Class_10A9C200_Unknown00* B);

class Class_10E6D164
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a9c200(void* Arg1, Class_10A9C200_Arg2* Arg2, Class_10A9C200_Arg3* Arg3);
    Class_10E6D164* Construct();

    union
    {
        void* Field00;
        void* Unknown00;
    };
};

// FUNCTION: 0x10A9C200 ?FUN_10a9c200@Class_10E6D164@@UAEHPAXPAVClass_10A9C200_Arg2@@PAVClass_10A9C200_Arg3@@@Z
int Class_10E6D164::FUN_10a9c200(void* Arg1, Class_10A9C200_Arg2* Arg2, Class_10A9C200_Arg3* Arg3)
{
    Class_10A036A0 Holder = FUN_10a9c050(Arg3->Virtual4(0), Arg2->Virtual8());
    if (Holder.Unknown00 && Holder.Unknown00->Virtual7(&Holder))
    {
        GetSoundSimulator()->Virtual3(&Arg2, &Holder, 0, 0);
        if (Arg2)
            Arg2->Virtual2();
    }
    return 1;
}
