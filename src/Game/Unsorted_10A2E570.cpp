// Game/Unsorted_10A2E570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_1098E330.h"

class Class_1096BD50
{
public:
    Class_1096BD50(UClass* InClass)
    {
        FUN_1096bd50(InClass);
    }

    Class_1096BD50* FUN_1096bd50(UClass* InClass);
};

struct Struct_10A89290
{
    char Pad00[0x8];
    int Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1c];
    Struct_10A89290* Unknown1C;
};

class Class_1096C8D0 : public Class_1096BD50
{
public:
    Class_1096C8D0(UClass* InClass) : Class_1096BD50(InClass)
    {
    }

    UBOOL IsValid()
    {
        if (Unknown04 == 0)
            return Unknown08 < UObject::GObjObjects.Num();
        return !(Unknown10 == Unknown0C->Unknown1C && Unknown24 == 0);
    }

    void FUN_1096c8d0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    Struct_10A89290* Unknown10;
    Class_10B0D530 Unknown14;
    char Pad15[0xf];
    int Unknown24;
};

// Ion Storm's memory manager (0x10905AA0).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void* Virtual3(void* Block, int Size, int A, int B, int C, int D);
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* GetAllocator();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

// A node of a graph of nodes: it owns the nodes it links to.
class Class_10A2E570
{
public:
    Class_10A2E570();
    ~Class_10A2E570();

    int Unknown00;
    int Unknown04;
    cIntArray Unknown08;
};

// FUNCTION: 0x10A2E570 ??1Class_10A2E570@@QAE@XZ
Class_10A2E570::~Class_10A2E570()
{
    int Count = Unknown08.Unknown00;
    for (int i = 0; i < Count; i++)
    {
        Class_10A2E570* Element = (Class_10A2E570*)Unknown08.Unknown08[i];
        if (Element)
            delete Element;
    }
    Unknown08.SetCount(0);
}

// FUNCTION: 0x10A2E6F0 ?CombineInstanceValues@@YAIPAVUClass@@@Z
unsigned int CombineInstanceValues(UClass* InClass)
{
    unsigned int Result = 0;
    Class_1096C8D0 Iter(InClass);
    while (Iter.IsValid())
    {
        int Obj;
        if (Iter.Unknown04 == 0)
            Obj = (int)UObject::GObjObjects(Iter.Unknown08);
        else
            Obj = Iter.Unknown10->Unknown08;
        if (Obj != 0)
        {
            int Out;
            int Value;
            if (((Class_1098E330*)Obj)->FUN_1098e330(0x80007d3, &Out) == 0)
                Value = -1;
            else
                Value = Out;
            Result |= Value;
        }
        Iter.FUN_1096c8d0();
    }
    return Result;
}
