// Game/Unsorted_10BE4030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

float appFrand();

double FUN_10c00480();

class Class_10BBDB40
{
public:
    float FUN_10bbdb40();
};

class Class_10DBD510
{
public:
    Class_10BBDB40* FUN_10dbd510(int Id);
};

struct Struct_10BE4030
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10BE4030
{
public:
    void FUN_10be4030();

    char Unknown00[4];
    Struct_10BE4030* Unknown04;
    char Unknown08[0x38];
    float Unknown40;
};

// FUNCTION: 0x10BE4030 ?FUN_10be4030@Class_10BE4030@@QAEXXZ
void Class_10BE4030::FUN_10be4030()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x10024a)->FUN_10bbdb40();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x10024b)->FUN_10bbdb40();
    float Value = Min + (Max - Min) * appFrand();
    Unknown40 = FUN_10c00480() + Value;
}
