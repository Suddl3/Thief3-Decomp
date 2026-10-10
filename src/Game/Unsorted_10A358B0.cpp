// Game/Unsorted_10A358B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10919ca0
{
public:
    float FUN_10919ca0(int A);
};

class Class_10919C40
{
public:
    float FUN_10919c40(int A);
};

class Class_10A359D0
{
public:
    int FUN_10a358b0();

    char Unknown00[0xD];
    bool Unknown0D;
    char Unknown0E[0x2];
    int Unknown10;
    char Unknown14[0x70];
    Class_10919ca0* Unknown84;
    Class_10919ca0* Unknown88;
};

// FUNCTION: 0x10A358B0 ?FUN_10a358b0@Class_10A359D0@@QAEHXZ
int Class_10A359D0::FUN_10a358b0()
{
    if (Unknown0D)
    {
        float A = Unknown88->FUN_10919ca0(Unknown10);
        return (int)(((Class_10919C40*)Unknown88)->FUN_10919c40(Unknown10) * A);
    }
    float A = Unknown84->FUN_10919ca0(Unknown10);
    return (int)(((Class_10919C40*)Unknown84)->FUN_10919c40(Unknown10) * A);
}
