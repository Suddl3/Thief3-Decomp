// Game/Unsorted_10A48B30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C66590.h"

class ULodMesh;

class FCoords
{
public:
    FCoords(const FVector& InOrigin) : Origin(InOrigin), XAxis(1, 0, 0), YAxis(0, 1, 0), ZAxis(0, 0, 1) {}
    FCoords() {}

    FRotator OrthoRotation() const;
    FCoords& FUN_10961af0(const FRotator& Rot);
    FCoords* FUN_10961e00(void* A);

    FVector Origin;
    FVector XAxis;
    FVector YAxis;
    FVector ZAxis;
};

class Class_109CC350
{
public:
    FCoords* FUN_109cc350(FCoords* A, int B);
};

class USkeletalMesh
{
    DECLARE_CLASS(USkeletalMesh, ULodMesh, 0x40, Engine)

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
    virtual Class_109CC350* Virtual38(int A);
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
