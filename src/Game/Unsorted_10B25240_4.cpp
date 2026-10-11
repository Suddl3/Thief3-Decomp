// Game/Unsorted_10B25240_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B255F0.h"
#include "Game/Class_10B25010_Member.h"

class Class_10B1B8A0_Arg;

class FArchive;

struct Struct_10B1B8A0_Item
{
    int Unknown00;
    int Count;
    int Unknown08;
};

struct Struct_10B1B8A0_List
{
    int Count;
    int Unknown04;
    Struct_10B1B8A0_Item* Data;

    int Num() const { return Count; }
    Struct_10B1B8A0_Item& operator[](int Index) const { return Data[Index]; }
};

class Class_10B1B8A0
{
public:
    Class_10B1B8A0();
    ~Class_10B1B8A0();

    void FUN_10b1a400(FArchive& Ar);
    void FUN_10b1a840();
    void FUN_10b1aba0();
    void FUN_10b1b220(int p1, int p2);
    void FUN_10b1b8a0(Class_10B1B8A0_Arg* p1);
    void FUN_10b1abd0(int A);
    void FUN_10b1ac30();
    void FUN_10b1b310();
    void FUN_10b1b8a0(int A);
    bool FUN_10b1b7f0(int A);

    char Unknown00[4];
    Struct_10B1B8A0_List ListA;
    Struct_10B1B8A0_List ListB;
    Class_10B25010_Member Unknown1C;
    char Pad28[0x3c];
};

Class_10B1B8A0* FUN_10b1b600();

// FUNCTION: 0x10B255F0 ?FUN_10b255f0@Class_10B255F0@@QAEHXZ
int Class_10B255F0::FUN_10b255f0()
{
    int Result = 1;
    int Index = 0;
    if (FUN_10b1b600()->ListB.Num() > 0)
    {
        do
        {
            if (FUN_10b1b600()->ListB[Index].Count > 0 && FUN_10b1b600()->ListB[Index].Unknown00 != 0)
                Result++;
            Index++;
        } while (Index < FUN_10b1b600()->ListB.Num());
    }
    Index = 0;
    if (FUN_10b1b600()->ListA.Num() > 0)
    {
        do
        {
            if (FUN_10b1b600()->ListA[Index].Count > 0 && FUN_10b1b600()->ListA[Index].Unknown00 != 0)
                Result++;
            Index++;
        } while (Index < FUN_10b1b600()->ListA.Num());
    }
    return Result;
}
