// Game/Unsorted_10C3EAC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cIntHashTable.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Game/Class_10C3EA90.h copied whole, minus its destructor (not used here) and the 4 bytes after
// the union (the object is 0x20 bytes: the new passes 0x20).
class Class_10C3EA90 : public cIntHashTable
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
