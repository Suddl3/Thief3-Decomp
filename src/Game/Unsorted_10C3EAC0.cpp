// Game/Unsorted_10C3EAC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E9BB80.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The class whose vtable is DAT_10ebff38: a Class_10E9BB80 whose slot 1 (FUN_10daf820) overrides
// FUN_10c483e0 and whose slot 2 (FUN_10daf850) is its own.
class Class_10EBFF38 : public Class_10E9BB80
{
public:
    virtual int FUN_10c483e0(unsigned int* A, unsigned int* B);
    virtual void Virtual2();
};

class Class_10C30DD0_Node;

// Game/Class_10C30DD0.h copied whole, with the constructor its objects run (the header has none).
class Class_10C30DD0
{
public:
    Class_10C30DD0() : Unknown00(0), Unknown04(0), Unknown0C(0), Unknown10(false), Unknown14(0)
    {
        FUN_10c30f60(0x40);
    }

    unsigned int FUN_10c30dd0(const int& Key, const int& Value);
    void FUN_10c30f60(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10C30DD0_Node** Unknown14;
    Class_10EBFF38 Unknown18;
};

// Game/Class_10C3EA90.h copied whole, minus its destructor (not used here) and the 4 bytes after
// the union (the object is 0x20 bytes: the new passes 0x20).
class Class_10C3EA90 : public Class_10C30DD0
{
public:
    Class_10C3EA90()
    {
        Unknown1C = 0;
    }

    void FUN_10c3ea10(int A);
    void FUN_10c3ea90();

    union
    {
        char Pad18[0x4];
        int Unknown1C;
    };
};

extern Class_10C3EA90* DAT_10ff70a4;

// FUNCTION: 0x10C3EAC0 ?FUN_10c3eac0@@YAXXZ
void FUN_10c3eac0()
{
    if (!DAT_10ff70a4)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        DAT_10ff70a4 = new(0, 0, 0, 0, 0) Class_10C3EA90();
        FUN_10905aa0()->Virtual9();
    }
    DAT_10ff70a4->Unknown1C++;
}
