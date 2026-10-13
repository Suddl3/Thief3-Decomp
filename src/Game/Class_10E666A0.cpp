// Game/Class_10E666A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E666A0.h"
#include "Game/Object_10A37820.h"
#include "Game/Object_10A37860.h"
#include "Game/Struct_10A37860.h"
#include "Game/Class_10924E80.h"
#include "Game/Class_10E66530.h"
#include "Game/Info_10A399C0.h"
#include "Game/Struct_10A378B0.h"
#include "Game/UClient.h"
#include "Engine/EngineClasses.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10A37730 ?FUN_10a37730@Class_10E666A0@@UAEHXZ
int Class_10E666A0::FUN_10a37730()
{
    Object_10A37820* First = Virtual12();
    if (!First)
        return Virtual4();
    Object_10A37860* Second = First->Virtual1();
    if (!Second)
        return Virtual4();
    if (Second->Virtual4())
        return Second->Virtual4()->Unknown04;
    return Virtual4();
}

// FUNCTION: 0x10A399C0 ?FUN_10a399c0@Class_10E666A0@@UAEXPBUInfo_10A399C0@@@Z
void Class_10E666A0::FUN_10a399c0(const Info_10A399C0* In)
{
    Unknown2C = *In;
}

// FUNCTION: 0x10A399E0 ?FUN_10a399e0@Class_10E666A0@@UAEXPBUInfo_10A399C0@@@Z
void Class_10E666A0::FUN_10a399e0(const Info_10A399C0* In)
{
    Unknown38 = *In;
}

// FUNCTION: 0x10A39A00 ?FUN_10a39a00@Class_10E666A0@@UAE_NXZ
bool Class_10E666A0::FUN_10a39a00()
{
    Object_10A37820* First = Virtual12();
    if (First)
    {
        Object_10A37860* Second = First->Virtual1();
        if (Second)
        {
            Struct_10A37860* Third = Second->Virtual4();
            if (Third)
            {
                if (Third->Unknown30 == DAT_10eafbdc && Third->Unknown0C == 3)
                    return true;
                return false;
            }
        }
    }
    return true;
}
