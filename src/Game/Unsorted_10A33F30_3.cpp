// Game/Unsorted_10A33F30_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34510_Field18.h"

unsigned int HashBytes(const void* Data, int Length);

class Class_10A34510_Node
{
public:
    __int64 Key;
    char Unknown08[0x8];
    int Value;
    Class_10A34510_Node* Next;
};

class Class_10A345C0
{
public:
    unsigned int FUN_10a34420(__int64* Key, int* Value);
    unsigned int FUN_10a34510(__int64* Key, int* Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    Class_10A34510_Node** Unknown14;
    Class_10A34510_Field18 Unknown18;
};

// FUNCTION: 0x10A34510 ?FUN_10a34510@Class_10A345C0@@QAEIPA_JPAH@Z
unsigned int Class_10A345C0::FUN_10a34510(__int64* Key, int* Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (!Unknown14)
        return (unsigned int)-1;
    for (Class_10A34510_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, &Node->Key) == 0)
        {
            Node->Value = *Value;
            return Index;
        }
    }
    return FUN_10a34420(Key, Value);
}
