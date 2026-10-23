// Game/Unsorted_10C0E6D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/cVolume.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10BAA000.h"
#include "Game/Class_10C0E910.h"
#include "Game/Class_10C0E9A0.h"

extern float DAT_10eafbdc;

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

// FUNCTION: 0x10C0E910 ?FUN_10c0e910@Class_10C0E910@@QAEXPAVFVector@@PAVcIntArray@@@Z
void Class_10C0E910::FUN_10c0e910(FVector* Pos, cIntArray* Out)
{
    for (int i = 0; i < Unknown10; i++)
    {
        Class_1098E330* Obj = Unknown18[i];
        int Found = 0;
        Obj->GetPropertyValue(0x800465, &Found);
        if (Found)
        {
            if (((cVolume*)Obj)->ContainsPoint(*Pos))
            {
                int Index = Out->Count;
                Out->SetCount(Index + 1);
                Out->Data[Index] = (int)Obj;
            }
        }
    }
}

// FUNCTION: 0x10C0E9A0 ?FUN_10c0e9a0@Class_10C0E9A0@@QAEPAUStruct_10BAA000@@PBUStruct_10C05A80@@@Z
Struct_10BAA000* Class_10C0E9A0::FUN_10c0e9a0(const Struct_10C05A80* Target)
{
    Struct_10BAA000* Best = 0;
    float BestDist = 0.0f;
    for (int i = 0; i < Unknown04; i++)
    {
        Struct_10BAA000* Cur = Unknown0C[i];
        float Dist = DistanceSquared3D(Target, &Cur->Unknown2C);
        if (BestDist == DAT_10eafbdc || Dist < BestDist)
        {
            BestDist = Dist;
            Best = Cur;
        }
    }
    return Best;
}
