// Game/Unsorted_10A84040_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10d3d2d0(void* Stream, int Value);

class Class_10A84610_Unknown10
{
public:
    virtual void Virtual0();
    virtual int Virtual1();
    virtual void Virtual2(void* Stream, int A, int B);
};

class Class_10E6C364
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10a845a0(void* Stream, int A, int B);

    int Unknown04;
    int Unknown08;
    char Unknown0C[4];
    Class_10A84610_Unknown10** Unknown10;
};

// FUNCTION: 0x10A845A0 ?FUN_10a845a0@Class_10E6C364@@UAEXPAXHH@Z
void Class_10E6C364::FUN_10a845a0(void* Stream, int A, int B)
{
    FUN_10d3d2d0(Stream, Unknown04);
    FUN_10d3d2d0(Stream, Unknown08);
    for (int i = 0; i < Unknown08; i++)
    {
        FUN_10d3d2d0(Stream, Unknown10[i]->Virtual1());
        Unknown10[i]->Virtual2(Stream, A, B);
    }
}
