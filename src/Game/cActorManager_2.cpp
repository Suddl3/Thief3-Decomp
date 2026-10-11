// Game/cActorManager_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"

struct Struct_10A4C470_Inner
{
    char Unknown00[0xE8];
    int UnknownE8;
};

struct Struct_10A4C470_Object
{
    char Unknown00[0x24];
    Struct_10A4C470_Inner* Unknown24;
};

// FUNCTION: 0x10A4C470 ?FUN_10a4c470@cActorManager@@UAEXHHHH@Z
void cActorManager::FUN_10a4c470(int Type, int A, int B, int C)
{
    if (A != ((Struct_10A4C470_Object*)A)->Unknown24->UnknownE8)
    {
        switch (Type)
        {
        case 1:
            Virtual8(A, B, C);
            break;
        }
    }
}
