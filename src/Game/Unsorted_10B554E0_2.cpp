// Game/Unsorted_10B554E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10DD85D0
{
public:
    void FUN_10dd85d0(int A, float* B, float* C);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x15C];
    Class_10DD85D0* Unknown15C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Static_10B3AC60
{
    int FUN_10b3ac90();
};

Static_10B3AC60* FUN_10b3ac60();

// FUNCTION: 0x10B55570 ?FUN_10b55570@@YAHXZ
int FUN_10b55570()
{
    float X;
    float Y;
    int Handle = FUN_10b3ac60()->FUN_10b3ac90();
    DAT_10f3a3d8->Unknown15C->FUN_10dd85d0(Handle, &X, &Y);
    return (int)Y;
}

// FUNCTION: 0x10B555B0 ?FUN_10b555b0@@YAHXZ
int FUN_10b555b0()
{
    float X;
    float Y;
    int Handle = FUN_10b3ac60()->FUN_10b3ac90();
    DAT_10f3a3d8->Unknown15C->FUN_10dd85d0(Handle, &X, &Y);
    return (int)X;
}
