// Game/Class_10E95780_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4AB88.h"
#include "Game/Class_10E95780_Unknown04.h"

class Object_10A84D10;

struct Struct_10A84D10;

struct Struct_10A85890;

class Class_10E6C390
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
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
    virtual int Virtual14();
    virtual int Virtual15(int A);
    virtual void* Virtual16();

    void FUN_10a84e50();
    void Reset();
    void Destroy();
    void FUN_10a85110(Struct_10A85890* Ar);
    void FUN_10a852e0(Struct_10A85890* Ar);
    void FUN_10a85890(Struct_10A85890* Ar);
    void FUN_10a84e90();
    void FUN_10a84e60();
    void PushFloats();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    union
    {
        unsigned char Field14;
        bool Unknown14;
    };
    bool Unknown15;
    char Pad16[0x6];
    Object_10A84D10* Unknown1C;
    Object_10A84D10* Unknown20;
    Struct_10A84D10* Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    int Unknown30;
    char Pad34[0x8];
    float Unknown3C;
    float Unknown40;
    float Unknown44;
    float Unknown48;
};

class Class_10E95780_Unknown04;

class Class_10E95780
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
    virtual bool FUN_10be1b30(int A);
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void DisableHeadAim();
    virtual void Virtual22();
    virtual void FUN_10be1b00(int A, int B, int C, int D, int E);
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void FUN_10be2de0(unsigned char p1);
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void FUN_10be2780(int A);
    virtual void FUN_10be1ad0();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void FUN_10be18e0(int A);

    ~Class_10E95780();

    Class_10E95780* Init(int A, int B);
    void FUN_10be1a70();
    bool FUN_10be2380(void* Object, int A);
    void FUN_10be2a70();

    Class_10E95780_Unknown04* Unknown04;
    char Pad08[0x38];
    int Unknown40;
    int Unknown44;
    bool Unknown48;
    bool Unknown49;
    char Unknown4A[2];
    int Unknown4C;
    char Pad50[0x3c];
};

Class_10E6C390* FUN_10a86080();

bool HasObject(int Key);

void FUN_10a85900(int Key);

// FUNCTION: 0x10BE1A70 ?FUN_10be1a70@Class_10E95780@@QAEXXZ
void Class_10E95780::FUN_10be1a70()
{
    void* Obj = ((Class_10E4AB88*)Unknown04->Unknown08)->FUN_10baa3a0();
    if (Obj)
    {
        if (FUN_10a86080()->Virtual16() == Obj && FUN_10a86080()->Virtual3())
        {
            FUN_10a86080()->Virtual8();
            return;
        }
        if (HasObject((int)Obj))
            FUN_10a85900((int)Obj);
    }
}
