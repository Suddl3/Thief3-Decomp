// Game/Unsorted_10C296E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C299C0_Unknown04
{
public:
    void* FUN_10dbd520();
};

bool FUN_10c29930(void* A, float B, float* C);

class Class_10C299C0
{
public:
    bool FUN_10c299c0(float* A, float B, float C);

    char Unknown00[4];
    Class_10C299C0_Unknown04* Unknown04;
};

// FUNCTION: 0x10C299C0 ?FUN_10c299c0@Class_10C299C0@@QAE_NPAMMM@Z
bool Class_10C299C0::FUN_10c299c0(float* A, float B, float C)
{
    if (!FUN_10c29930(Unknown04->FUN_10dbd520(), B, A))
        return false;
    for (float Y = -C; Y <= C; Y += C)
    {
        for (float X = -C; X <= C; X += C)
        {
            float Vec[3];
            Vec[0] = Y + A[0];
            Vec[1] = X + A[1];
            Vec[2] = A[2];
            if (!FUN_10c29930(Unknown04->FUN_10dbd520(), B, Vec))
                return false;
        }
    }
    return true;
}
