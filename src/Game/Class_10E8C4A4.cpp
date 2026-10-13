// Game/Class_10E8C4A4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8C4A4.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0EE90.h"
#include "Game/Class_10E98530.h"
#include "Game/Struct_10C0EE30.h"
#include "Game/cIntArray.h"
#include "Game/cContextVolumeList.h"
#include "Game/Class_10E97CC0.h"

class cContextVolumeList;

void ReadString(void* Reader, int* Out);

// FUNCTION: 0x10C12970 ?Compare@Class_10E8C4A4@@UAEHHPAV1@@Z
int Class_10E8C4A4::Compare(int A, Class_10E8C4A4* Other)
{
    switch (A)
    {
    case 1:
        if (Other->Unknown08 == Unknown08)
            return 1;
        break;
    case 6:
        if (Other->Unknown08 != Unknown08)
            return 1;
        break;
    }
    return 0;
}

// FUNCTION: 0x10C129B0 ?FUN_10c129b0@Class_10E8C4A4@@UAE_NXZ
bool Class_10E8C4A4::FUN_10c129b0()
{
    return Unknown08 != 0;
}

// FUNCTION: 0x10C129C0 ?Load@Class_10E8C4A4@@UAE_NHPAX@Z
bool Class_10E8C4A4::Load(int A, void* Reader)
{
    ReadString(Reader, &Unknown0C);
    Virtual4(&Unknown0C);
    return true;
}
