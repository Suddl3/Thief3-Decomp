// Game/Unsorted_10BD0410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10C1A690
{
public:
    void FUN_10c1a690();

    char Unknown00[0x10];
};

class Class_10BD0960
{
public:
    void FUN_10bd0960();

    int Unknown00;
    char Unknown04[4];
    Class_10C1A690* Unknown08;
};

extern const char DAT_10e47660[];

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0();

    void* Unknown00;
};

class Class_10E97B00
{
public:
    Class_10E97B00(const char* Name);
    ~Class_10E97B00();

    virtual void FUN_10c01ff0(void* A);

    Class_109081E0 Unknown04;
};

class Class_10E9313C
{
public:
    Class_10E9313C();

    virtual void FUN_10bd0190(int p1);
    virtual void FUN_10bd1240(FArchive& Ar);

    int Unknown04;
    Class_10E97B00 Unknown08;
    FVector Unknown10;
    int Unknown1C;
    int Unknown20;
    float Unknown24;
    int Unknown28;
    int Unknown2C;
    bool Unknown30;
    Class_109081E0 Unknown34;
    bool Unknown38;
};

// FUNCTION: 0x10BD06A0 ??0Class_10E9313C@@QAE@XZ
Class_10E9313C::Class_10E9313C()
    : Unknown04(0), Unknown08(DAT_10e47660), Unknown10(0.0f, 0.0f, 0.0f), Unknown1C(0), Unknown20(0), Unknown24(0.5f),
      Unknown28(20), Unknown2C(1), Unknown30(false), Unknown34(DAT_10e47660), Unknown38(false)
{
}

// FUNCTION: 0x10BD0960 ?FUN_10bd0960@Class_10BD0960@@QAEXXZ
void Class_10BD0960::FUN_10bd0960()
{
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i].FUN_10c1a690();
    Unknown00 = 0;
}
