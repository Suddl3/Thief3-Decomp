// Game/Unsorted_10BED160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"
#include "Game/FArchive.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10BAA000.h"

extern void* DAT_10e975a0[];

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class State_Patrol : public Class_10E90D70
{
public:
    State_Patrol* Init(int A, int B);

    bool Unknown40;
    int Unknown44;
    bool Unknown48;
    bool Unknown49;
    FArray Unknown4C;
    FArray Unknown58;
    int Unknown64;
    bool m_HasStartTime;
    int m_StartTime;
    int Unknown70;
    int Unknown74;
    int Unknown78;
    int Unknown7C;
    bool Unknown80;
};

class cTacticMoveToPoint
{
public:
    virtual void Virtual0();

    void PopState();
};

class Class_10E97488 : public cTacticMoveToPoint
{
public:
    virtual void Virtual0();
    virtual void FUN_10bee9a0();

    void FUN_10bedca0();

    char Unknown04[0x54];
    int Unknown58;
    int Unknown5C;
};

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10E97370 : public Class_10E8BE68
{
public:
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
    virtual void FUN_10bed3e0(FArchive& Ar);

    char Unknown04[0x3C];
    unsigned char Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
};

class Class_10BED160
{
public:
    int Unknown00;
    char Unknown04[4];
    Struct_10BAA000** Unknown08;
};

float FUN_10c05a80(const Struct_10C05A80* A, const Struct_10C05A80* B);

class Class_10E97258 : public Class_10E8BE68
{
public:
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
    virtual void FUN_10bed370(FArchive& Ar);

    char Unknown04[0x3C];
    bool Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    unsigned char Unknown54;
};

// FUNCTION: 0x10BED160 ?FUN_10bed160@@YAPAUStruct_10BAA000@@PAVClass_10BED160@@PBUStruct_10C05A80@@@Z
Struct_10BAA000* FUN_10bed160(Class_10BED160* Array, const Struct_10C05A80* Target)
{
    float BestDist = 0.0f;
    Struct_10BAA000* Best = 0;
    for (int i = 0; i < Array->Unknown00; i++)
    {
        float Dist = FUN_10c05a80(&Array->Unknown08[i]->Unknown2C, Target);
        if (Best == 0 || Dist < BestDist)
        {
            BestDist = Dist;
            Best = Array->Unknown08[i];
        }
    }
    return Best;
}

// FUNCTION: 0x10BED370 ?FUN_10bed370@Class_10E97258@@UAEXAAVFArchive@@@Z
void Class_10E97258::FUN_10bed370(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown40, 1);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown44);
    Ar.Serialize(&Unknown48, 4);
    Ar.Serialize(&Unknown4C, 4);
    Ar.Serialize(&Unknown50, 4);
    Ar.Serialize(&Unknown54, 1);
}

// FUNCTION: 0x10BED3E0 ?FUN_10bed3e0@Class_10E97370@@UAEXAAVFArchive@@@Z
void Class_10E97370::FUN_10bed3e0(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown40, 1);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown44);
    Ar.Serialize(&Unknown48, 4);
    Ar.Serialize(&Unknown4C, 4);
    Ar.Serialize(&Unknown50, 4);
}

// FUNCTION: 0x10BED440 ?Init@State_Patrol@@QAEPAV1@HH@Z
State_Patrol* State_Patrol::Init(int A, int B)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown44 = 0;
    Unknown49 = false;
    Unknown4C.FArray::FArray();
    Unknown40 = true;
    Unknown00 = DAT_10e975a0;
    Unknown48 = true;
    Unknown58.FArray::FArray();
    Unknown64 = 0;
    m_HasStartTime = false;
    m_StartTime = 0;
    Unknown70 = 0;
    Unknown74 = 0;
    Unknown78 = 0;
    Unknown7C = 0;
    Unknown80 = false;
    return this;
}

// FUNCTION: 0x10BEE9A0 ?FUN_10bee9a0@Class_10E97488@@UAEXXZ
void Class_10E97488::FUN_10bee9a0()
{
    if (Unknown58 >= 1)
    {
        if (Unknown5C >= Unknown58)
            PopState();
        else
            FUN_10bedca0();
    }
}
