// Game/Class_10E9AC80_24.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BAA580.h"

class Class_10C30170_Unknown3A4;

class Class_109BBBA0
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
    virtual void Virtual43();
    virtual void Virtual44(int A, float B, int C, int D, float E, int F, int G, int H);
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int* Virtual48(int* Out, int Id);
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60(int A);

    int FUN_109b59a0(int A);
    void FUN_109b6580(float A, int B, int C, FName D);

    char Pad04[0x3a0];
    Class_10C30170_Unknown3A4* Unknown3A4;
};

struct Struct_10C30170_Unknown444
{
    char Pad00[0x1c];
    int Unknown1C;
};

class Class_10C30170_Unknown3A4
{
public:
    char Pad000[0x444];
    Struct_10C30170_Unknown444 Unknown444;
};

class Class_10E9AC80
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
    virtual int Virtual16(int A, int B);
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
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int Virtual48(int A);
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void FUN_10c30170();

    char Pad04[0x4];
    Class_10BAA580* Unknown08;
    char Pad0C[0x108];
    bool Unknown114;
};

// FUNCTION: 0x10C30170 ?FUN_10c30170@Class_10E9AC80@@UAEXXZ
void Class_10E9AC80::FUN_10c30170()
{
    Class_109BBBA0* Obj = (Class_109BBBA0*)Unknown08->FUN_10baa580();
    if (Obj)
    {
        int Local;

        int Created = Virtual16(0x58, Virtual48(1));
        if (Created)
        {
            Obj->FUN_109b59a0(7);
            Obj->Virtual60(7);
            Unknown114 = false;
            Class_10C30170_Unknown3A4* Sub = Obj->Unknown3A4;
            Struct_10C30170_Unknown444* Field = &Sub->Unknown444;
            int* R = Obj->Virtual48(&Local, Created);
            if (Field->Unknown1C != *R)
                Obj->Virtual44(Created, 1.0f, 0, 0, -1.0f, -1, 0, 1);
            FName Name("M1 L clavicle");
            Obj->FUN_109b6580(1.0f, 0, 0, Name);
        }
    }
}
