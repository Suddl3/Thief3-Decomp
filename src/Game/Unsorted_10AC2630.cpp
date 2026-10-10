// Game/Unsorted_10AC2630.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6F5F0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_10ac2b30(int A, Class_10E6F5F0* B);
    virtual void Virtual5(int A, bool B, float C);

    bool FUN_10ac1180(Class_10E6F5F0* A, int* B, bool* C, float* D);
    void FUN_10ac2a80(Class_10E6F5F0* A);
};

// FUNCTION: 0x10AC2B30 ?FUN_10ac2b30@Class_10E6F5F0@@UAEXHPAV1@@Z
void Class_10E6F5F0::FUN_10ac2b30(int A, Class_10E6F5F0* B)
{
    int C = -1;
    bool D = false;
    float E = -1.0f;
    if (FUN_10ac1180(B, &C, &D, &E))
    {
        FUN_10ac2a80(B);
        B->Virtual5(C, D, E);
    }
}
