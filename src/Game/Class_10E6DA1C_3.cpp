// Game/Class_10E6DA1C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"

void FUN_10d3d2d0(void* A, int B);

void FUN_10d3d990(void* Stream, int* Value);

// Class_10AB3800, copied whole from include/Game/Class_10AB3800.h with the method its object also has.
class Class_10AB3800
{
public:
    Class_1090A780 FUN_10ab3800();
    void* FUN_10ab37c0();

    char Unknown00[0xC];
};

class Class_10E6DA1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void WriteFields(void* A, int B, int C);

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
    Class_10AB3800 Unknown10;
};

// FUNCTION: 0x10AAAFB0 ?WriteFields@Class_10E6DA1C@@UAEXPAXHH@Z
void Class_10E6DA1C::WriteFields(void* A, int B, int C)
{
    FUN_10d3d2d0(A, Unknown08);
    FUN_10d3d990(A, &Unknown0C);
    FUN_10d3d990(A, (int*)&Unknown10.FUN_10ab3800());
    FUN_10d3d990(A, (int*)Unknown10.FUN_10ab37c0());
}
