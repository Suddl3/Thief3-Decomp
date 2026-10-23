// Game/Class_10E6BC8C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BC8C.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_1098E330.h"
#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6B978.h"
#include "Game/Class_10E6B9F8.h"
#include "Game/Class_10E6BA00.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

class Class_10A76E10_Unknown1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, int C);
};

struct Struct_10AA3520
{
    char Unknown00[0x1C];
    Class_10A76E10_Unknown1C* Unknown1C;
};

class Object_10A76E10
{
public:
    char Unknown00[4];
    float Unknown04;
};

extern float DAT_10eafbdc;

extern Class_10F46DA0* DAT_10f46da0;

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6B978;

// FUNCTION: 0x10A6E690 ?HasOwner@Class_10E6BC8C@@QAE_NH@Z
bool Class_10E6BC8C::HasOwner(int A)
{
    return GetOwner(A) != 0;
}

// FUNCTION: 0x10A76E10 ?FUN_10a76e10@Class_10E6BC8C@@UAEHHPAVObject_10A76E10@@M@Z
int Class_10E6BC8C::FUN_10a76e10(int A, Object_10A76E10* B, float C)
{
    B->Unknown04 = B->Unknown04 - C;
    if (B->Unknown04 <= DAT_10eafbdc)
    {
        DAT_10f46da0->Virtual5(0x6d, A, -1, 0);
        int Key;
        if (((Class_1098E330*)A)->GetPropertyValue(0x800703, &Key) && Key != 0)
        {
            ((APawn*)A)->FUN_10a6ea30(0x40800056, 1);
            return 1;
        }
        DAT_10f35dec->Unknown1C->Virtual1(A, 0, 0);
        return 1;
    }
    return 0;
}
