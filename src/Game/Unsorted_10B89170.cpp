// Game/Unsorted_10B89170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E499A8.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class cString;

class Class_10B88A80_Node;

// Game/Class_10B88A80.h copied whole, with the constructor its objects run (the header has none).
class Class_10B88A80
{
public:
    Class_10B88A80() : m_Collisions(0), m_Count(0), m_BucketCount(0), m_FixedSize(false), m_Buckets(0)
    {
        Rehash(0x40);
    }

    unsigned int Insert(const cString& Key, const int& Value);
    void Rehash(int Size);

    int m_Collisions;
    int m_Count;
    int m_HashBits;
    int m_BucketCount;
    bool m_FixedSize;
    Class_10B88A80_Node** m_Buckets;
    Class_10E499A8 m_Hasher;
};

class Class_10B88C40;

extern Class_10B88C40* DAT_10ff65d8;

// FUNCTION: 0x10B89170 ?FUN_10b89170@@YAPAVClass_10B88C40@@XZ
Class_10B88C40* FUN_10b89170()
{
    if (!DAT_10ff65d8)
    {
        DAT_10ff65d8 = (Class_10B88C40*)new(0, 0, 0, 0, 0) Class_10B88A80();
    }
    return DAT_10ff65d8;
}
