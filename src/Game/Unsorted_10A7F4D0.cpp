// Game/Unsorted_10A7F4D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10E6BF84.h"

void FUN_10d3d990(void* Stream, int* Value);

void FUN_10d3d230(void* Stream, unsigned char Value);

class Class_10E6BFBC : public Class_10E6BF84
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10a7f470();
    virtual void Virtual7();
    virtual void FUN_10a805c0(int A, void* Stream);
    virtual void Virtual9();

    Class_109081E0 FUN_10a801e0();

    char Pad04;
    unsigned char Unknown05;
    unsigned char Unknown06;
    unsigned char Unknown07;
    Class_109081E0 Unknown08;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A805C0 ?FUN_10a805c0@Class_10E6BFBC@@UAEXHPAX@Z
void Class_10E6BFBC::FUN_10a805c0(int A, void* Stream)
{
    FUN_10d3d990(Stream, (int*)&FUN_10a801e0());
    FUN_10d3d230(Stream, Unknown05);
    FUN_10d3d230(Stream, Unknown07);
    FUN_10d3d990(Stream, &Unknown10);
    FUN_10d3d230(Stream, Unknown06);
}
