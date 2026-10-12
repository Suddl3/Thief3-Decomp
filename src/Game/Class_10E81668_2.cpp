// Game/Class_10E81668_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e81668[];

class Class_10E7E4E0
{
public:
    Class_10E7E4E0* FUN_10b3acb0();

    void** Unknown00;
    char Unknown04[0x0C];
};

class Class_10E81668 : public Class_10E7E4E0
{
public:
    Class_10E81668* Construct();

    char Unknown10[0x18];
    char Unknown28;
    char Unknown29[0x0B];
    float Unknown34;
    char Unknown38;
    char Unknown39[0x17];
    int Unknown50[3];
};

// FUNCTION: 0x10B4FF00 ?Construct@Class_10E81668@@QAEPAV1@XZ
Class_10E81668* Class_10E81668::Construct()
{
    FUN_10b3acb0();
    Unknown00 = DAT_10e81668;
    Unknown28 = 0;
    Unknown34 = 0.66f;
    Unknown38 = 0;
    for (int i = 0; i < 3; i++)
        Unknown50[i] = 0;
    return this;
}
