// Game/Unsorted_10BDF0D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e95050[];

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BC4160
{
public:
    Class_10bf7f90* FUN_10bc4160();
};

class Class_10E90D70 : public Class_10BC4160
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    void** Unknown00;
    int Unknown04[15];
};

class Class_10E95050 : public Class_10E90D70
{
public:
    Class_10E95050(int A, int B);

    int Unknown40;
    int Unknown44;
};

// FUNCTION: 0x10BDF0D0 ??0Class_10E95050@@QAE@HH@Z
Class_10E95050::Class_10E95050(int A, int B)
    : Class_10E90D70(A, B)
{
    Unknown00 = DAT_10e95050;
    Unknown40 = 0;
    Unknown44 = 0;
    FUN_10bc4160()->FUN_10bf7f90(0, 1);
}
