// Game/SoundSimulator_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3F110.h"
#include "Game/Class_10C54AF0_Unknown00.h"

class Class_10C56E40
{
public:
    Class_10C54AF0_Unknown00* Unknown00;

    Class_10C56E40(Class_10C54AF0_Unknown00* Other)
    {
        Unknown00 = Other;
        if (Unknown00)
        {
            Unknown00->Virtual1();
        }
    }

    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10C54AF0_Unknown00* Old = Unknown00;
        Unknown00 = Other.Unknown00;
        if (Unknown00)
        {
            Unknown00->Virtual1();
        }
        if (Old)
        {
            Old->Virtual2();
        }
        return *this;
    }

    ~Class_10C56E40()
    {
        if (Unknown00)
        {
            Unknown00->Virtual2();
        }
    }
};

Class_10C3F110* GetCadenceManager();

class SoundSimulator
{
public:
    virtual void FUN_10c548e0(Class_10C56E40 New);

    char Unknown04[0x24];
    Class_10C56E40 Unknown28;
};

// FUNCTION: 0x10C548E0 ?FUN_10c548e0@SoundSimulator@@UAEXVClass_10C56E40@@@Z
void SoundSimulator::FUN_10c548e0(Class_10C56E40 New)
{
    Unknown28 = New;
    Class_10C54AF0_Unknown00* Current = Unknown28.Unknown00;
    if (Current)
    {
        int Value = Current->Virtual3();
        GetCadenceManager()->Virtual2(Value);
    }
}
