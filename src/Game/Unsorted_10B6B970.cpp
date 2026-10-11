// Game/Unsorted_10B6B970.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A56860.h"
#include "Game/Class_10B78320.h"
#include "Game/Class_10B6BD50.h"
#include "Game/Class_10B6BBD0_190.h"
#include "Game/Class_10B6BBD0_198.h"
#include "Game/Data_10B66060.h"

class Class_1098E330;

class Data_10B66060;

bool FUN_10abe130(Class_1098E330* A);

struct Struct_10B6B970_150
{
    char Unknown00[4];
    Class_1098E330* Unknown04;
    Data_10B66060* Unknown08;
    Class_1098E330* Unknown0C;
    Data_10B66060* Unknown10;
};

class Class_10F3A3D8
{
public:
    char Unknown000[0x150];
    Struct_10B6B970_150* Unknown150;
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
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual void Virtual105();
    virtual void Virtual106();
    virtual void Virtual107();
    virtual void Virtual108();
    virtual void Virtual109();
    virtual void Virtual110();
    virtual void Virtual111();
    virtual void Virtual112();
    virtual void Virtual113();
    virtual void Virtual114();
    virtual void Virtual115();
    virtual void Virtual116();
    virtual void Virtual117();
    virtual void Virtual118();
    virtual void Virtual119();
    virtual void Virtual120();
    virtual void FUN_10b6b970();

    void FUN_10b77ee0(int A);

    char Unknown04[0x18C];
    Class_10B6BBD0_190* Unknown190;
    char Unknown194[4];
    Class_10B6BBD0_198* Unknown198;
    int Unknown19C;
};

// include/Game/Class_10B66980_Unknown158.h has only padding; this copy names the
// fields this function writes, with the same size (0x2C).
class Class_10B66980_Unknown158
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    unsigned int Unknown18Bits0To0 : 1;
    unsigned int Unknown18Bits1To1 : 1;
    unsigned int Unknown18Bits2To31 : 30;
    int Unknown1C;
    int Unknown20;
    char Unknown24;
    char Unknown25;
    char Unknown26;
    char Unknown27;
    int Unknown28;
};

// FUNCTION: 0x10B6B970 ?FUN_10b6b970@Class_10E85DE0@@UAEXXZ
void Class_10E85DE0::FUN_10b6b970()
{
    ((Class_10B78320*)this)->FUN_10b78320();
    if (Unknown190)
    {
        Data_10B66060* Value;
        switch (Unknown19C)
        {
        case 0:
            Value = DAT_10f3a3d8->Unknown150->Unknown08;
            break;
        case 1:
            Value = DAT_10f3a3d8->Unknown150->Unknown10;
            break;
        default:
            Value = 0;
            break;
        }
        Class_1098E330* Obj;
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
        bool Flag;
        if (Obj)
            Flag = !FUN_10abe130(Obj);
        else
            Flag = true;
        Unknown190->Virtual47(Flag);
        int Index = 1;
        if (Value)
            Index = Value->Unknown174;
        ((Class_10A56860*)Unknown190)->FUN_10a56480(Index);
    }
    if (Unknown198)
    {
        Unknown198->Virtual70(0);
        Unknown198->Virtual56(0);
    }
}

// FUNCTION: 0x10B6BA50 ?FUN_10b6ba50@Class_10B6BD50@@QAEXHPAVClass_10B66980_Unknown158@@H@Z
void Class_10B6BD50::FUN_10b6ba50(int A, Class_10B66980_Unknown158* B, int C)
{
    switch (A)
    {
    case 0:
        B->Unknown00 = C;
        return;
    case 1:
        B->Unknown04 = C;
        return;
    case 2:
        B->Unknown0C = C;
        return;
    case 3:
        B->Unknown14 = C;
        return;
    case 4:
        B->Unknown18Bits0To0 = C != 0;
        return;
    case 5:
        B->Unknown18Bits1To1 = C != 0;
        return;
    case 6:
        B->Unknown1C = C;
        return;
    case 7:
        B->Unknown20 = C;
        return;
    case 8:
        B->Unknown28 = C;
        return;
    case 9:
        B->Unknown24 = C;
        return;
    case 10:
        B->Unknown25 = C;
        return;
    case 11:
        B->Unknown26 = C;
        return;
    case 12:
        B->Unknown27 = C;
    }
}
