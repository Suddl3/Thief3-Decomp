// Game/Unsorted_10A48B30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C66590.h"
#include "Game/FCoords.h"
#include "Game/USkeletalMesh.h"

class Class_109CC350
{
public:
    FCoords* FUN_109cc350(FCoords* A, int B);
};

void FUN_10a48d80(FCoords* A, int B, int C);

void FUN_10a48d00(FCoords* A, int B);

// FUNCTION: 0x10A48F20 ?GetBoneCoords@@YAXHHPAVFCoords@@@Z
void GetBoneCoords(int A, int B, FCoords* C)
{
    USkeletalMesh* Mesh = Cast<USkeletalMesh>((UObject*)((Class_10C66590*)A)->FUN_10c66590());
    if (Mesh && B != 9999)
    {
        Class_109CC350* Obj = Mesh->Virtual38(A);
        FCoords Out;
        *C = *Obj->FUN_109cc350(&Out, B);
    }
    else
    {
        FCoords Bone;
        FUN_10a48d80(&Bone, A, B);
        FCoords Cam;
        FUN_10a48d00(&Cam, A);
        FCoords Tmp = Bone;
        *C = *Tmp.FUN_10961e00(&Cam);
    }
}
