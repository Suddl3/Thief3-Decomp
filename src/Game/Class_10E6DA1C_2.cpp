// Game/Class_10E6DA1C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10AB37F0.h"
#include "Game/Class_10AB3C20.h"

void FUN_10d3d3b0(void* Reader, int* Out);

void FUN_10d3ddc0(void* Reader, int* Out);

class Class_10E6DA1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10aaaec0(void* Reader, int Version, int Unused);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    Class_10AB37F0 Unknown10;
};

// FUNCTION: 0x10AAAEC0 ?FUN_10aaaec0@Class_10E6DA1C@@UAEXPAXHH@Z
void Class_10E6DA1C::FUN_10aaaec0(void* Reader, int Version, int Unused)
{
    Class_109081E0 Text10;
    Class_109081E0 Text0C;
    int Count;
    FUN_10d3d3b0(Reader, &Count);
    Unknown08 = Count;
    FUN_10d3ddc0(Reader, &Unknown0C);
    FUN_10d3ddc0(Reader, (int*)&Text10);
    if (Version > 0x1b)
    {
        FUN_10d3ddc0(Reader, (int*)&Text0C);
    }
    Unknown10.FUN_10ab37f0(Text10);
    ((Class_10AB3C20*)&Unknown10)->FUN_10ab3c20(Text0C);
}
