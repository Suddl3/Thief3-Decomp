// Game/Unsorted_10A5D430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A5DA00.h"

extern void* DAT_10e698f0[];

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E6B078
{
public:
    Class_10E6B078();

    void** Unknown00;
    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0xCC];
};

class Class_10E698F0 : public Class_10E6B078
{
public:
    Class_10E698F0* FUN_10a5ddc0();

    bool Unknown1B8;
    bool Unknown1B9;
    FArray Unknown1BC;
    FArray Unknown1C8;
    FArray Unknown1D4;
    FArray Unknown1E0;
    FArray Unknown1EC;
};

// FUNCTION: 0x10A5DA00 ?FUN_10a5da00@Class_10A5DA00@@QAEXHH@Z
void Class_10A5DA00::FUN_10a5da00(int A, int B)
{
    if (A != UnknownE4)
    {
        UnknownE4 = A;
        Virtual112();
        Virtual109();
    }
}

// FUNCTION: 0x10A5DDC0 ?FUN_10a5ddc0@Class_10E698F0@@QAEPAV1@XZ
Class_10E698F0* Class_10E698F0::FUN_10a5ddc0()
{
    this->Class_10E6B078::Class_10E6B078();
    Unknown1B8 = false;
    Unknown00 = DAT_10e698f0;
    Unknown1B9 = true;
    Unknown1BC.FArray::FArray();
    Unknown1C8.FArray::FArray();
    Unknown1D4.FArray::FArray();
    Unknown1E0.FArray::FArray();
    Unknown1EC.FArray::FArray();
    return this;
}
