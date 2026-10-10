// Game/Unsorted_1094C710_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E4AA80
{
public:
    virtual void FUN_1094cf80(int A);
    void FUN_1094ca70(int A);
    void FUN_1094b730();
    void FUN_10948e80();
    void FUN_10949060(int A);

    char Unknown04[0x58];
    int Unknown5C;
    int Unknown60;
};

// FUNCTION: 0x1094CF80 ?FUN_1094cf80@Class_10E4AA80@@UAEXH@Z
void Class_10E4AA80::FUN_1094cf80(int A)
{
    if ((Unknown5C & 3) == 0)
    {
        if (Unknown5C & 0x24)
            Unknown60 |= 0x60;
    }
    else
    {
        FUN_1094ca70(0);
        FUN_1094b730();
        FUN_10948e80();
        Unknown60 |= 0x60;
    }
    if (Unknown5C & 0x80)
        FUN_1094b730();
    Unknown5C = 0;
    FUN_10949060(A);
}
