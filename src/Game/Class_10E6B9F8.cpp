// Game/Class_10E6B9F8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098E330.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6B978.h"
#include "Game/Class_10E6B9F8.h"
#include "Game/Class_10E6BA00.h"
#include "Game/Class_10E6BC8C.h"

class Class_10E6B978;

// FUNCTION: 0x10A6E5E0 ?HandleEvent@Class_10E6B9F8@@UAEXHPAVUObject@@HH@Z
void Class_10E6B9F8::HandleEvent(int Event, UObject* A, int B, int C)
{
    switch (Event)
    {
    case 3:
        FUN_10a6e1c0(A, B, C);
        break;
    case 51:
    case 52:
        FUN_10a6e370(A, B, C, Event);
        break;
    case 16:
        FUN_10a6e490(A, B, C, Event, 0x25c7c38);
        break;
    }
}
