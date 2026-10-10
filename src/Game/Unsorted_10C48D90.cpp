// Game/Unsorted_10C48D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>

struct Struct_10C49030
{
    unsigned char* Unknown00;
};

class Class_10E9BB8C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int Value);
    virtual void Virtual3();
    virtual int FUN_10c49030();
    virtual int Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual Class_10E9BB8C* FUN_10c48f00(char* Buffer, size_t Size);

    char Unknown04[0x1C];
    Struct_10C49030* Unknown20;
    char Unknown24[0xC];
    int* Unknown30;
    char Unknown34[0x24];
    FILE* Unknown58;
};

// FUNCTION: 0x10C48F00 ?FUN_10c48f00@Class_10E9BB8C@@UAEPAV1@PADI@Z
Class_10E9BB8C* Class_10E9BB8C::FUN_10c48f00(char* Buffer, size_t Size)
{
    if (Unknown58)
    {
        int Mode = (Buffer == 0 && Size == 0) ? _IONBF : _IOFBF;
        if (setvbuf(Unknown58, Buffer, Mode, Size) == 0)
            return this;
    }
    return 0;
}
