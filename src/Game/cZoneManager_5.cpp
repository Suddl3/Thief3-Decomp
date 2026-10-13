// Game/cZoneManager_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cZoneManager.h"
#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_109E2BD0.h"

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
