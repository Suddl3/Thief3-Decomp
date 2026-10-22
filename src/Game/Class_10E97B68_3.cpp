// Game/Class_10E97B68_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10A0C5F0.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10C07220.h"

class Class_10C07690Arg
{
public:
    char Unknown00[0x78];
    unsigned char Flags78;
};

class Class_10C06F80;

int FUN_10c06f80(Class_10C06F80* Obj);

struct PopulationEventInfo
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10C06FF0
{
    int Unknown00;
    char Unknown04[4];
    Class_10C07690Arg** Unknown08;
};

class Class_10E97B68
{
public:
    virtual void FUN_10c07960(int Event, int A, int B, int C);
    virtual ~Class_10E97B68();
    bool FUN_10c06ff0(Class_10C07690Arg* Actor, int* Group, int* Index);
    void AddIfMissing(Class_10C07690Arg* Actor, int Group);

    int Unknown04;
    cIntArray Groups[5];
    short Counts[6];
    cIntArray Unknown50;
    char Pad5C[0xC];
    cIntArray Unknown68[5];
    int UnknownA4;
};

// FUNCTION: 0x10C06FF0 ?FUN_10c06ff0@Class_10E97B68@@QAE_NPAVClass_10C07690Arg@@PAH1@Z
bool Class_10E97B68::FUN_10c06ff0(Class_10C07690Arg* A, int* B, int* C)
{
    for (*B = 0; *B < 5; ++*B)
    {
        Struct_10C06FF0* Entry = (Struct_10C06FF0*)&Groups[*B];
        int Count = Entry->Unknown00;
        for (*C = 0; *C < Count; ++*C)
        {
            if (Entry->Unknown08[*C] == A)
                return true;
        }
    }
    *C = -1;
    return false;
}

// FUNCTION: 0x10C07960 ?FUN_10c07960@Class_10E97B68@@UAEXHHHH@Z
void Class_10E97B68::FUN_10c07960(int Event, int A, int B, int C)
{
    switch (Event)
    {
    case 34:
        {
            Class_10C07690Arg* Actor = (Class_10C07690Arg*)A;
            int Group;
            int Index;
            if (Actor->Flags78 & 4)
            {
                int Kind = ((PopulationEventInfo*)B)->Unknown08;
                if ((Kind == 1 || Kind == 2) && ((PopulationEventInfo*)C)->Unknown04 == 0)
                {
                    if (FUN_10c06ff0(Actor, &Group, &Index))
                        --Counts[Group];
                }
            }
        }
        break;
    case 38:
        {
            Class_10C07690Arg* Actor = (Class_10C07690Arg*)A;
            int GroupIndex;
            int Index;
            if ((Actor->Flags78 & 4) && FUN_10c06ff0(Actor, &GroupIndex, &Index))
            {
                unsigned char Counted = (unsigned char)FUN_10c06f80((Class_10C06F80*)Actor);
                if (Counted) --Counts[GroupIndex];
                ((Class_10A0C5F0*)&Groups[GroupIndex])->FUN_10a0c5f0(Index);
            }
        }
        break;
    case 37:
        {
            Class_10C07690Arg* Actor = (Class_10C07690Arg*)A;
            unsigned char CityGroup;
            if ((Actor->Flags78 & 4) && ((Class_10971570*)Actor)->FUN_10971570(0x200084B, (bool*)&CityGroup))
                AddIfMissing(Actor, CityGroup);
        }
        break;
    case 1:
        ((Class_10C07220*)this)->FUN_10c07220((Class_10C070C0*)A);
        break;
    }
}
