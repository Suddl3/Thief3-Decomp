// Game/Unsorted_10B270D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10F0328C
{
    float Unknown00;
    char Unknown04[0xC];
};

extern Struct_10F0328C DAT_10f0328c[];

class Class_10B27220
{
public:
    void FUN_10b270d0();
    void FUN_10b271d0(float A);

    char Unknown00[8];
    char* Unknown08;
    char Unknown0C[0x28];
    float Unknown34;
    bool Unknown38;
};

// FUNCTION: 0x10B271D0 ?FUN_10b271d0@Class_10B27220@@QAEXM@Z
void Class_10B27220::FUN_10b271d0(float A)
{
    for (int i = 0; i < 4; i++)
    {
        if (Unknown08[i])
        {
            if (i != 0)
            {
                Unknown34 += A;
                if (Unknown34 >= DAT_10f0328c[i].Unknown00 && Unknown38)
                    FUN_10b270d0();
            }
            return;
        }
    }
}
