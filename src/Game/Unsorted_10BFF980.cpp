// Game/Unsorted_10BFF980.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BFBD70.h"

class AMarker;

class AAIPathPoint : public UObject
{
    DECLARE_CLASS(AAIPathPoint, AMarker, 0x0, AICore)
};

class AActor;

class APawn
{
    DECLARE_CLASS(APawn, AActor, 0x800, Engine)
};

class Class_10BFF980_Param
{
public:
    char Unknown00[0x2C];
    AAIPathPoint** Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10BFF980 ?FUN_10bff980@@YAXPAVClass_10BFF980_Param@@PAVClass_10BFBD70@@1@Z
void FUN_10bff980(Class_10BFF980_Param* Param, Class_10BFBD70* A, Class_10BFBD70* B)
{
    for (int i = 0; i < Param->Unknown30; i++)
    {
        AAIPathPoint* Point = Param->Unknown2C[i];
        if (Point)
        {
            if (Point->IsA(AAIPathPoint::StaticClass()))
            {
                int Index = A->Count;
                A->FUN_10bfbd70(Index + 1);
                A->Data[Index] = (int)Point;
            }
            else if (Point->IsA(APawn::StaticClass()))
            {
                int Index = B->Count;
                B->FUN_10bfbd70(Index + 1);
                B->Data[Index] = (int)Point;
            }
        }
    }
}
