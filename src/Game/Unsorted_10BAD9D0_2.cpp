// Game/Unsorted_10BAD9D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BAE080.h"

Class_10905A90_Member* FUN_10905aa0();

enum EInternal { EC_Internal };

inline void* operator new(unsigned int Size, EInternal* Mem) { return Mem; }

// Game/Class_10E8D7A8.h copied with the default constructor the element's loop runs (it stores the vtable, then zeroes Unknown04).
class Class_10E8D7A8
{
public:
    Class_10E8D7A8() { Unknown04 = 0; }
    Class_10E8D7A8(const Class_10E8D7A8& Other);
    virtual ~Class_10E8D7A8();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
};

// FUNCTION: 0x10BAD9D0 ?FUN_10bad9d0@Class_10BAE080@@QAEXH@Z
void Class_10BAE080::FUN_10bad9d0(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10E8D7A8);
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10E8D7A8), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10E8D7A8);
        Unknown08 = (Class_10E8D7A8*)Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10E8D7A8), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10E8D7A8);
            Unknown08 = (Class_10E8D7A8*)Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10E8D7A8* Element = Unknown08 + j;
        new ((EInternal*)Element) Class_10E8D7A8();
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}
