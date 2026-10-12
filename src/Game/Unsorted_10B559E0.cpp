// Game/Unsorted_10B559E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10AA3520.h"
#include "Game/Static_10B3AC60.h"
#include "Game/Class_10E68F8C.h"
#include "Game/cCheatHandler.h"
#include "Game/Object_10B55450.h"
#include "Game/Struct_10DD7DC0Arg.h"

extern void* DAT_10e81c20[];

extern int DAT_10f05674;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E81C20
{
public:
    Class_10E81C20()
    {
        Unknown08 = 0;
        Unknown04 = 1.0f;
        VTable = DAT_10e81c20;
    }

    void FUN_10dd7dc0(const Struct_10DD7DC0Arg& A, const Struct_10DD7DC0Arg& B, const Struct_10DD7DC0Arg& C, float D, int E, float F, float G, float H);

    void** VTable;
    float Unknown04;
    int Unknown08;
    char Unknown0C[0x68];
};

class Object_10B55EC0 : public Class_10E81C20
{
public:
    Class_10E68F8C Unknown74;
};

class Class_10B55EC0_Param0
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
    virtual void Virtual28(int A);
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
    virtual void Virtual48();
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
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79(Class_10E81C20* A);
};

extern Struct_10AA3520* DAT_10f35dec;

int FUN_10af42f0(int A, const char* B);

int FUN_10af3710(const char* Text);

Static_10B3AC60* FUN_10b3ac60();

// A three-float vector: the zero vector and the copied position.
struct Struct_10B559E0_Vector
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// The block Virtual5 gets: a converted number, a zero vector, a position, and two flags.
struct Struct_10B559E0
{
    float Unknown00;
    Struct_10B559E0_Vector Unknown04;
    Struct_10B559E0_Vector Unknown10;
    bool Unknown1C;
    bool Unknown1D;
    int Unknown20;
};

// The object FUN_10b3ac90 returns (a void* in the header): a position at +0x2C.
struct Class_10B559E0_Result
{
    char Pad00[0x2C];
    Struct_10B559E0_Vector Unknown2C;
};

class Class_10B37FE0_Unknown0B4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A, int B, Struct_10B559E0* C, int D);
};

// FUNCTION: 0x10B559E0 ?HandleCheatCommand@cCheatHandler@@UAEHPADH@Z
int cCheatHandler::HandleCheatCommand(char* Command, int Unknown)
{
    if (FUN_10af42f0((int)&Command, "HURTME"))
    {
        Class_10B559E0_Result* Player = (Class_10B559E0_Result*)FUN_10b3ac60()->Class_10B3AC90::FUN_10b3ac90();
        Struct_10B559E0 Arg;
        Arg.Unknown1C = true;
        Arg.Unknown00 = (float)FUN_10af3710(Command);
        Arg.Unknown1D = false;
        Arg.Unknown20 = -1;
        Struct_10B559E0_Vector Zero = { 0.0f, 0.0f, 0.0f };
        Arg.Unknown04 = Zero;
        Arg.Unknown10 = Player->Unknown2C;
        DAT_10f35dec->Unknown0B4->Virtual5(Player, 0, &Arg, 0);
        return 1;
    }
    if (FUN_10af42f0((int)&Command, "HEALME"))
    {
        void* Player = FUN_10b3ac60()->Class_10B3AC90::FUN_10b3ac90();
        DAT_10f35dec->UnknownB0->Virtual6(Player, (float)FUN_10af3710(Command), 0);
        return 1;
    }
    return 0;
}

// FUNCTION: 0x10B55EC0 ?FUN_10b55ec0@@YGXPAVClass_10B55EC0_Param0@@H@Z
void __stdcall FUN_10b55ec0(Class_10B55EC0_Param0* Target, int Value)
{
    if (Target)
    {
        Target->Virtual79(0);
        Target->Virtual25();
        Object_10B55EC0* Obj = new(0, 0, 0, 0, 0) Object_10B55EC0;
        Obj->FUN_10dd7dc0(Struct_10DD7DC0Arg(0.0f, 0.0f, 0.0f), Struct_10DD7DC0Arg(1.0f, 1.0f, 1.0f), Struct_10DD7DC0Arg(2.0f, 2.0f, 2.0f), 0.2f, DAT_10f05674, 0.3f, 0.55f, 0.05f);
        Obj->Unknown08 = Value;
        Target->Virtual28(1);
        Target->Virtual79(Obj);
    }
}
