// Game/Unsorted_10BB4520_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10D38640;

class Class_10D38640
{
public:
    Struct_10D38640* FUN_10d38640();
};

float FUN_10c057a0(Struct_10D38640* Param1, int Param2);

float FUN_10c05810(Struct_10D38640* Param1, int Param2);

char FUN_10c05ab0(Struct_10D38640* Param1, int Param2, float Param3);

// FUNCTION: 0x10BB4520 ?FUN_10bb4520@@YG_NPAVClass_10D38640@@HMM@Z
bool __stdcall FUN_10bb4520(Class_10D38640* Param1, int Param2, float Param3, float Param4)
{
    if (!(FUN_10c057a0(Param1->FUN_10d38640(), 2) < Param3))
    {
        if (!(FUN_10c05810(Param1->FUN_10d38640(), 2) > Param4))
        {
            return FUN_10c05ab0(Param1->FUN_10d38640(), Param2, 3.402823466e+38f) == 1;
        }
    }
    return false;
}
