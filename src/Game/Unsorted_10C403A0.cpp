// Game/Unsorted_10C403A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C56E40_Field00.h"

class Class_10C5A160_Y;

// Game/Class_10C56E40.h copied whole, with the copy constructor the header lacks:
// a copy takes a reference (Virtual1).
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

    Class_10C56E40_Field00* Unknown00;
};

class Class_10C403A0
{
public:
    Class_10C403A0(Class_10C56E40 A, Class_10C56E40 B, int C, int D);

    Class_10C56E40 Unknown00;
    Class_10C56E40 Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10C403A0 ??0Class_10C403A0@@QAE@VClass_10C56E40@@0HH@Z
Class_10C403A0::Class_10C403A0(Class_10C56E40 A, Class_10C56E40 B, int C, int D)
    : Unknown00(A), Unknown04(B), Unknown08(C), Unknown0C(D)
{
}
