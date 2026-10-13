// Game/cConCameraController_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Struct_10AA3520.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);
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
    virtual int Virtual20();

    char Unknown04[0x08];
    int ArVer;
    int Unknown10;
    int ArIsLoading;
    int Unknown18;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

class Class_10A37780;

class cConCameraController
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
    virtual void Serialize(FArchive& Ar);

    Class_10A37780* Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    char Unknown14;
    int Unknown18;
    int Unknown1C;
    char Unknown20[0xC];
    char Unknown2C[0xC];
    char Unknown38[0xC];
    char Unknown44[0xC];
    char Unknown50;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10AAD100 ?Serialize@cConCameraController@@UAEXAAVFArchive@@@Z
void cConCameraController::Serialize(FArchive& Ar)
{
    int Flag = 0;
    if (Ar.Unknown18)
        Flag = Unknown04 != 0;
    if (Ar.Virtual20() && Ar.Unknown10 >= 1)
        Ar.Serialize(&Flag, 4);
    if (Ar.ArIsLoading)
    {
        if (Flag)
            Unknown04 = DAT_10f35dec->Unknown10;
        else
            Unknown04 = 0;
    }
    int Value = Unknown08;
    Ar.Serialize(&Value, 4);
    Unknown08 = Value;
    int Value2 = Unknown0C;
    Ar.Serialize(&Value2, 4);
    Unknown0C = Value2;
    int Value3 = Unknown10;
    Ar.Serialize(&Value3, 4);
    Unknown10 = Value3;
    Ar.Serialize(&Unknown14, 1);
    Ar.Serialize(&Unknown18, 4);
    Ar.Serialize(&Unknown1C, 4);
    FUN_10b052a0(Ar, &Unknown20);
    FUN_10b052a0(Ar, &Unknown2C);
    FUN_10b052a0(Ar, &Unknown38);
    FUN_10b052a0(Ar, &Unknown44);
    Ar.Virtual6(&Unknown50);
}
