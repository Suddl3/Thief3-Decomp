// Game/Unsorted_109E2A90_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E2A90.h"
#include "Game/Class_109E2AE0.h"
#include "Game/Class_109E2BD0.h"
#include "Game/Class_10E5B2AC.h"
#include "Game/Struct_109E2A90_Node.h"

struct Struct_109E2AE0_Node
{
    Struct_109E2AE0_Node* Next;
};

struct Struct_109E2AE0_Item
{
    int Unknown00;
    Struct_109E2AE0_Node* Unknown04;
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e5b2a8[];

class Class_10E5B2A8
{
public:
    Class_10E5B2A8()
    {
        VTable = DAT_10e5b2a8;
        m_BucketCount = 0;
        Unknown08 = 0;
        m_Buckets = 0;
        Unknown10 = 0;
    }

    void** VTable;
    int m_BucketCount;
    int Unknown08;
    int m_Buckets;
    int Unknown10;
};

extern Class_10E5B2A8* DAT_10f35dbc;

class Class_10E5B2AC;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B2AC* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class FVector
{
public:
    float X, Y, Z;
};

// What FUN_10947090 returns: the record for the point, with a field at 0x30.
class Struct_10947090
{
public:
    char Unknown00[0x30];
    int Unknown30;
};

class Class_10947090
{
public:
    Struct_10947090* FUN_10947090(const FVector* Point);
};

class Class_10924100
{
public:
    char Unknown00[0xC];
    Class_10947090* Unknown0C;
};

extern Class_10924100* DAT_10f2c740;

// FUNCTION: 0x109E2A90 ?Unlink@Class_109E2A90@@QAEXPAUStruct_109E2A90_Node@@@Z
void Class_109E2A90::Unlink(Struct_109E2A90_Node* Item)
{
    if (Head == Item)
        Head = Item->Next;
    if (Tail == Item)
        Tail = Item->Prev;
    if (Item->Next)
        Item->Next->Prev = Item->Prev;
    if (Item->Prev)
        Item->Prev->Next = Item->Next;
    Item->Next = (Struct_109E2A90_Node*)-1;
    Item->Prev = (Struct_109E2A90_Node*)-1;
    Count--;
}

// FUNCTION: 0x109E2AE0 ?Clear@Class_109E2AE0@@QAEXXZ
void Class_109E2AE0::Clear()
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        Struct_109E2AE0_Item* Item = m_Items[i];
        if (Item && Item->Unknown04)
        {
            Struct_109E2AE0_Node* Node = Item->Unknown04;
            do
            {
                Struct_109E2AE0_Node* Next = Node->Next;
                delete Node;
                Node = Next;
            } while (Node);
        }
        delete m_Items[i];
        m_Items[i] = 0;
    }
}

// FUNCTION: 0x109E2BD0 ?FindBucketIndex@Class_109E2BD0@@QAEHH@Z
int Class_109E2BD0::FindBucketIndex(int Value)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_109E2A90* List = m_Buckets[i];
        if (List)
        {
            for (Struct_109E2A90_Node* Node = List->Head; Node; Node = Node->Next)
            {
                if (Node->Unknown08 == Value)
                    return i;
            }
        }
    }
    return -1;
}

// FUNCTION: 0x109E2C70 ?GetZoneManager@@YAPAVClass_10E5B2A8@@XZ
Class_10E5B2A8* GetZoneManager()
{
    if (DAT_10f35dbc == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10E5B2A8* Result = new(0, 0, 0, 0, 0) Class_10E5B2A8;
        DAT_10f35dbc = Result;
        GetAllocator()->Virtual9();
    }
    return DAT_10f35dbc;
}

// FUNCTION: 0x109E32B0 ?SendMessages@Class_10E5B2AC@@QAEXXZ
void Class_10E5B2AC::SendMessages()
{
    if (DAT_10f46da0)
    {
        DAT_10f46da0->Virtual1(this, 0x24, -1, -1);
        DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
        DAT_10f46da0->Virtual1(this, 5, -1, -1);
    }
}

// FUNCTION: 0x109E32F0 ?FUN_109e32f0@@YGHVFVector@@@Z
int __stdcall FUN_109e32f0(FVector Point)
{
    if (DAT_10f2c740 && DAT_10f2c740->Unknown0C)
    {
        Struct_10947090* Record = DAT_10f2c740->Unknown0C->FUN_10947090(&Point);
        if (Record)
            return Record->Unknown30;
    }
    return -1;
}
