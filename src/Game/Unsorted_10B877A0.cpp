// Game/Unsorted_10B877A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
class Class_10B87880
{
public:
    int FUN_10b87880();

    char Unknown00[0x14];
    float Unknown14;
    float Unknown18;
    float Unknown1C;
    float Unknown20;
    float Unknown24;
    float Unknown28;
};

// FUNCTION: 0x10B87880 ?FUN_10b87880@Class_10B87880@@QAEHXZ
int Class_10B87880::FUN_10b87880()
{
    if (Unknown14 * Unknown14 + Unknown18 * Unknown18 + Unknown1C * Unknown1C > 3.9999996e-08f
        || Unknown20 * Unknown20 + Unknown24 * Unknown24 + Unknown28 * Unknown28 > 3.9999996e-08f)
        return 1;
    return 0;
}
