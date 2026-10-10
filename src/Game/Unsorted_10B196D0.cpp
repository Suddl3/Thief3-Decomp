// Game/Unsorted_10B196D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AF8020
{
public:
    bool FUN_10af8020(int A);

    char Unknown00[0x1C];
};

class Class_10B196D0
{
public:
    char Unknown00[0x478];
    Class_10AF8020* Unknown478;
    int Unknown47C;
};

struct Struct_10AA3520
{
    char Unknown00[8];
    Class_10B196D0* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B196D0 ?FUN_10b196d0@@YGHH@Z
int __stdcall FUN_10b196d0(int Key)
{
    Class_10B196D0* Owner = DAT_10f35dec->Unknown08;
    int Count = Owner->Unknown47C;
    for (int i = 0; i < Count; i++)
    {
        Class_10AF8020* Item = &Owner->Unknown478[i];
        if (Item->FUN_10af8020(Key))
            return i;
    }
    return -1;
}
