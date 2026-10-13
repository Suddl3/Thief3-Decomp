// Game/Unsorted_10A3ABD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10924100.h"
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

extern Class_10924100* DAT_10f2c740;

class Class_10A1E620_Inner
{
public:
    char Pad00[0x4];
};

class Class_10A3ABD0_Unknown48
{
public:
    virtual ~Class_10A3ABD0_Unknown48();

    Class_10A1E620_Inner Unknown04;
};

// Copied from include/Game/Class_10E66700.h, with the list it lacks at +0x48.
class Class_10E66700
{
public:
    virtual ~Class_10E66700();
    virtual void UpdateItems(int A) = 0;

    void FUN_10a3abd0(int Index);

    char Pad04[0x44];
    cIntArray Unknown48;
};

// FUNCTION: 0x10A3ABD0 ?FUN_10a3abd0@Class_10E66700@@QAEXH@Z
void Class_10E66700::FUN_10a3abd0(int Index)
{
    Class_10A3ABD0_Unknown48* Item = (Class_10A3ABD0_Unknown48*)Unknown48.Data[Index];
    DAT_10f2c740->FUN_10920a30(Item ? &Item->Unknown04 : 0);
    cIntArray* List = &Unknown48;
    if (Index != List->Count - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = List->Count - Index - 1;
        if (From != To && Count)
            memmove(List->Data + To, List->Data + From, Count * sizeof(int));
    }
    List->SetCount(List->Count - 1);
    delete Item;
}
