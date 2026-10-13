// Game/Class_10E99178.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"
#include "Game/Struct_10BEFA30.h"
#include "Game/Class_10BF0A60.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"
#include "Game/Class_10BEFA30.h"
#include "Game/Class_10C1DE20_Unknown14.h"
#include "Game/Class_10C1DE20_Unknown38.h"

extern Class_10FF667C* DAT_10ff667c;

class Class_10E99178
{
public:
    virtual void Serialize(FArchive& Ar);

    int Unknown04;
    Class_10BF0A60 Unknown08;
    Class_10C1DE20_Unknown14 Unknown14;
    char Pad18[0x20];
    Class_10C1DE20_Unknown38 Unknown38;
    char Pad3C[0x20];
    int Unknown5C;
    int Unknown60;
    int Unknown64;
    int Unknown68;
    char Pad6C[0x4];
    UObject* Unknown70;
    int Unknown74;
    char Pad78[0x4];
    int Unknown7C;
    int Unknown80;
    int Unknown84;
    int Unknown88;
};

// FUNCTION: 0x10C1DE20 ?Serialize@Class_10E99178@@UAEXAAVFArchive@@@Z
void Class_10E99178::Serialize(FArchive& Ar)
{
    unsigned char Value = Unknown04;
    Ar.Serialize(&Value, 1);
    if (Ar.Unknown14)
        Unknown04 = Value;
    int Count = Unknown08.m_Count;
    Ar.Serialize(&Count, 4);
    if (Ar.Unknown14)
        Unknown08.FUN_10befb10(Count);
    for (int i = 0; i < Count; i++)
        Unknown08.m_Items[i].Virtual0(Ar);
    Unknown14.Virtual0(Ar);
    Unknown38.Virtual0(Ar);
    Ar.Serialize(&Unknown5C, 4);
    Ar.Serialize(&Unknown60, 4);
    Ar.Serialize(&Unknown64, 4);
    Ar.Serialize(&Unknown68, 4);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown74);
    Ar.Virtual6(&Unknown70);
    Ar.Serialize(&Unknown7C, 4);
    Ar.Serialize(&Unknown80, 4);
    Ar.Serialize(&Unknown84, 4);
    Ar.Serialize(&Unknown88, 4);
}
