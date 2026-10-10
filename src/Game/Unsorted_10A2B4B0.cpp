// Game/Unsorted_10A2B4B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A2B4B0_Node
{
    int Unknown00;
    unsigned int Unknown04;
    int Unknown08;
};

class Class_10A2B4B0
{
public:
    int* FUN_10a2b4b0(unsigned int* Key, int* Value);
    int* FUN_10a2b2e0(unsigned int* Key, int* Value);

    Struct_10A2B4B0_Node* Unknown00;
    char Unknown04[8];
    int* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A2B4B0 ?FUN_10a2b4b0@Class_10A2B4B0@@QAEPAHPAIPAH@Z
int* Class_10A2B4B0::FUN_10a2b4b0(unsigned int* Key, int* Value)
{
    int Index = Unknown0C[(Unknown10 - 1) & *Key];
    if (Index != -1)
    {
        do
        {
            if (Unknown00[Index].Unknown04 == *Key)
            {
                Unknown00[Index].Unknown08 = *Value;
                return &Unknown00[Index].Unknown08;
            }
            Index = Unknown00[Index].Unknown00;
        } while (Index != -1);
    }
    return FUN_10a2b2e0(Key, Value);
}
