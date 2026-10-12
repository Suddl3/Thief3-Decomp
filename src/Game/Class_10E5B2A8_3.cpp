// Game/Class_10E5B2A8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109E2A90.h"

class AZoneProperties;

class UObject;

struct Struct_109E2A90_Node
{
    Struct_109E2A90_Node* Next;
    int Unknown04;
    AZoneProperties* Unknown08;
};

class cZoneManager
{
public:
    virtual void HandleEvent(int Event, UObject* A, int B, int C);

    cZoneManager();

    void RemoveFromBucket(INT A, AZoneProperties* B);
    void RemoveZone(UObject* Obj, int A, int B);
    void AddZone(UObject* A, int B, int C);
    void FUN_109e3060(UObject* A, int B, int C);
    void FUN_109e2b40(AZoneProperties* A);

    int m_BucketCount;
    int Unknown08;
    Class_109E2A90** m_Buckets;
    int Unknown10;
};

// FUNCTION: 0x109E2C10 ?RemoveFromBucket@cZoneManager@@QAEXHPAVAZoneProperties@@@Z
void cZoneManager::RemoveFromBucket(INT Index, AZoneProperties* Obj)
{
    if (Index >= 0 && Index < m_BucketCount)
    {
        Class_109E2A90* Bucket = m_Buckets[Index];
        if (Bucket)
        {
            for (Struct_109E2A90_Node* Node = Bucket->Head; Node; Node = Node->Next)
            {
                if (Node->Unknown08 == Obj)
                {
                    Bucket->Unlink(Node);
                    delete Node;
                    return;
                }
            }
        }
        FUN_109e2b40(Obj);
        return;
    }
    FUN_109e2b40(Obj);
}
