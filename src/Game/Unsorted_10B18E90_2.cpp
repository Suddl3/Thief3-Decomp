// Game/Unsorted_10B18E90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

extern char DAT_10e793f0[];

class Class_10B22020;

struct Struct_10B19300_Param;

class Class_10B19300
{
public:
    virtual ~Class_10B19300() {}

    Class_10B19300();

    void FUN_10de9b20(void* A);
    void FUN_10b19300(Struct_10B19300_Param* A, float B);
    void FUN_10b19460(Class_10B22020* A);

    int Unknown04[5];
    bool Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10B19050 ??0Class_10B19300@@QAE@XZ
Class_10B19300::Class_10B19300()
{
    for (int Index = 0; Index < 5; Index++)
        Unknown04[Index] = 0;
    Unknown18 = false;
    Unknown2C = 0;
    Unknown30 = 2;

    bool Value;
    Config::Instance()->GetBool("T3Settings", DAT_10e793f0, &Value, 0);
    Unknown18 = Value;
    if (Value)
    {
        Unknown2C = 0;
        Unknown1C = 0;
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown28 = 0;
    }
}
