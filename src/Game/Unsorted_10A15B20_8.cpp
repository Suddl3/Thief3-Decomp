// Game/Unsorted_10A15B20_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15B20_Unknown18.h"

unsigned int HashBytes(const void* Data, int Length);

struct Struct_10A15CB0_Value
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10A15CB0_Unknown14
{
public:
    char Unknown00[0x4];
    Struct_10A15CB0_Value Value;
    Class_10A15CB0_Unknown14* Next;
};

// Copied whole from include/Game/Class_10A15B20.h with the fields this method reads added in place of its pad.
class Class_10A15B20
{
public:
    bool FUN_10a15b20(int* A);
    bool FUN_10a15cb0(int* A, Struct_10A15CB0_Value* Out);
    void Remove(int* A);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10A15CB0_Unknown14** Unknown14;
    Class_10A15B20_Unknown18 Unknown18;
};

// FUNCTION: 0x10A15CB0 ?FUN_10a15cb0@Class_10A15B20@@QAE_NPAHPAUStruct_10A15CB0_Value@@@Z
bool Class_10A15B20::FUN_10a15cb0(int* A, Struct_10A15CB0_Value* Out)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(A, &Data, &Length);
    Class_10A15CB0_Unknown14** Table = Unknown14;
    if (!Table)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10A15CB0_Unknown14* Node = Table[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(A, (Class_10A15B20_Unknown14*)Node) == 0)
        {
            *Out = Node->Value;
            return true;
        }
    }
    return false;
}
