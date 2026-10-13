// Game/Unsorted_10BC0A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10BBF5D0.h"

class Class_10BC0A20_UnknownC0
{
public:
    char Unknown00[0x24];
    cIntArray Unknown24;
};

class Class_10BC0A20
{
public:
    char Unknown00[0xc0];
    Class_10BC0A20_UnknownC0* UnknownC0;
};

class AAIPathPoint;

class Class_10BC0EB0_Unknown08
{
public:
    AAIPathPoint* Unknown00;
};

class Class_10BC0EB0_Field00
{
public:
    int Unknown00;
    char Unknown04[4];
    Class_10BC0EB0_Unknown08* Unknown08;
    char Unknown0C[0xC];
    int Unknown18;
    char Unknown1C[4];
    AAIPathPoint** Unknown20;
    int Unknown24;
    char Unknown28[4];
    AAIPathPoint** Unknown2C;
};

// FUNCTION: 0x10BC0A20 ?LinkBothWays@@YAXPAVClass_10BC0A20@@0@Z
void LinkBothWays(Class_10BC0A20* First, Class_10BC0A20* Second)
{
    Class_10BC0A20_UnknownC0* A = First->UnknownC0;
    Class_10BC0A20_UnknownC0* B = Second->UnknownC0;
    if (A->Unknown24.FindIndex((int)Second) == -1)
    {
        cIntArray& ListA = A->Unknown24;
        int Index = ListA.Count;
        ListA.SetCount(Index + 1);
        ListA.Data[Index] = (int)Second;
    }
    if (B->Unknown24.FindIndex((int)First) == -1)
    {
        cIntArray& ListB = B->Unknown24;
        int Index = ListB.Count;
        ListB.SetCount(Index + 1);
        ListB.Data[Index] = (int)First;
    }
}

// FUNCTION: 0x10BC0EB0 ?FUN_10bc0eb0@Class_10BBF5D0@@QAEXPAVAAIPathPoint@@0@Z
void Class_10BBF5D0::FUN_10bc0eb0(AAIPathPoint* Point, AAIPathPoint* Other)
{
    Class_10BC0EB0_Field00* List = (Class_10BC0EB0_Field00*)Field00;
    if (List->Unknown00 > 0 && (Other == 0 || List->Unknown08->Unknown00 != Other))
    {
        do
        {
            FUN_10bc0150(Point, List->Unknown08->Unknown00);
            List = (Class_10BC0EB0_Field00*)Field00;
        } while (List->Unknown00 > 0);
    }
    List = (Class_10BC0EB0_Field00*)Field00;
    while (List->Unknown18 > 0)
    {
        FUN_10bc0150(Point, *List->Unknown20);
        List = (Class_10BC0EB0_Field00*)Field00;
    }
    List = (Class_10BC0EB0_Field00*)Field00;
    while (List->Unknown24 > 0)
    {
        FUN_10bc0150(Point, *List->Unknown2C);
        List = (Class_10BC0EB0_Field00*)Field00;
    }
}
