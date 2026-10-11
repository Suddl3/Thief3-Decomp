// Game/Unsorted_10B24140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BFBD70.h"
#include "Game/WindowManager.h"

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10C08690;

class Class_10B17210
{
public:
    void FUN_10b17210(Class_10BFBD70& Found);
};

extern WindowManager* GWindowManager;

void appRequestExit(int Force);

void* FUN_10b154c0();

// FUNCTION: 0x10B244A0 ?FUN_10b244a0@@YAXH@Z
void FUN_10b244a0(int Mode)
{
    if (Mode == 1)
    {
        appRequestExit(0);
        return;
    }
    Class_10BFBD70 Found;
    ((Class_10B17210*)FUN_10b154c0())->FUN_10b17210(Found);
    GWindowManager->Virtual3();
}
