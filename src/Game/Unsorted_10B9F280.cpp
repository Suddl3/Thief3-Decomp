// Game/Unsorted_10B9F280.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10B9F450.h"
#include "Game/Class_10B9F480.h"
#include "Game/Class_10E5BC3C.h"
#include "Game/Object_10BE58C0.h"
#include "Game/Class_10B9F2F0.h"
#include "Game/Class_10C04AA0.h"

class FArchive;

class Object_10B9F420
{
public:
    virtual ~Object_10B9F420();
};

struct Struct_10B9F420
{
    int Unknown00;
    int Unknown04;
    Object_10B9F420** Unknown08;
};

extern __int64 DAT_10f05c70;

// FUNCTION: 0x10B9F280 ?FUN_10b9f280@@YAXH_N@Z
void FUN_10b9f280(int Bit, bool Clear)
{
    __int64 Mask = (__int64)1 << Bit;
    if (!Clear)
    {
        if (!(DAT_10f05c70 & Mask))
            DAT_10f05c70 += Mask;
    }
    else
    {
        if (DAT_10f05c70 & Mask)
            DAT_10f05c70 -= Mask;
    }
}

// FUNCTION: 0x10B9F3B0 ?FUN_10b9f3b0@Class_10E5BC3C@@UAEXPAVObject_10BE58C0@@AAPAVClass_10AAB5C0@@@Z
void Class_10E5BC3C::FUN_10b9f3b0(Object_10BE58C0* Ar, Class_10AAB5C0*& Obj)
{
    int Index = 0;
    if (Ar->Unknown14)
    {
        Ar->Virtual1(&Index, 4);
        Obj = Unknown14[Index];
        return;
    }
    if (Obj)
        Index = Obj->GetUnknown08();
    Ar->Virtual1(&Index, 4);
}

// FUNCTION: 0x10B9F420 ?FUN_10b9f420@@YAXPAUStruct_10B9F420@@@Z
void FUN_10b9f420(Struct_10B9F420* List)
{
    for (int i = 0; i < List->Unknown00; i++)
        delete List->Unknown08[i];
    List->Unknown00 = 0;
}

// FUNCTION: 0x10B9F450 ?FUN_10b9f450@Class_10B9F450@@QAEXAAVFArchive@@@Z
void Class_10B9F450::FUN_10b9f450(FArchive& Ar)
{
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i]->FUN_10c04aa0(Ar);
}

// FUNCTION: 0x10B9F480 ?FUN_10b9f480@Class_10B9F480@@QAEXAAVFArchive@@@Z
void Class_10B9F480::FUN_10b9f480(FArchive& Ar)
{
    for (int i = 0; i < Unknown18; i++)
        Unknown20[i]->FUN_10b9f2f0(Ar);
}
