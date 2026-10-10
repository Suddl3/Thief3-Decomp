// Game/Unsorted_1095AFE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1095B070
{
public:
    int FUN_1095b070();

    float Unknown00;
    char Unknown04[4];
    int* Unknown08;
    int Unknown0C;
    float Unknown10;
};

class TimeManager
{
public:
    static TimeManager* Instance();
    bool IsPaused();
    double GetGameTime();
};

double FUN_1095af80();

class Class_1095B040
{
public:
    void FUN_1095b040(int A);

    float Unknown00;
};

void FUN_1092bdb0(void* Block);

struct Struct_1095AFE0_Unknown04 {};

struct Struct_1095AFE0_Unknown08 {};

class Class_1095AFE0
{
public:
    void FUN_1095afe0();

    char Unknown00[4];
    Struct_1095AFE0_Unknown04* Unknown04;
    Struct_1095AFE0_Unknown08** Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x1095AFE0 ?FUN_1095afe0@Class_1095AFE0@@QAEXXZ
void Class_1095AFE0::FUN_1095afe0()
{
    for (int i = 0; i < Unknown0C; i++)
        FUN_1092bdb0(Unknown08[i]);
    if (Unknown04)
        delete Unknown04;
    if (Unknown08)
        delete Unknown08;
    Unknown0C = 0;
    Unknown04 = 0;
    Unknown08 = 0;
}

// FUNCTION: 0x1095B040 ?FUN_1095b040@Class_1095B040@@QAEXH@Z
void Class_1095B040::FUN_1095b040(int A)
{
    if (TimeManager::Instance()->IsPaused())
        Unknown00 = FUN_1095af80();
    else
        Unknown00 = TimeManager::Instance()->GetGameTime();
}

// FUNCTION: 0x1095B070 ?FUN_1095b070@Class_1095B070@@QAEHXZ
int Class_1095B070::FUN_1095b070()
{
    if (!Unknown08)
        return 0;
    return Unknown08[(int)(Unknown10 * Unknown00) % Unknown0C];
}
