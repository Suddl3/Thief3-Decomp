// Game/Unsorted_10BC0150_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Game/Class_10BBF5D0.h"
#include "Game/cIntArray.h"

// The parameter's class of FUN_10bbf710, as the symbol table names it.
class Class_10BBF710_Param;

void __cdecl FUN_10bbf710(Class_10BBF710_Param* A);

// Game/Class_10C25770.h copied whole, with the cIntArray base it derives from
// (the RemoveAt the target calls is cIntArray's).
class Class_10C25770 : public cIntArray
{
public:
    int IndexOf(int* Value);
};

// The lists the path point keeps, pointed at by Class_10BBF5D0::Field00.
class Class_10BC0150_Field00
{
public:
    Class_10C25770 Unknown00;
    Class_10C25770 Unknown0C;
    Class_10C25770 Unknown18;
    Class_10C25770 Unknown24;
};

// FUNCTION: 0x10BC0150 ?FUN_10bc0150@Class_10BBF5D0@@QAEXPAVAAIPathPoint@@0@Z
void Class_10BBF5D0::FUN_10bc0150(AAIPathPoint* Point, AAIPathPoint* Other)
{
    if (Point == Other)
        return;

    if (!Point->IsA(AAIPathPoint::StaticClass()))
        return;

    if (!Other->IsA(AAIPathPoint::StaticClass()))
        return;

    Class_10BC0150_Field00* Owner = (Class_10BC0150_Field00*)Field00;
    int Key = (int)Other;
    int Index = Owner->Unknown00.IndexOf(&Key);
    if (Index != -1)
    {
        Owner->Unknown00.RemoveAt(Index);

        Class_10BC0150_Field00* OtherOwner = (Class_10BC0150_Field00*)Other->pad.Field00;
        Key = (int)Point;
        Index = OtherOwner->Unknown0C.IndexOf(&Key);
        if (Index != -1)
            OtherOwner->Unknown0C.RemoveAt(Index);
    }

    Owner = (Class_10BC0150_Field00*)Field00;
    Key = (int)Other;
    Index = Owner->Unknown18.IndexOf(&Key);
    if (Index != -1)
    {
        Owner->Unknown18.RemoveAt(Index);

        Class_10BC0150_Field00* OtherOwner = (Class_10BC0150_Field00*)Other->pad.Field00;
        Key = (int)Point;
        Index = OtherOwner->Unknown18.IndexOf(&Key);
        if (Index != -1)
        {
            OtherOwner->Unknown18.RemoveAt(Index);

            if (Other->Virtual94() == 7)
                FUN_10bbf710((Class_10BBF710_Param*)Point);
            else if (Point->Virtual94() == 7)
                FUN_10bbf710((Class_10BBF710_Param*)Other);
        }
        return;
    }

    Key = (int)Other;
    Index = Owner->Unknown24.IndexOf(&Key);
    if (Index != -1)
    {
        Owner->Unknown24.RemoveAt(Index);

        Class_10BC0150_Field00* OtherOwner = (Class_10BC0150_Field00*)Other->pad.Field00;
        Key = (int)Point;
        Index = OtherOwner->Unknown24.IndexOf(&Key);
        if (Index != -1)
            OtherOwner->Unknown24.RemoveAt(Index);
    }
}
