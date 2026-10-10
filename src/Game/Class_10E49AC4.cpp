// Game/Class_10E49AC4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Options
{
public:
    int SetDefaults(int Index);
    unsigned int Load();
};

class Class_10E49AC4 : public Options
{
public:
    void FUN_10ab6e50();

    int Unknown00;
    int Unknown04[21];
    bool Unknown58;
    unsigned char Unknown59;
    unsigned char Unknown5A;
};

// FUNCTION: 0x10AB6E50 ?FUN_10ab6e50@Class_10E49AC4@@QAEXXZ
void Class_10E49AC4::FUN_10ab6e50()
{
    for (int i = 0; i < 21; i++)
        Unknown04[i] = SetDefaults(i);
    unsigned int Flags = Load();
    Unknown59 = (Flags >> 2) & 1;
    Unknown5A = (Flags >> 3) & 1;
    Unknown58 = Flags == 1 || Unknown59 != 0;
}
