// Game/Unsorted_10B1ABD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

class FString
{
public:
    FString(const char* In);
    ~FString();

    char Unknown00[0xc];
};

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

class Class_10971570
{
public:
    int FUN_10971570(int Id, bool* Out);
};

class Class_1098E330
{
public:
    int FUN_1098e330(int Id, int* Out);
};

class Class_10B1B8A0_Arg
{
public:
    char Pad00[0xe8];
    Class_10971570* Unknown_e8;
    int Unknown_ec;
};

// Game/Class_10B1B8A0.h declares FUN_10b1b220 but not the two methods below: a copy with them.
class Class_10B1B8A0
{
public:
    void FUN_10b1b220(int p1, int p2);
    void FUN_10b1b660(FString* Text, int p1);
    void FUN_10b1aa50(int p1, int p2);
};

// FUNCTION: 0x10B1B220 ?FUN_10b1b220@Class_10B1B8A0@@QAEXHH@Z
void Class_10B1B8A0::FUN_10b1b220(int p1, int p2)
{
    Class_10B1B8A0_Arg* Arg = (Class_10B1B8A0_Arg*)p1;
    Class_10971570* Sub;
    if (Arg->Unknown_ec == 0)
        Sub = 0;
    else
        Sub = Arg->Unknown_e8;
    unsigned char Mode = 0;
    Sub->FUN_10971570(0x20000b5, (bool*)&Mode);
    if (Mode == 4 || Mode == 7)
        return;
    if (Mode == 3)
    {
        FName Name;
        if (((Class_1098E330*)Sub)->FUN_1098e330(0x10000b0, (int*)&Name) != 0)
        {
            FString Text(*Name.FUN_10af9730());
            FUN_10b1b660(&Text, p1);
        }
    }
    FUN_10b1aa50(p1, p2);
}
