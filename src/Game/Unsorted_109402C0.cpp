// Game/Unsorted_109402C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10940830
{
public:
    float FUN_10940830(float Scale);

    char Unknown00[0x354];
    float* Unknown354;
    unsigned int Unknown358;
};

// FUNCTION: 0x10940830 ?FUN_10940830@Class_10940830@@QAEMM@Z
float Class_10940830::FUN_10940830(float Scale)
{
    unsigned int Count = Unknown358;
    if (Count <= 0)
        return Scale;
    unsigned int Last = Count - 1;
    unsigned int Index = (unsigned int)((float)Last * Scale);
    if (Index >= Count)
        Index = Last;
    return Unknown354[Index];
}
