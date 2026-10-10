// Game/Unsorted_10AAAEC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"
#include "Game/Class_10AB3800.h"
#include "Game/Class_10AAB060.h"

void FUN_10d3d3b0(void* Reader, int* Out);

class Class_10E6DA40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10aab540(void* Reader, int Version, int Unused);

    char Unknown04[4];
    int Unknown08;
};

// FUNCTION: 0x10AAB060 ?FUN_10aab060@Class_10AAB060@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10AAB060::FUN_10aab060()
{
    return Unknown10.FUN_10ab3800();
}

// FUNCTION: 0x10AAB540 ?FUN_10aab540@Class_10E6DA40@@UAEXPAXHH@Z
void Class_10E6DA40::FUN_10aab540(void* Reader, int Version, int Unused)
{
    if (Version > 12)
    {
        FUN_10d3d3b0(Reader, &Version);
        Unknown08 = Version;
    }
}
