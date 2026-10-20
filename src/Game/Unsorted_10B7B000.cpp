// Game/Unsorted_10B7B000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10B7B000.h"

class Class_109C1F50
{
public:
    void FUN_109c1f50(int A);
};

class Class_10B7B820_Unknown3A4
{
public:
    char Pad00[0x90];
    Class_109C1F50 Unknown90;
    char Pad91[0xB];
};

class Class_10B7B820_Unknown04
{
public:
    char Pad00[0x3A4];
    Class_10B7B820_Unknown3A4* Unknown3A4;
    int Unknown3A8;
};

class Class_10C3E140
{
public:
    unsigned char IsActive();
};

class Class_10EC0E20 : public Class_10C3E140
{
public:
    void FUN_10b7ad70();
    void FUN_10b7ae90();
    void FUN_10b7b8a0();
    void Reset();
    void FUN_10b7abb0(int A);
    void FUN_10b7b760(int A);
    void FUN_10b7ac80(unsigned char A);
    void FUN_10b7b460(int A, int B, int C, int D);
    void FUN_10b7b610(int A, int B);
    bool FUN_10b7b8d0(int A);

    char Pad00[0x4];
    Class_10B7B820_Unknown04* Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    bool Unknown18;
    char Pad19[0x3];
    char Pad1C[0xC];
    int Unknown28;
    char Pad2C[0x4];
    int* Unknown30;
    int Unknown34;
    char Pad38[0x4];
    int* Unknown3C;
};

// FUNCTION: 0x10B7B000 ??1Class_10B7B000@@QAE@XZ
Class_10B7B000::~Class_10B7B000()
{
    Unknown04 = 0;
}

// FUNCTION: 0x10B7B820 ?Reset@Class_10B7AD70@@QAEXXZ
void Class_10EC0E20::Reset()
{
    if (Unknown28 > 0)
    {
        if (Unknown04->Unknown3A8 > Unknown14)
            Unknown04->Unknown3A4[Unknown14].Unknown90.FUN_109c1f50(0);
        for (int i = 0; i < Unknown28; i++)
            Unknown30[i] = 0x101;
        for (int i = 0; i < Unknown34; i++)
            Unknown3C[i] = 0;
    }
}
