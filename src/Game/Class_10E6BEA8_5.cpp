// Game/Class_10E6BEA8_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cIntArray.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10E6BEA8.h"

// The argument: the function reads its field at 0x14.
class Class_10A7DC00_Arg
{
public:
    BYTE Unknown00[0x14];
    INT Unknown14;
};

// The local: a Class_10AF4BB0 whose destructor body (the element removal) is inline;
// its out-of-line copy (0x1096EF10) is what the unwind funclet calls.
class Class_1096EF10 : public Class_10AF4BB0
{
public:
    ~Class_1096EF10() { FUN_10d660b0(); FUN_10af3bd0(0, Unknown04, sizeof(UObject*)); }
    void FUN_10d660b0();
    int FUN_10af4cc0(int A, int B);

    // Adds Item unless the array holds it already.
    void AddUnique(int Item)
    {
        for (int i = 0; i < Unknown04; i++)
        {
            if (((int*)Unknown00)[i] == Item)
                return;
        }
        int Index = FUN_10af4cc0(4, 1);
        ((int*)Unknown00)[Index] = Item;
    }
};

void FUN_109dfae0(Class_10A7DC00_Arg* Arg, Class_10AF4BB0* Names);

// FUNCTION: 0x10A7DC00 ?FUN_10a7dc00@Class_10E6BEA8@@UAEXPAVClass_10A7DC00_Arg@@@Z
void Class_10E6BEA8::FUN_10a7dc00(Class_10A7DC00_Arg* Arg)
{
    Class_1096EF10 Names;
    if (Arg->Unknown14 == 0)
    {
        for (int i = 0; i < Unknown04.Count; i++)
        {
            int Item = Unknown04.Data[i];
            if (Item != 0 && (((UObject*)Item)->ObjectFlags & RF_Transient) == 0)
            {
                Names.AddUnique(Item);
            }
        }
    }
    FUN_109dfae0(Arg, &Names);
    if (Arg->Unknown14 != 0)
    {
        for (int i = 0; i < Names.Unknown04; i++)
        {
            int Element = ((int*)Names.Unknown00)[i];
            FUN_10a7dbb0(Element);
        }
    }
}
