// Game/Unsorted_10934DE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109242E0
{
public:
    char Unknown00[8];
    unsigned int Unknown08;
};

extern Class_109242E0* DAT_10f319a0;

// Ion Storm's memory manager (0x10905AA0): the allocation happens inside a
// scope of it (slots 8 and 9).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

void __stdcall FUN_10d6b575(int A, int B, int C, unsigned int D, int E, int* F, int G, int H);

class Class_10934DE0
{
public:
    void FUN_10934de0();

    int Unknown00;
};

// FUNCTION: 0x10934DE0 ?FUN_10934de0@Class_10934DE0@@QAEXXZ
void Class_10934DE0::FUN_10934de0()
{
    unsigned int Length = DAT_10f319a0->Unknown08;
    FUN_10905aa0()->Virtual8(0, 0);
    int Rect[4];
    Rect[2] = 0x80;
    Rect[3] = 0x80;
    Rect[0] = 0;
    Rect[1] = 0;
    FUN_10d6b575(Unknown00, 0, 0, Length, 0, Rect, 1, 0);
    FUN_10905aa0()->Virtual9();
}
