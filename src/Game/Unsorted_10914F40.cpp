// Game/Unsorted_10914F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10C49740.h"

class Class_10914D60
{
public:
    unsigned char FUN_10914d60();
    void FUN_109152e0(int A, Class_109081E0& B, int C);
    void FUN_10915160(int A, Class_109081E0& B, int C);

    char Unknown00[0x8];
    unsigned char Field08;
    char Unknown09[0x3];
    Class_10C49740 Unknown0C;
};

struct Group_10BA14C0;

struct Struct_10C32C30;

struct Entry_10C32C30
{
public:
    union
    {
        Entry_10C32C30* Next;
        Struct_10C32C30* Unknown00;
        int Count;
    };
    union
    {
        Entry_10C32C30* Prev;
        int Unknown04;
    };
    Group_10BA14C0* Data;

    void FUN_10916440(Class_109081E0& B, int C);
};

extern "C" char* _strupr(char* String);

// FUNCTION: 0x10915160 ?FUN_10915160@Class_10914D60@@QAEXHAAVClass_109081E0@@H@Z
void Class_10914D60::FUN_10915160(int A, Class_109081E0& B, int C)
{
    Class_109081E0 Name(*(const Class_109081E0*)A);
    if (Name.Unknown00)
    {
        _strupr(Name.Unknown00);
    }
    Entry_10C32C30* Found = 0;
    Unknown0C.FUN_10c49740((int*)&Name, &Found);
    if (Found)
    {
        Found->FUN_10916440(B, C);
    }
}
