// Game/Unsorted_10B37640_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B21580.h"
#include "Game/Class_10993E20.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10B21820_Object.h"

extern const char* DAT_10ff3824;

extern const char* DAT_10ff3828;

extern const char* DAT_10ff382c;

extern const char DAT_10e47660[];

extern Struct_10AA3520* DAT_10f35dec;

class Class_10992030;

class Class_10B378A0;

class Class_10B378A0_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
};

class Class_10B21820
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
    virtual void Virtual77(int A, FName B, float C, int D, int E, int F, float G);

    Struct_10B21820_Object* FUN_10991e10();

    char Pad04[0xac];
    Class_10B378A0_Unknown0B0* Unknown0B0;
};

class Object_10B4CA50_A
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B21580* A, Class_10B21820* B, FString* C, FString* D, const FString& E, int F, int G);
};

class Class_10B378A0
{
public:
    void FUN_10b378a0();

    char Unknown00[4];
    Class_10B21580* Unknown04;
};

class Class_10CAFD00;

struct Struct_10B7C170;

struct Struct_10D9E5E0_Param;

class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    int FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();
    void FUN_10d9afc0(Class_10B378A0_Unknown0B0* A);

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

class Class_109B2910
{
public:
    void FUN_109b2910(int A);
};

Class_10D9B090* FUN_10d9dcb0();

bool FUN_10a37340(Class_10992030* A);

// FUNCTION: 0x10B378A0 ?FUN_10b378a0@Class_10B378A0@@QAEXXZ
void Class_10B378A0::FUN_10b378a0()
{
    Class_10B21820* Obj = (Class_10B21820*)Unknown04->FUN_10b21580();
    Obj->Unknown0B0->Virtual6();
    Class_10B378A0_Unknown0B0* Field = Obj->Unknown0B0;
    FUN_10d9dcb0()->FUN_10d9afc0(Field);
    FUN_10a37340((Class_10992030*)Obj);
    Struct_10B21820_Object* Next = Obj->FUN_10991e10();
    ((Class_109B2910*)Next)->FUN_109b2910(1);
    Obj->Virtual77(0, DAT_10ff3824, 1.0f, 0, 0, 0, 1.0f);
    ((Class_10993E20*)Obj)->FUN_10993e20(0x3c23d70a);
    FString First(DAT_10ff382c);
    FString Second(DAT_10ff3828);
    DAT_10f35dec->Unknown64->Virtual4(Unknown04, Obj, &Second, &First, FString(DAT_10e47660), 0, 0);
}
