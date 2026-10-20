// Game/Unsorted_10BF0D70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10BA9F50.h"
#include "Game/Class_10BC4B80.h"
#include "Game/Class_10BC4BF0.h"
#include "Game/Class_10963CE0.h"
#include "Game/Class_10BF0EA0.h"
#include "Game/Struct_10BA91E0.h"
#include "Game/Struct_10BA9F50.h"

// The header's FUN_10ba9ef0 returns Struct_10BA9EF0 (ints), the symbol's returns Struct_10BA91E0 (floats).
class Class_10E5CBD8
{
public:
    void FUN_10baa240(FVector* Out);
    Struct_10BA91E0 FUN_10ba9ef0();
};

class Class_10BF0EA0_Unknown04
{
public:
    char Unknown00[8];
    Class_10E5CBD8* Unknown08;
};

// The object GetTargetLinkType() returns; its slot 48 is the one called here.
class Class_10BF0EA0_Result
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
    virtual int Virtual48();
};

// FUNCTION: 0x10BF0EA0 ?FUN_10bf0ea0@Class_10BF0EA0@@QAE_NPAVFVector@@HH@Z
bool Class_10BF0EA0::FUN_10bf0ea0(FVector* Out, int Param2, int Param3)
{
    Class_10963CE0 Matrix;
    FVector Tmp1;
    FVector Tmp0;
    // A rotation: the struct's three ints are pitch, yaw and roll, so it is used as an FRotator.
    Struct_10BA9F50 Rot;
    this->Unknown04->Unknown08->FUN_10baa240(&Tmp0);
    // A vector: the struct's three floats are x, y and z, so it is used as an FVector.
    Struct_10BA91E0 Base = this->Unknown04->Unknown08->FUN_10ba9ef0();
    Class_10BF0EA0_Result* Obj = (Class_10BF0EA0_Result*)((Class_10BC4BF0*)this)->GetTargetLinkType();
    FVector V;
    if (!((Class_10BC4B80*)this)->FindPosition(&V, Param2, Obj->Virtual48()))
    {
        *Out = *(FVector*)&Base;
        return false;
    }
    float Scale = (float)Param3;
    V.X *= Scale;
    V.Y *= Scale;
    V.Z *= Scale;
    ((Class_10BA9F50*)this->Unknown04->Unknown08)->CopyPosition(&Rot);
    Matrix.FUN_10963ce0(*(FRotator*)&Rot);
    V = *Matrix.FUN_1096d8a0(&Tmp1, &V);
    *Out = (*(FVector*)&Base) + V;
    return true;
}
