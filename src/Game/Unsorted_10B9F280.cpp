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

// FUNCTION: 0x10B9F280 ?SetBit@@YAXH_N@Z
void SetBit(int Bit, bool Clear)
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

// FUNCTION: 0x10B9F3B0 ?SerializeRef@Class_10E5BC3C@@UAEXPAVObject_10BE58C0@@AAPAVClass_10AAB5C0@@@Z
void Class_10E5BC3C::SerializeRef(Object_10BE58C0* Ar, Class_10AAB5C0*& Obj)
{
    int Index = 0;
    if (Ar->Unknown14)
    {
        Ar->Virtual1(&Index, 4);
        Obj = m_Objects[Index];
        return;
    }
    if (Obj)
        Index = Obj->GetUnknown08();
    Ar->Virtual1(&Index, 4);
}

// FUNCTION: 0x10B9F420 ?DeleteObjects@@YAXPAUStruct_10B9F420@@@Z
void DeleteObjects(Struct_10B9F420* List)
{
    for (int i = 0; i < List->Unknown00; i++)
        delete List->Unknown08[i];
    List->Unknown00 = 0;
}

// FUNCTION: 0x10B9F450 ?Serialize@Class_10B9F450@@QAEXAAVFArchive@@@Z
void Class_10B9F450::Serialize(FArchive& Ar)
{
    for (int i = 0; i < m_Count; i++)
        m_Items[i]->Serialize(Ar);
}

// FUNCTION: 0x10B9F480 ?Serialize@Class_10B9F480@@QAEXAAVFArchive@@@Z
void Class_10B9F480::Serialize(FArchive& Ar)
{
    for (int i = 0; i < m_Count; i++)
        m_Items[i]->Serialize(Ar);
}
