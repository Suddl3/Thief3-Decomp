// Game/Unsorted_10C50F00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The listener interface DAT_10f46da0 registers (slot 1) for event codes.
class Class_10E5B578
{
public:
    virtual void FUN_10c4e650(int Code, int A, int* B, int C) = 0;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* Listener, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10C50EC0
{
public:
    Class_10C50EC0() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10C50EC0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10BFBD70();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10C4E8D0
{
public:
    Class_10C4E8D0() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10C4E8D0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10C4EDA0
{
public:
    Class_10C4EDA0() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10C4EDA0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10C4E880_Primary
{
public:
    virtual void FUN_10c51600() = 0;
};

class Class_10C4E880 : public Class_10C4E880_Primary, public Class_10E5B578
{
public:
    Class_10C4E880();

    virtual void FUN_10c51600();
    virtual void FUN_10c4e650(int Code, int A, int* B, int C);

    Class_10C50EC0 Unknown08;
    Class_10BFBD70 Unknown14;
    float Unknown20;
    int Unknown24;
    Class_10C4E8D0 Unknown28;
    int Unknown34;
    Class_10C4EDA0 Unknown38;
};

// FUNCTION: 0x10C50F00 ??0Class_10C4E880@@QAE@XZ
Class_10C4E880::Class_10C4E880()
    : Unknown20(0.1f), Unknown24(20), Unknown34(0)
{
    DAT_10f46da0->Virtual1(this, 7, -1, -1);
    DAT_10f46da0->Virtual1(this, 90, -1, -1);
}
