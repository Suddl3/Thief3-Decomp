// Game/Unsorted_10BFBED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10C1AAA0.h"
#include "Game/Class_10C1AAC0.h"

class Class_10C08940
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int A, int B);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual int Virtual8(int A);
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
    virtual int Virtual24();

    int FUN_10c08940();

    char Pad04[0x4];
    int Unknown08;
    char Unknown0C[4];
    int Unknown10;
    char Unknown14[0x8];
    int Unknown1C;
    bool Unknown20;
    char Pad21[0xb];
    FVector Unknown2C;
};

class Class_10BFBED0_Unknown10
{
public:
    virtual int Virtual0();
};

class Class_10BFBED0
{
public:
    void FUN_10bfbed0(Class_10978090* A);

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Class_10978090** Unknown10;
    char Unknown14[0x4C];
    bool Unknown60;
};

// FUNCTION: 0x10BFBED0 ?FUN_10bfbed0@Class_10BFBED0@@QAEXPAVClass_10978090@@@Z
void Class_10BFBED0::FUN_10bfbed0(Class_10978090* A)
{
    Class_10C08940* Result = A->FUN_10978090();
    if (Result && !(Result->Unknown1C & 0x800000))
    {
        bool Flag = true;
        for (int i = 0; i < Unknown08; i++)
        {
            if (Unknown10[i]->FUN_10978090() == Result)
                ((Class_10C1AAA0*)Unknown10[i])->FUN_10c1aaa0(true);
            else if (((Class_10BFBED0_Unknown10*)Unknown10[i])->Virtual0() == 6)
            {
                if (Flag && ((Class_10C1AAC0*)Unknown10[i])->FUN_10c1aac0())
                    Flag = true;
                else
                    Flag = false;
            }
        }
        Unknown60 = !Flag;
    }
}
