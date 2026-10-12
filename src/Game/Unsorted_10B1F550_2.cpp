// Game/Unsorted_10B1F550_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10B50500.h"

class Class_10CAFD00;

struct Struct_10B7C170;

struct Struct_10D9E5E0_Param;

struct Struct_10B50500;

// Copied whole from include/Game/Class_10D9B090.h, with Unknown4C added in its padding.
class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    bool FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0x44];
    int Unknown4C;
    char Pad50[0x68];
    bool UnknownB8;
};

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B1FF00 ?FUN_10b1ff00@@YA_NHHPAVClass_10B50500@@PAUStruct_10B50500@@@Z
bool FUN_10b1ff00(int A, int B, Class_10B50500* C, Struct_10B50500* D)
{
    cIntArray Arr;
    int Value = FUN_10d9dcb0()->Unknown4C;
    int Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = Value;
    Value = C->Unknown0B0;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = Value;
    bool Result = FUN_10d9dcb0()->FUN_10d9d640(A, B, 15, (Struct_10B7C170*)D, (int)&Arr);
    return Result;
}
