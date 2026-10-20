// Game/GarrettOnCamera_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"

class Class_10970890;

// Game/Class_1098E330.h with the two members this function reads: the float at
// 0x130 of the object and the bone id at 0x3AC.
class Class_1098E330 : public AActor
{
public:
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual bool Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual int Virtual105();

    int FUN_1098e330(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();

    char Pad04[0x20];
    int Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    char Pad30[0x44];
    float Unknown130;                    // 0x130 of the object
    char Pad78[0x4C];
    unsigned int m_Flags;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
    char Pad10C[0x1E4];
    int Unknown3AC;                      // 0x3AC of the object
};

// Game/Class_10991FF0.h with the virtual it calls added (slot 88).
class Class_10991FF0
{
public:
    virtual void Virtual0();   virtual void Virtual1();   virtual void Virtual2();
    virtual void Virtual3();   virtual void Virtual4();   virtual void Virtual5();
    virtual void Virtual6();   virtual void Virtual7();   virtual void Virtual8();
    virtual void Virtual9();   virtual void Virtual10();  virtual void Virtual11();
    virtual void Virtual12();  virtual void Virtual13();  virtual void Virtual14();
    virtual void Virtual15();  virtual void Virtual16();  virtual void Virtual17();
    virtual void Virtual18();  virtual void Virtual19();  virtual void Virtual20();
    virtual void Virtual21();  virtual void Virtual22();  virtual void Virtual23();
    virtual void Virtual24();  virtual void Virtual25();  virtual void Virtual26();
    virtual void Virtual27();  virtual void Virtual28();  virtual void Virtual29();
    virtual void Virtual30();  virtual void Virtual31();  virtual void Virtual32();
    virtual void Virtual33();  virtual void Virtual34();  virtual void Virtual35();
    virtual void Virtual36();  virtual void Virtual37();  virtual void Virtual38();
    virtual void Virtual39();  virtual void Virtual40();  virtual void Virtual41();
    virtual void Virtual42();  virtual void Virtual43();  virtual void Virtual44();
    virtual void Virtual45();  virtual void Virtual46();  virtual void Virtual47();
    virtual void Virtual48();  virtual void Virtual49();  virtual void Virtual50();
    virtual void Virtual51();  virtual void Virtual52();  virtual void Virtual53();
    virtual void Virtual54();  virtual void Virtual55();  virtual void Virtual56();
    virtual void Virtual57();  virtual void Virtual58();  virtual void Virtual59();
    virtual void Virtual60();  virtual void Virtual61();  virtual void Virtual62();
    virtual void Virtual63();  virtual void Virtual64();  virtual void Virtual65();
    virtual void Virtual66();  virtual void Virtual67();  virtual void Virtual68();
    virtual void Virtual69();  virtual void Virtual70();  virtual void Virtual71();
    virtual void Virtual72();  virtual void Virtual73();  virtual void Virtual74();
    virtual void Virtual75();  virtual void Virtual76();  virtual void Virtual77();
    virtual void Virtual78();  virtual void Virtual79();  virtual void Virtual80();
    virtual void Virtual81();  virtual void Virtual82();  virtual void Virtual83();
    virtual void Virtual84();  virtual void Virtual85();  virtual void Virtual86();
    virtual void Virtual87();
    virtual FVector* Virtual88(FRotator* Rotation);

    float FUN_10991ff0();

    char Unknown04[0x28];
    FVector Unknown2C;
};

struct Struct_10AC2630_Param
{
    char Unknown00[0x8];
    int Unknown08;
    char Unknown0C[0x4];
    int Unknown10;
    float Unknown14;
};

class GarrettOnCamera
{
public:
    virtual FVector FUN_10ac2630(int A, Struct_10AC2630_Param* B);
    virtual void Virtual1();
    virtual Class_10991FF0* Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();

    int Unknown04;
    Class_1098E330* Unknown08;
};

void __cdecl GetBoneLocationAndRotation(int ObjectId, int BoneId, FVector* Location, FRotator* Rotation);

// FUNCTION: 0x10AC2630 ?FUN_10ac2630@GarrettOnCamera@@UAE?AVFVector@@HPAUStruct_10AC2630_Param@@@Z
FVector GarrettOnCamera::FUN_10ac2630(int A, Struct_10AC2630_Param* B)
{
    FVector V(0.0f, 0.0f, 0.0f);
    if (B->Unknown08 == 1)
    {
        if (Unknown08->FUN_10b22000() && Unknown08->Unknown3AC >= 0)
        {
            FVector Vec(0.0f, 0.0f, 0.0f);
            FRotator Rot(0, 0, 0);
            GetBoneLocationAndRotation((int)Unknown08, Unknown08->Unknown3AC, &Vec, &Rot);
            V = Vec;
        }
        else
        {
            Class_10991FF0* Obj = Virtual2();
            V = Obj->Unknown2C;
            if (Unknown08->Virtual101())
                V.Z = V.Z - Unknown08->Unknown130 * 0.15f;
        }
    }
    else if (B->Unknown08 == 0)
    {
        Class_10991FF0* Obj = Virtual2();
        FRotator Rot;
        V = *Obj->Virtual88(&Rot);
    }
    if (B->Unknown10 == 7)
    {
        if (!Unknown08->Virtual101())
        {
            Class_10991FF0* Obj = Virtual2();
            V.Z = V.Z + Obj->FUN_10991ff0() * B->Unknown14;
        }
    }
    return V;
}
