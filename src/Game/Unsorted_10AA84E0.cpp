// Game/Unsorted_10AA84E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10d3d2d0(void* A, int B);

void FUN_10d3d990(void* A, int* B);

class Class_10E6C290
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10aa90b0(void* A, int, int);

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    int* Unknown10;
    int Unknown14;
};

// FUNCTION: 0x10AA90B0 ?FUN_10aa90b0@Class_10E6C290@@UAEXPAXHH@Z
void Class_10E6C290::FUN_10aa90b0(void* A, int, int)
{
    FUN_10d3d2d0(A, Unknown08);
    for (int i = 0; i < Unknown08; i++)
        FUN_10d3d990(A, &Unknown10[i]);
    FUN_10d3d2d0(A, Unknown14);
}
