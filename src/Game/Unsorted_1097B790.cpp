// Game/Unsorted_1097B790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_1096BD50.h"
#include "Game/Class_1097B240.h"
#include "Game/Class_1097B790.h"
#include "Game/Class_1097CAA0.h"
#include "Game/Class_1097CAE0.h"
#include "Game/Class_1097CB20.h"
#include "Game/Class_1097CB60.h"
#include "Game/Class_1097CBA0.h"
#include "Game/Class_1097CBE0.h"
#include "Game/USkeletalMesh.h"
#include "Game/Class_1097B240_Node.h"

class AActor;

class APawn
{
    DECLARE_CLASS(APawn, AActor, 0x800, Engine)
};

class ULodMesh;

class UMeshAnimation
{
    DECLARE_CLASS(UMeshAnimation, UObject, 0x40, Engine)
};

struct Struct_1097B790
{
    char Unknown00[0x2C];
    void** Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x1097B790 ?FUN_1097b790@Class_1097B790@@QAEXPAUStruct_1097B790@@@Z
void Class_1097B790::FUN_1097b790(Struct_1097B790* A)
{
    if (A)
    {
        int Count = A->Unknown30;
        for (int i = 0; i < Count; i++)
            FUN_1097afb0(A->Unknown2C[i], 0xF);
    }
}

// FUNCTION: 0x1097C880 ?Clear@Class_1097CBE0@@QAEXH@Z
void Class_1097CBE0::Clear(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_1097B240_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_1097B240_Node* Next = Node->Next;
            Node->Key.~cString();
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    m_BucketCount = 0;
    Unknown00 = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!Unknown10)
        Resize(Size);
}

// FUNCTION: 0x1097CAA0 ?FUN_1097caa0@Class_1097CAA0@@QAEPAV1@XZ
Class_1097CAA0* Class_1097CAA0::FUN_1097caa0()
{
    FUN_1096bd50(UClass::StaticClass());
    return this;
}

// FUNCTION: 0x1097CAE0 ?FUN_1097cae0@Class_1097CAE0@@QAEPAV1@XZ
Class_1097CAE0* Class_1097CAE0::FUN_1097cae0()
{
    FUN_1096bd50(UObject::StaticClass());
    return this;
}

// FUNCTION: 0x1097CB20 ?FUN_1097cb20@Class_1097CB20@@QAEPAV1@XZ
Class_1097CB20* Class_1097CB20::FUN_1097cb20()
{
    FUN_1096bd50(APawn::StaticClass());
    return this;
}

// FUNCTION: 0x1097CB60 ?FUN_1097cb60@Class_1097CB60@@QAEPAV1@XZ
Class_1097CB60* Class_1097CB60::FUN_1097cb60()
{
    FUN_1096bd50(USkeletalMesh::StaticClass());
    return this;
}

// FUNCTION: 0x1097CBA0 ?FUN_1097cba0@Class_1097CBA0@@QAEPAV1@XZ
Class_1097CBA0* Class_1097CBA0::FUN_1097cba0()
{
    FUN_1096bd50(UMeshAnimation::StaticClass());
    return this;
}
