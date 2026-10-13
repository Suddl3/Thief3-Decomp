// Game/AAIPathPoint_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BC1A60.h"
#include "Game/Struct_10BBEFD0.h"

class AActor
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Unknown20(Struct_10BBEFD0* Arg);
};

class AMarker : public AActor
{
public:
    char Unknown04[0xBC];
};

class AAIPathPoint : public AMarker
{
public:
    virtual void Unknown20(Struct_10BBEFD0* Arg);
    void FUN_10b06230(int Flags);

    Class_10BC1A60 Unknown0C0;
};

// FUNCTION: 0x10BBEFD0 ?Serialize@AAIPathPoint@@UAEXAAVFArchive@@@Z
void AAIPathPoint::Unknown20(Struct_10BBEFD0* Arg)
{
    if (Arg->Unknown1C != 1)
    {
        AActor::Unknown20(Arg);
        Unknown0C0.FUN_10bc1a60(Arg);
        if (Arg->Unknown14 == 1)
            FUN_10b06230(0x1000000);
    }
}
