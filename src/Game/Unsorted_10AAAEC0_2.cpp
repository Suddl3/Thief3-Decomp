// Game/Unsorted_10AAAEC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

void FUN_10d3d3b0(void* Reader, int* Out);

void FUN_10d3ddc0(void* Reader, int* Out);

// Ion Storm's string (0x109081E0) without its base, with its own destructor body (as the similar 0x10A8C9E0).
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// Copied whole from include/Game/Class_10AB37F0.h and include/Game/Class_10AB3C20.h: those headers pull in
// Class_109081E0 with its base, whose destructor schedules the call differently.
class Class_10AB37F0
{
public:
    void FUN_10ab37f0(const Class_109081E0& Value);

    Class_109081E0 Unknown00;
};

class Class_10AB3C20
{
public:
    void FUN_10ab3ab0();
    void FUN_10ab3c20(const Class_109081E0& Value);

    char Unknown00[4];
    Class_109081E0 Unknown04;
};

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
