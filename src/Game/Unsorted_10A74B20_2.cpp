// Game/Unsorted_10A74B20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1098E330
{
public:
    int FUN_1098e330(int A, int* B);
};

class Class_10E6BBD0
{
public:
    void FUN_10a74df0(int A);
    void FUN_10a74ec0(int A);
    void FUN_10a75560(int A, bool B);
};

// FUNCTION: 0x10A75560 ?FUN_10a75560@Class_10E6BBD0@@QAEXH_N@Z
void Class_10E6BBD0::FUN_10a75560(int A, bool B)
{
    int Flag = 0;
    if (!(((Class_1098E330*)A)->FUN_1098e330(0x80064b, &Flag) && Flag))
    {
        FUN_10a74df0(A);
        if (B)
            FUN_10a74ec0(A);
    }
}
