// Game/Unsorted_10BBE6E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Finds the pawn of a controller's list that lies closest to a given actor.
#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_1098E330.h"
#include <math.h>

class Class_10BBE6E0_UnknownC0;

class Class_10C1A310_Result;

class Class_10B21560 : public UObject
{
public:
    FVector Location;
};

class Class_10BBE6E0_UnknownC0 : public UObject
{
public:
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual int Virtual34();
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
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual int Virtual85();

    FVector Location;
};

class Class_10C1A310_Result
{
public:
    char Unknown00[0xC0];
    Class_10BBE6E0_UnknownC0* UnknownC0;
    char UnknownC4[8];
    Class_10C1A310_Result* UnknownCC;
    char UnknownD0[0x1F8];
    Class_10C1A310_Result* Unknown2C8;
};

class Class_10974340
{
public:
    Class_10C1A310_Result* FUN_10974340();

    char Pad00[0x1];
};

class Class_10BBE5B0_Param
{
public:
    char Unknown00[0x2C];
    Class_10B21560** Unknown2C;
    int Unknown30;
};

Class_10B21560* __cdecl FUN_10bbe5b0(Class_10BBE5B0_Param* Param);

// FUNCTION: 0x10BBE6E0 ?FUN_10bbe6e0@@YAPAVClass_10BBE6E0_UnknownC0@@PAVClass_10BBE5B0_Param@@_N@Z
Class_10BBE6E0_UnknownC0* FUN_10bbe6e0(Class_10BBE5B0_Param* A, bool B)
{
    Class_10B21560* Target = FUN_10bbe5b0(A);
    if (!Target)
        return 0;

    float Best = 1e10f;
    Class_10BBE6E0_UnknownC0* Result = 0;

    Class_10C1A310_Result* Node = ((Class_10974340*)A)->FUN_10974340()->Unknown2C8;
    while (Node)
    {
        if (Node->UnknownC0)
        {
            if (!Node->UnknownC0->Virtual34())
            {
                if (Node->UnknownC0->IsA(APawn::StaticClass()))
                {
                    if (!B || Node->UnknownC0->Virtual85() != 1)
                    {
                        int Out = 0;
                        if (!((Class_1098E330*)Node->UnknownC0)->GetPropertyValue(0x40800056, &Out) || Out == 0)
                        {
                            Class_10BBE6E0_UnknownC0* Obj = Node->UnknownC0;
                            float DistX = Target->Location.X - Obj->Location.X;
                            float DistY = Target->Location.Y - Obj->Location.Y;
                            float DistZ = Target->Location.Z - Obj->Location.Z;
                            float Dist = sqrtf(DistZ*DistZ + DistY*DistY + DistX*DistX);
                            if (Dist < Best)
                            {
                                Best = Dist;
                                Result = Obj;
                            }
                        }
                    }
                }
            }
        }
        Node = Node->UnknownCC;
    }
    return Result;
}
