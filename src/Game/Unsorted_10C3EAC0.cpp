// Game/Unsorted_10C3EAC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E9BB80.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The class whose vtable is DAT_10ebff38: a Class_10E9BB80 whose slot 1 (FUN_10daf820) overrides
// CompareUnsigned and whose slot 2 (FUN_10daf850) is its own.
class Class_10EBFF38 : public Class_10E9BB80
{
public:
    virtual int CompareUnsigned(unsigned int* A, unsigned int* B);
    virtual void Virtual2();
};

class Class_10C30DD0_Node;

// Game/Class_10C30DD0.h copied whole, with the constructor its objects run (the header has none).
class Class_10C30DD0
{
public:
    Class_10C30DD0() : m_Collisions(0), m_Count(0), m_BucketCount(0), m_FixedSize(false), m_Buckets(0)
    {
        Rehash(0x40);
    }

    unsigned int Insert(const int& Key, const int& Value);
    void Rehash(int Size);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_10C30DD0_Node** m_Buckets;
    Class_10EBFF38 Unknown18;
};

// Game/Class_10C3EA90.h copied whole, minus its destructor (not used here) and the 4 bytes after
// the union (the object is 0x20 bytes: the new passes 0x20).
class Class_10C3EA90 : public Class_10C30DD0
{
public:
    Class_10C3EA90()
    {
        m_RefCount = 0;
    }

    void Reset(int A);
    void Release();

    union
    {
        char Pad18[0x4];
        int m_RefCount;
    };
};

extern Class_10C3EA90* DAT_10ff70a4;

// FUNCTION: 0x10C3EAC0 ?AcquireHashTable@@YAXXZ
void AcquireHashTable()
{
    if (!DAT_10ff70a4)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff70a4 = new(0, 0, 0, 0, 0) Class_10C3EA90();
        GetAllocator()->Virtual9();
    }
    DAT_10ff70a4->m_RefCount++;
}
