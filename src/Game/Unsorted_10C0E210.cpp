// Game/Unsorted_10C0E210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10BFBD70();

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E97CB4;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E97CB4* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E97CB4
{
public:
    Class_10E97CB4();

    virtual ~Class_10E97CB4();

    Class_10BFBD70 Unknown04;
    Class_10BFBD70 Unknown10;
};

// FUNCTION: 0x10C0E4A0 ??0Class_10E97CB4@@QAE@XZ
Class_10E97CB4::Class_10E97CB4()
{
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}
