// Game/Class_10E959B0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e959b0[];

class Class_10BF7F90;

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    void** Unknown00;
    int Unknown04[15];
};

class Class_10E959B0 : public Class_10E90D70
{
public:
    Class_10E959B0(int A, int B);

    Class_10BF7F90* FUN_10bc4160();

    unsigned char Unknown40;
};

// FUNCTION: 0x10BE1C70 ??0Class_10E959B0@@QAE@HH@Z
Class_10E959B0::Class_10E959B0(int A, int B) : Class_10E90D70(A, B)
{
    Unknown00 = DAT_10e959b0;
    Unknown40 = 0;
    ((Class_10bf7f90*)FUN_10bc4160())->FUN_10bf7f90(0, 1);
}
