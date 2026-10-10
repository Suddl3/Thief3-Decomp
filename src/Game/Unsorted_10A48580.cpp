// Game/Unsorted_10A48580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class ULodMesh;

class USkeletalMesh
{
    DECLARE_CLASS(USkeletalMesh, ULodMesh, 0x40, Engine)
};

class Class_10C66590
{
public:
    int FUN_10c66590();
};

// FUNCTION: 0x10A486D0 ?FUN_10a486d0@@YAPAVUSkeletalMesh@@PAVClass_10C66590@@@Z
USkeletalMesh* FUN_10a486d0(Class_10C66590* A)
{
    return Cast<USkeletalMesh>((UObject*)A->FUN_10c66590());
}
