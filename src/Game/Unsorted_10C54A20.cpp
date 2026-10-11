// Game/Unsorted_10C54A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <list>
#include "Game/Class_10C54B70_Object.h"
#include "Game/Class_10C55320.h"
#include "Game/Object_10AB5B20.h"
#include "Game/Class_10AB5B20.h"
#include "Game/Class_10C54B70_Member.h"
#include "Game/Class_10C55360.h"
#include "Game/Entry_10C55360.h"
#include "Game/Class_10C56E40_Field00.h"

struct Struct_10C55320
{
    Struct_10C55320* Unknown00;
    Struct_10C55320* Unknown04;
    char Unknown08[0x14];
    Class_10AB5B20 Unknown1C;
};

class Class_10EB7660
{
public:
    Class_10EB7660();

    virtual ~Class_10EB7660();

    int Unknown04;
};

class Class_10E9C300 : public Class_10EB7660
{
public:
    Class_10E9C300();

    Class_10C54B70_Member Unknown08;
};

class Class_10C5A160_Y;

// Class_10C56E40 as its header declares it, with the copy constructor and
// assignment the header lacks: a copy takes a reference (Virtual1), and a
// replaced or destroyed handle drops one (Virtual2).
class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C56E40_Field00* P)
    {
        Unknown00 = P;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    ~Class_10C56E40()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }
    Class_10C56E40() : Unknown00(0) {}
    Class_10C56E40(Class_10C5A160_Y*& A);
    Class_10C56E40(const Class_10C56E40& Other)
    {
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10C56E40_Field00* Old = Unknown00;
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
        if (Old)
            Old->Virtual2();
        return *this;
    }

    Class_10C56E40_Field00* Unknown00;
};

// An 8-byte element: an int, then a handle.
struct Struct_10C54A20
{
    int Unknown00;
    Class_10C56E40 Unknown04;
};

class Class_10C54A20
{
public:
    void FUN_10c54a20(int A, int B);

    int Unknown00;
    int Unknown04;
    Struct_10C54A20* Unknown08;
};

// FUNCTION: 0x10C54A20 ?FUN_10c54a20@Class_10C54A20@@QAEXHH@Z
void Class_10C54A20::FUN_10c54a20(int A, int B)
{
    Struct_10C54A20 Temp;
    Temp = Unknown08[A];
    Unknown08[A] = Unknown08[B];
    Unknown08[B] = Temp;
}

// FUNCTION: 0x10C54B70 ??0Class_10E9C300@@QAE@XZ
Class_10E9C300::Class_10E9C300()
{
}

// FUNCTION: 0x10C55320 ?FUN_10c55320@Class_10C55320@@QAE?AVClass_10AB5B20@@XZ
Class_10AB5B20 Class_10C55320::FUN_10c55320()
{
    Unknown58 = Unknown20->Unknown00;
    if (Unknown58 == Unknown20)
        return Class_10AB5B20();
    return Unknown58->Unknown1C;
}

// FUNCTION: 0x10C55360 ?FUN_10c55360@Class_10C55360@@QAE?AVClass_10AB5B20@@XZ
Class_10AB5B20 Class_10C55360::FUN_10c55360()
{
    ++Unknown58;
    if (Unknown58 == Unknown1C.end())
        return Class_10AB5B20();
    return Unknown58->Value;
}
