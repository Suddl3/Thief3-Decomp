// Game/Class_Field04_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AAF570_Field10.h"

class Class_Field04
{
public:
    void FUN_10bb83e0();

    char Unknown00[0xC];
    Class_10AAF570* Unknown0C;
    char Unknown10[0x2C4];
    unsigned char Unknown2D4;
};

// FUNCTION: 0x10BB83E0 ?FUN_10bb83e0@Class_Field04@@QAEXXZ
void Class_Field04::FUN_10bb83e0()
{
    if (Unknown2D4)
        ((Class_10AAF570_Field10*)Unknown0C->GetLinkType())->Virtual56();
}
