// Game/Class_10E98D98.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C1B0F0.h"
#include "Game/Class_10FF667C.h"
#include "Game/FArchive.h"
#include "Game/Class_10E98E70.h"
#include "Game/Class_10E98D08.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E98D98 : public Class_10E98D08
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    float Unknown48[3];
};

// FUNCTION: 0x10C1B270 ?Serialize@Class_10E98D98@@UAEXAAVFArchive@@@Z
void Class_10E98D98::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, Unknown48);
}
