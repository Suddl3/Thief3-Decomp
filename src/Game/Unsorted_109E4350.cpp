// Game/Unsorted_109E4350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_109E4350
{
public:
    FVector FUN_109e4350(const FVector* In, float Param);

    char Unknown00[0xCC];
    float Unknown0CC;
    float Unknown0D0;
    char Unknown0D4[0x10C];
    float Unknown1E0;
};

class Class_10925410
{
public:
    int FUN_10925410(int A);
};

class Class_10924E80 : public Class_10925410
{
};

extern Class_10924E80* DAT_10f2c734;

class Class_1091E3E0
{
public:
    void* FUN_1091e3e0();
};

class Class_1091E3F0
{
public:
    void* FUN_1091e3f0();
};

class Class_10963C40
{
public:
    Class_10963C40() {}
    Class_10963C40(const Class_10963C40& Other);

    char Unknown00[0x40];
};

extern "C" void __stdcall FUN_10d67f9a(Class_10963C40* Out, void* A, void* B);

class Class_109E4430
{
public:
    Class_10963C40 FUN_109e4430();

    char Unknown00[0x200];
    int Unknown200;
};

// FUNCTION: 0x109E4350 ?FUN_109e4350@Class_109E4350@@QAE?AVFVector@@PBV2@M@Z
FVector Class_109E4350::FUN_109e4350(const FVector* In, float Param)
{
    if (Param == -1.0f)
        Param = Unknown1E0;
    FVector Result;
    Result.X = 0;
    Result.Y = Param * In->X * 0.5f;
    float Ratio = Unknown0CC / Unknown0D0;
    Result.Z = (Param * In->Y) / (Ratio + Ratio);
    return Result;
}

// FUNCTION: 0x109E4430 ?FUN_109e4430@Class_109E4430@@QAE?AVClass_10963C40@@XZ
Class_10963C40 Class_109E4430::FUN_109e4430()
{
    int Handle = DAT_10f2c734->FUN_10925410(Unknown200);
    void* A = ((Class_1091E3E0*)Handle)->FUN_1091e3e0();
    void* B = ((Class_1091E3F0*)Handle)->FUN_1091e3f0();
    Class_10963C40 Local;
    FUN_10d67f9a(&Local, B, A);
    Class_10963C40 Copy;
    Copy = Local;
    Class_10963C40 Result(Copy);
    return Result;
}
