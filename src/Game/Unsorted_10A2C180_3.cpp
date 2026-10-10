// Game/Unsorted_10A2C180_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A2C2A0
{
    void* Unknown00;
    char Unknown04[0x18];
    int Unknown1C;
    char Unknown20[0x5D];
    char Unknown7D;
    char Unknown7E[0x32];
};

class Class_10A2C2F0
{
public:
    void FUN_10a2c2a0(void* A, int* B);

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Struct_10A2C2A0* Unknown10;
};

// FUNCTION: 0x10A2C2A0 ?FUN_10a2c2a0@Class_10A2C2F0@@QAEXPAXPAH@Z
void Class_10A2C2F0::FUN_10a2c2a0(void* A, int* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (Unknown10[i].Unknown00 == A && Unknown10[i].Unknown1C == *B)
        {
            Unknown10[i].Unknown7D = 1;
            return;
        }
    }
}
