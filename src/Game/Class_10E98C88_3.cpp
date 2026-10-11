// Game/Class_10E98C88_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C16350
{
    char Unknown00[4];
    void* Unknown04;
};

class Class_10E98C88
{
public:
    virtual void FUN_10c16350(int A, void* B, int C, int D);

    int Unknown04;
    char Unknown08[4];
    Struct_10C16350** Unknown0C;
};

// FUNCTION: 0x10C16350 ?FUN_10c16350@Class_10E98C88@@UAEXHPAXHH@Z
void Class_10E98C88::FUN_10c16350(int A, void* B, int C, int D)
{
    if (A == 0x26 && B)
    {
        for (int i = 0; i < Unknown04; i++)
        {
            Struct_10C16350* Entry = Unknown0C[i];
            if (Entry->Unknown04 == B)
                Entry->Unknown04 = 0;
        }
    }
}
