// Game/GarrettOnCamera_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10991FF0.h"
#include "Game/GarrettOnCamera.h"

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

struct Struct_10AC2630_Param
{
    char Unknown00[0x8];
    int Unknown08;
    char Unknown0C[0x4];
    int Unknown10;
    float Unknown14;
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
