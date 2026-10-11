// Game/Class_10E85DE0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B6BBD0_190.h"
#include "Game/Class_10B6BBD0_198.h"

class Class_1098E330;

bool FUN_10abe130(Class_1098E330* A);

class Class_10B6BBD0_150
{
public:
    char Unknown00[4];
    Class_1098E330* Unknown04;
    char Unknown08[4];
    Class_1098E330* Unknown0C;
};

class Class_10F3A3D8
{
public:
    char Unknown000[0x150];
    Class_10B6BBD0_150* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E85DE0
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
    virtual void FUN_10b6bbd0(int A);
    void FUN_10b77ee0(int A);

    char Unknown04[0x18C];
    Class_10B6BBD0_190* Unknown190;
    char Unknown194[4];
    Class_10B6BBD0_198* Unknown198;
    int Unknown19C;
};

// FUNCTION: 0x10B6BBD0 ?FUN_10b6bbd0@Class_10E85DE0@@UAEXH@Z
void Class_10E85DE0::FUN_10b6bbd0(int A)
{
    Class_1098E330* Obj;
    bool Flag;
    switch (Unknown19C)
    {
    case 0:
        Obj = DAT_10f3a3d8->Unknown150->Unknown04;
        break;
    case 1:
        Obj = DAT_10f3a3d8->Unknown150->Unknown0C;
        break;
    default:
        Obj = 0;
        break;
    }
    if (Obj)
        Flag = !FUN_10abe130(Obj);
    else
        Flag = true;
    Unknown190->Virtual47(Flag);
    FUN_10b77ee0(A);
    if (Unknown190)
        Unknown190->Virtual56(A);
    if (Unknown198)
        Unknown198->Virtual56(0);
}
