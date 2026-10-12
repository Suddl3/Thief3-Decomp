// Game/cTriggerBoolPropertyParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1096A960.h"
#include "Game/cTriggerBoolPropertyParam.h"

template <class T> class TArray
{
public:
    T& operator()(int i) { return Data[i]; }

    T* Data;
    int ArrayNum;
    int ArrayMax;
};

class UObject
{
public:
    static TArray<UObject*> GObjObjects;
};

struct Struct_10A8BBC0
{
    char Unknown00[8];
    Class_1096A960* Unknown08;
};

class Class_1096C8D0
{
public:
    void FUN_1096c8d0();

    char Unknown00[4];
    int Unknown04;
    int Unknown08;
    char Unknown0C[4];
    Struct_10A8BBC0* Unknown10;
};

class Class_10F3A1EC : public Class_1096C8D0
{
};

extern Class_10F3A1EC* DAT_10f3a1ec;

// FUNCTION: 0x10A8BBC0 ?FUN_10a8bbc0@cTriggerBoolPropertyParam@@UAE?AVcString@@XZ
cString cTriggerBoolPropertyParam::FUN_10a8bbc0()
{
    Class_1096C8D0* Holder = DAT_10f3a1ec;
    Class_1096A960* Obj;
    if (Holder->Unknown04 == 0)
        Obj = (Class_1096A960*)UObject::GObjObjects(Holder->Unknown08);
    else
        Obj = Holder->Unknown10->Unknown08;
    return Obj->FUN_1096a960();
}
