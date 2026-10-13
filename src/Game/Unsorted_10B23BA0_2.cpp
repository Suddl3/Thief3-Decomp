// Game/Unsorted_10B23BA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B23EE0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10B23EE0* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e7a8e0[];

class Class_10B23EE0
{
public:
    Class_10B23EE0();

    void** VTable;
};

// FUNCTION: 0x10B23EE0 ??0Class_10B23EE0@@QAE@XZ
Class_10B23EE0::Class_10B23EE0()
{
    VTable = DAT_10e7a8e0;
    DAT_10f46da0->Virtual1(this, 0xb, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x44, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x46, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x61, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x60, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x74, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x7b, -1, -1);
}
