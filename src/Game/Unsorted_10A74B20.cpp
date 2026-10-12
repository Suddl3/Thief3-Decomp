// Game/Unsorted_10A74B20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10BB8300.h"
#include "Game/cIntArray.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10E6BBD0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

class Class_10A73EF0_Object
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
    virtual void Virtual45(void* Item, int B, int C);
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void* Virtual51();

    char Unknown04[0x30];
    int Unknown34;
    int Unknown38;
};

Class_10A73EF0_Table* FUN_10af3470();

class Class_10AAF570;

// Class_Field04 from include/Game/Class_Field04.h, with virtual slots up to 70.
class Class_Field04 : public Class_10BB8300
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
    virtual void Virtual70(FArray* Out);

    void FUN_10b46f90();
    void FUN_10b46fb0();
    void FUN_10bb83e0();
    void FUN_10b47310(int A);
    void Reset();
    int FUN_1098e290(int Id, FString* Out);
    void FUN_1098e290();

    char Pad01[0xb];
    char Pad293[0x1];
    Class_10AAF570* Unknown0C;
    int Unknown10;
    int Unknown14;
    float Unknown18;
    char Unknown1C[0x1C];
    int Unknown38;
    int Unknown3C;
    float Unknown40;
    int Unknown44;
    unsigned char Unknown48;
    char Unknown49[3];
    cIntArray Unknown4C;
    char Pad58[0x6c];
    FString UnknownC4;
    FString UnknownD0;
    FString UnknownDC;
    FString UnknownE8;
    char PadF4[0x1e0];
    unsigned char Unknown2D4;
    char Pad2D5[0x3];
};

void FUN_10a4b790(cString* Text, FArray* Items);

// FUNCTION: 0x10A74B20 ?HasObjectString@@YG_NPAHH@Z
bool __stdcall HasObjectString(int* Id, int Handle)
{
    Class_10A73EF0_Object* Obj = FUN_10af3470()->FUN_10af33e0(Handle);
    if (!Obj)
        return false;
    if (*Id)
    {
        FString Name;
        Obj->Virtual45(&Name, *Id, 0);
        return Name.Len() != 0;
    }
    return false;
}

// FUNCTION: 0x10A74EC0 ?FUN_10a74ec0@Class_10E6BBD0@@QAEXH@Z
void Class_10E6BBD0::FUN_10a74ec0(int A)
{
    FString Name;
    ((Class_Field04*)A)->FUN_1098e290(0x402a4, &Name);
    if (Name.Len() != 0)
    {
        FArray Tmp;
        ((Class_Field04*)A)->Virtual70(&Tmp);
        FArray Items = Tmp;
        cString Text(((Class_10AF7F80*)&Name)->FUN_10af7f80());
        FUN_10a4b790(&Text, &Items);
    }
}
