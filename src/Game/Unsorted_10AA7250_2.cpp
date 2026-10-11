// Game/Unsorted_10AA7250_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

void FUN_10d3ddc0(void* A, int* B);

class Class_109081E0
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
        }
    }
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

struct Struct_10AA3520
{
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Class_109081E0 Virtual3(const Class_109081E0& Key);
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10AA7250
{
public:
    void FUN_10aa7250(void* A, int Count, int Unused);

    char Pad00[0xc];
    Class_109081E0 Unknown0C;
    Class_109081E0 Unknown10;
    char Pad14[0x4];
    Class_109081E0 Unknown18;
    Class_109081E0 Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10AA7250 ?FUN_10aa7250@Class_10AA7250@@QAEXPAXHH@Z
void Class_10AA7250::FUN_10aa7250(void* A, int Count, int Unused)
{
    FUN_10d3ddc0(A, (int*)&Unknown24);
    if (Count < 0x10)
    {
        FUN_10d3ddc0(A, (int*)&Unknown0C);
        FUN_10d3ddc0(A, (int*)&Unknown18);
    }
    FUN_10d3ddc0(A, (int*)&Unknown20);
    FUN_10d3ddc0(A, (int*)&Unknown10);
    FUN_10d3ddc0(A, (int*)&Unknown1C);
    Unknown0C = DAT_10f35dec->Virtual3(Unknown10);
    Unknown18 = DAT_10f35dec->Virtual3(Unknown1C);
}
