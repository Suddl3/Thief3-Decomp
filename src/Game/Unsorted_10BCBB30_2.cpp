// Game/Unsorted_10BCBB30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e91dd0[];

extern void* DAT_10e92118[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    void** Unknown00;
    int Unknown04[15];
};

float FUN_10bcb6e0(void* Obj, int A, int B);

class Class_10E92118 : public Class_10E90D70
{
public:
    Class_10E92118(int A, int B, int C);

    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    float Unknown50;
    int Unknown54;
    unsigned char Unknown58;
    char Unknown59[3];
    unsigned char Unknown5C;
    char Unknown5D[3];
    int Unknown60;
    int Unknown64;
};

// FUNCTION: 0x10BCBC20 ??0Class_10E92118@@QAE@HHH@Z
Class_10E92118::Class_10E92118(int A, int B, int C) : Class_10E90D70(A, B)
{
    Unknown00 = DAT_10e91dd0;
    Unknown40 = 0;
    Unknown44 = 0x67;
    Unknown48 = 0x68;
    Unknown4C = 0x69;
    Unknown50 = 0;
    Unknown54 = C;
    Unknown58 = 0;
    Unknown50 = FUN_10bcb6e0(this, 0x1005c9, 0x1005ca);
    Unknown5C = 0;
    Unknown60 = 0;
    Unknown64 = 0;
    Unknown00 = DAT_10e92118;
}
