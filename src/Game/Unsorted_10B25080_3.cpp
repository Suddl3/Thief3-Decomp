// Game/Unsorted_10B25080_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B251B0.h"
#include "Game/Struct_10B1B8A0_Item.h"

class FArchive;

class Class_10B1B8A0_Arg;

// Copied whole from include/Game/Struct_10B1B8A0_List.h with the Num() and operator[] accessors this method calls added.
struct Struct_10B1B8A0_List
{
    int Count;
    int Unknown04;
    Struct_10B1B8A0_Item* Data;

    int Num() const { return Count; }
    Struct_10B1B8A0_Item& operator[](int Index) const { return Data[Index]; }
};

// Copied whole from include/Game/Class_10B1B8A0.h; the field at 0x1C is the list this method reads
// (Num() and operator[]), so it is typed Struct_10B1B8A0_List here instead of Class_10B25010_Member.
class Class_10B1B8A0
{
public:
    Class_10B1B8A0();
    ~Class_10B1B8A0();

    void FUN_10b1a400(FArchive& Ar);
    void FUN_10b1a840();
    void EmptyArrays();
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
    Struct_10B1B8A0_List Unknown1C;
    char Pad28[0x3c];
};

Class_10B1B8A0* FUN_10b1b600();

// FUNCTION: 0x10B25100 ?FUN_10b25100@Class_10B251B0@@QAEHXZ
int Class_10B251B0::FUN_10b25100()
{
    if (Unknown2C < FUN_10b1b600()->Unknown1C.Num() - 1)
    {
        for (int Index = Unknown2C + 1; Index < FUN_10b1b600()->Unknown1C.Num(); Index++)
        {
            if (FUN_10b1b600()->Unknown1C[Index].Count > 0)
                return Index;
        }
    }
    for (int Index = 0; Index < Unknown2C; Index++)
    {
        if (FUN_10b1b600()->Unknown1C[Index].Count > 0)
            return Index;
    }
    return 0;
}
