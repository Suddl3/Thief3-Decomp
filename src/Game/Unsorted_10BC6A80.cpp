// Game/Unsorted_10BC6A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10AFCF40.h"
#include "Game/Class_10BA9EC0.h"
#include "Game/Class_10C00F30.h"

struct Struct_10BC5560;

struct Struct_10BC6A80_18 {};

struct Struct_10BC6A80_1C {};

void ReleaseSharedInstance();

void DeleteAllItems(Struct_10BC5560* A);

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BC6A80_Unknown04
{
public:
    char Pad00[8];
    Class_10BA9EC0* Unknown08;
    Class_10AA82D0* Unknown0C;
};

class Class_10E90D70
{
public:
    virtual void Virtual0();

    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    Class_10BC6A80_Unknown04* Unknown04;
    char Pad08[0xc];
    bool Unknown14;
    char Pad15[0x3];
    Struct_10BC6A80_18* Unknown18;
    Struct_10BC6A80_1C* Unknown1C;
    char Pad20[0x8];
    cIntArray Unknown28;
    cIntArray Unknown34;
};

// FUNCTION: 0x10BC6A80 ??1Class_10E90D70@@QAE@XZ
Class_10E90D70::~Class_10E90D70()
{
    Unknown14 = false;
    ReleaseSharedInstance();
    DeleteAllItems((Struct_10BC5560*)&Unknown28);
    DeleteAllItems((Struct_10BC5560*)&Unknown34);
    if (Unknown18)
    {
        Class_10BA9EC0* Owner = Unknown04->Unknown08;
        ((Class_10C00F30*)Owner->FUN_10ba9ec0())->ClearMatching((int)Unknown18);
        delete Unknown18;
        Unknown18 = 0;
    }
    if (Unknown04->Unknown0C->GetLinkedObject())
    {
        if (((Class_10AFCF40*)Unknown04->Unknown0C->GetLinkedObject())->FUN_10afcf40() == (int)this)
            ((Class_10bf7f90*)Unknown04->Unknown0C)->FUN_10bf7f90(0, 0);
    }
    if (Unknown1C)
        delete Unknown1C;
}
