// Game/Unsorted_10B3AE00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B22020
{
public:
    char Unknown00[0x54E];
    bool Unknown54E;
};

struct Struct_10B19300_Param;

class Class_10B19300
{
public:
    void FUN_10b19300(Struct_10B19300_Param* A, float B);
    void FUN_10b19460(Class_10B22020* A);
};

Class_10B19300* FUN_10b190e0();

struct Static_10B18D00
{
    void FUN_10b18d20(Class_10B22020* A);
};

Static_10B18D00* FUN_10b18d00();

int FUN_10b1dbf0();

// FUNCTION: 0x10B3AE00 ?FUN_10b3ae00@@YGXPAVClass_10B22020@@@Z
void __stdcall FUN_10b3ae00(Class_10B22020* A)
{
    if (!FUN_10b1dbf0() && A->Unknown54E != true)
    {
        FUN_10b190e0()->FUN_10b19460(A);
        return;
    }
    FUN_10b18d00()->FUN_10b18d20(A);
    FUN_10b190e0()->FUN_10b19300((Struct_10B19300_Param*)A, 1.0f);
}
