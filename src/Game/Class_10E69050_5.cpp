// Game/Class_10E69050_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E68F74.h"

Class_10905A90_Member* GetAllocator();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount)
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

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
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

// What the array at +0x0C owns, deleted through its virtual destructor.
class Class_10A59050_Element
{
public:
    virtual ~Class_10A59050_Element();
};

class Class_10E69050 : public Class_10E68F74
{
public:
    virtual ~Class_10E69050();

    Class_10BFBD70 Unknown0C;
    int Unknown18;
};

// FUNCTION: 0x10A59030 ??_GClass_10E69050@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A59050's definition in this unit.

// FUNCTION: 0x10A59050 ??1Class_10E69050@@UAE@XZ
Class_10E69050::~Class_10E69050()
{
    int Count = Unknown0C.Unknown00;
    Unknown18 = 0;
    for (int i = 0; i < Count; i++)
        delete (Class_10A59050_Element*)Unknown0C.Unknown08[i];
}
