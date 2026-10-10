// Game/Unsorted_10BE9A40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

struct Struct_10BE9A40
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10BE9A40
{
public:
    void FUN_10be9a40();

    char Unknown00[4];
    Struct_10BE9A40* Unknown04;
    char Unknown08[0x70];
    float Unknown78;
};

// FUNCTION: 0x10BE9A40 ?FUN_10be9a40@Class_10BE9A40@@QAEXXZ
void Class_10BE9A40::FUN_10be9a40()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x100856)->FUN_10bbdb40();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x100857)->FUN_10bbdb40();
    Unknown78 = FUN_10c00480() + (Min + (Max - Min) * appFrand());
}
