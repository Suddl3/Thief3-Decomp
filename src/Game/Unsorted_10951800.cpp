// Game/Unsorted_10951800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_One2.h"
#include "Game/Struct_One4.h"
#include "Game/Struct_Pair0.h"
#include "Game/Struct_Zero4.h"

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

// A growable array of pointers in 20 bytes: a count, the bytes allocated and
// the block, grown and shrunk 4 entries at a time. It has no destructor: its
// owner frees it with Free().
struct Struct_Zero5
{
    Struct_Zero5() : A(0), B(0), C(0), D(0), E(0) {}

    void SetCount(int NewCount)
    {
        int Capacity = !C ? 0 : B / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~3) + 4;
            C = (void**)GetAllocator()->Virtual3(C, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            B = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 4)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(C);
                C = 0;
                B = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~3) + 4;
                C = (void**)GetAllocator()->Virtual3(C, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                B = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        A = NewCount;
    }

    void Free()
    {
        SetCount(0);
        if (B)
        {
            GetAllocator()->Virtual5(C);
            C = 0;
            B = 0;
        }
    }

    int A;
    int B;
    void** C;
    int D;
    int E;
};

// The polymorphic base at 0x10E4AC64: a virtual destructor and no fields.
class Class_10E4AC64
{
public:
    virtual ~Class_10E4AC64() {}
};

class Class_10E4AC6C : public Class_10E4AC64
{
public:
    Class_10E4AC6C();

    virtual ~Class_10E4AC6C();

    int Unknown04;
    int Unknown08;
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
    float Unknown1C;
    Struct_Pair0 Unknown20;
    int Unknown28;
    float Unknown2C;
    float Unknown30;
    float Unknown34;
    float Unknown38;
    int Unknown3C;
    Struct_Zero5 Unknown40;
    Struct_One4 Unknown54;
    Struct_Zero4 Unknown64;
    Struct_One2 Unknown74;
    Struct_Zero4 Unknown7C;
};

struct Struct_10951800 {};

// FUNCTION: 0x10951800 ??1Class_10E4AC6C@@UAE@XZ
Class_10E4AC6C::~Class_10E4AC6C()
{
    for (int i = 0; i < Unknown40.A; i++)
    {
        if (Unknown40.C[i])
            delete (Struct_10951800*)Unknown40.C[i];
    }
    Unknown40.Free();
}
