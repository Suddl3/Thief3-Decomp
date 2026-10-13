// Game/Class_10A15B20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A15B20_Unknown14.h"
#include "Game/Class_10A15B20_Unknown18.h"
#include "Game/Class_10A15C30_Node.h"

class Class_10A15B20_Unknown14;

class Class_10A15B20_Unknown18;

unsigned int HashBytes(const void* Data, int Length);

// Copied from include/Game/Class_10A15B20.h with the fields this method reads added in place of its pad.
class Class_10A15B20
{
public:
    bool FUN_10a15b20(int* A);
    void Remove(int* A);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10A15B20_Unknown14** Unknown14;
    Class_10A15B20_Unknown18 Unknown18;
};

// FUNCTION: 0x10A15B20 ?FUN_10a15b20@Class_10A15B20@@QAE_NPAH@Z
bool Class_10A15B20::FUN_10a15b20(int* A)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(A, &Data, &Length);
    Class_10A15B20_Unknown14** Table = Unknown14;
    if (!Table)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10A15B20_Unknown14* Node = Table[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(A, Node) == 0)
            return true;
    }
    return false;
}
