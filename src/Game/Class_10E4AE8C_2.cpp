// Game/Class_10E4AE8C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E4AE8C
{
public:
    int FUN_10957000(int Bit);

    char Unknown00[0x298];
    unsigned Unknown298;
};

// FUNCTION: 0x10957000 ?FUN_10957000@Class_10E4AE8C@@QAEHH@Z
int Class_10E4AE8C::FUN_10957000(int Bit)
{
    return (Unknown298 & (1 << Bit)) != 0;
}
