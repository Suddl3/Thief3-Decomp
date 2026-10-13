// Game/cZoneManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cZoneManager.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_109E2BD0.h"
#include "Game/Class_10F46DA0.h"

class AInfo;

struct Struct_109E2B40_Node;

struct Struct_109E2B40_Bucket
{
    int Count;
    Struct_109E2B40_Node* Head;
    Struct_109E2B40_Node* Tail;
};

struct Struct_109E2B40_Node
{
    Struct_109E2B40_Node* Next;
    Struct_109E2B40_Node* Prev;
    AZoneProperties* Unknown08;
};

struct Struct_109E3060
{
    char Unknown00[4];
    int Unknown04;
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x109E2B40 ?FUN_109e2b40@cZoneManager@@QAEXPAVAZoneProperties@@@Z
void cZoneManager::FUN_109e2b40(AZoneProperties* A)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Struct_109E2B40_Bucket* Bucket = ((Struct_109E2B40_Bucket**)m_Buckets)[i];
        if (!Bucket)
            continue;
        for (Struct_109E2B40_Node* Node = Bucket->Head; Node; Node = Node->Next)
        {
            if (Node->Unknown08 == A)
            {
                if (Bucket->Head == Node)
                    Bucket->Head = Node->Next;
                if (Bucket->Tail == Node)
                    Bucket->Tail = Node->Prev;
                if (Node->Next)
                    Node->Next->Prev = Node->Prev;
                if (Node->Prev)
                    Node->Prev->Next = Node->Next;
                Node->Next = (Struct_109E2B40_Node*)-1;
                Node->Prev = (Struct_109E2B40_Node*)-1;
                Bucket->Count--;
                delete Node;
                return;
            }
        }
    }
}

// FUNCTION: 0x109E2CE0 ?RemoveZone@cZoneManager@@QAEXPAVUObject@@HH@Z
void cZoneManager::RemoveZone(UObject* Obj, int A, int B)
{
    AZoneProperties* Zone = Cast<AZoneProperties>(Obj);
    RemoveFromBucket(Zone->m_FleshBSPZone, Zone);
}

// FUNCTION: 0x109E2FA0 ?AddZone@cZoneManager@@QAEXPAVUObject@@HH@Z
void cZoneManager::AddZone(UObject* A, int B, int C)
{
    if (!A->IsA(AZoneProperties::StaticClass()))
        return;
    AZoneProperties* Zone = Cast<AZoneProperties>(A);
    if (Zone->m_FleshBSPZone != -1)
        AddToBucket(Zone->m_FleshBSPZone, Zone);
    DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x26, (Struct_10C14320*)Zone, -1);
    DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x27, (Struct_10C14320*)Zone, -1);
    DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x70, (Struct_10C14320*)Zone, -1);
}

// FUNCTION: 0x109E3060 ?FUN_109e3060@cZoneManager@@QAEXPAVUObject@@HH@Z
void cZoneManager::FUN_109e3060(UObject* A, int B, int C)
{
    AZoneProperties* Zone = (AZoneProperties*)A;
    if (!Zone || !Zone->IsA(AZoneProperties::StaticClass()))
        Zone = NULL;
    int NewBucket = ((Class_109E2BD0*)this)->FindBucketIndex((int)Zone);
    int OldBucket = ((Struct_109E3060*)C)->Unknown04;
    if (NewBucket != OldBucket)
    {
        RemoveFromBucket(NewBucket, Zone);
        if (OldBucket != -1)
            AddToBucket(OldBucket, Zone);
    }
}

// FUNCTION: 0x109E30D0 ?HandleEvent@cZoneManager@@UAEXHPAVUObject@@HH@Z
void cZoneManager::HandleEvent(int Event, UObject* A, int B, int C)
{
    switch (Event)
    {
    case 36:
    case 37:
        AddZone(A, B, C);
        break;
    case 38:
    case 39:
        RemoveZone(A, B, C);
        break;
    case 112:
        FUN_109e3060(A, B, C);
        break;
    }
}
