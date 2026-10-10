// Game/Class_10E935F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e935f0[];

double FUN_10c00480();

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    void** Unknown00;
    int Unknown04[15];
};

class Class_10BD3140 : public Class_10E90D70
{
public:
    Class_10BD3140(int A, int B) : Class_10E90D70(A, B)
    {
        Unknown40 = 0;
    }

    unsigned char Unknown40;
};

class Class_10E935F0 : public Class_10BD3140
{
public:
    Class_10E935F0(int A, int B);

    float Unknown44;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    unsigned char Unknown54;
};

// FUNCTION: 0x10BD3020 ??0Class_10E935F0@@QAE@HH@Z
Class_10E935F0::Class_10E935F0(int A, int B) : Class_10BD3140(A, B)
{
    Unknown00 = DAT_10e935f0;
    Unknown44 = (float)FUN_10c00480();
    Unknown48 = 0;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
}
