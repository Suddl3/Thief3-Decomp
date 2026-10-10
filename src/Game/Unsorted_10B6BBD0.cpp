// Game/Unsorted_10B6BBD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B66060;

struct Data_10B66060;

struct Struct_10B6BC80;

class Class_10B154C0;

void* FUN_10b154c0();

class Class_10B154C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B66060* A);
};

class Class_10B66060
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
    virtual void Virtual56(int A);

    void FUN_10b66060(int A, Data_10B66060* B);
};

struct Struct_10B6BC80
{
    char Unknown00[8];
    Data_10B66060* Unknown08;
    char Unknown0C[4];
    Data_10B66060* Unknown10;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x150];
    Struct_10B6BC80* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10B6BC80
{
public:
    void FUN_10b6bc80();

    char Unknown00[0x198];
    Class_10B66060* Unknown198;
    int Unknown19C;
};

// FUNCTION: 0x10B6BC80 ?FUN_10b6bc80@Class_10B6BC80@@QAEXXZ
void Class_10B6BC80::FUN_10b6bc80()
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
    Unknown198->FUN_10b66060((int)this, Value);
    Unknown198->Virtual56(2);
    ((Class_10B154C0*)FUN_10b154c0())->Virtual4(Unknown198);
}
