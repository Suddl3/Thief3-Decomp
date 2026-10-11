// Game/Unsorted_10A52470_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A52950.h"
#include "Game/Class_10A529B0.h"
#include "Game/Class_10A52A40.h"
#include "Game/Class_10E67FD0.h"
#include "Game/Struct_10A52470.h"
#include "Game/Class_10A52A40_Member.h"

class Class_10E5B2C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void FUN_10a52470(const Struct_10A52470* In);

    char Unknown04[0x54];
    Struct_10A52470 Unknown58;
};

class Object_10A52950
{
public:
    virtual ~Object_10A52950();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Object_10A52980;

class Object_10A52950;

class Object_10A52980
{
public:
    virtual ~Object_10A52980();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10A529B0_Member
{
public:
    virtual ~Class_10A529B0_Member();
    virtual void Virtual1();
    virtual void Virtual2();
};

typedef float FLOAT;

typedef int INT;

typedef unsigned char BYTE;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

class FBox
{
public:
    FBox() {}
    FBox(INT) { Init(); }

    void Init()
    {
        Min = Max = FVector(0, 0, 0);
        IsValid = 0;
    }

    FVector Min;
    FVector Max;
    BYTE IsValid;
};

// FUNCTION: 0x10A52470 ?FUN_10a52470@Class_10E5B2C0@@UAEXPBUStruct_10A52470@@@Z
void Class_10E5B2C0::FUN_10a52470(const Struct_10A52470* In)
{
    Unknown58 = *In;
}

// FUNCTION: 0x10A52950 ?FUN_10a52950@Class_10A52950@@QAEXXZ
void Class_10A52950::FUN_10a52950()
{
    if (Unknown100)
        Unknown100->Virtual2();
    delete Unknown100;
    Unknown100 = 0;
}

// FUNCTION: 0x10A52980 ?FUN_10a52980@Class_10A52950@@QAEXXZ
void Class_10A52950::FUN_10a52980()
{
    if (Unknown104)
        Unknown104->Virtual2();
    delete Unknown104;
    Unknown104 = 0;
}

// FUNCTION: 0x10A529B0 ?FUN_10a529b0@Class_10A529B0@@QAEXXZ
void Class_10A529B0::FUN_10a529b0()
{
    if (Unknown108)
        Unknown108->Virtual2();
    delete Unknown108;
    Unknown108 = 0;
}

// FUNCTION: 0x10A52A40 ?FUN_10a52a40@Class_10A52A40@@QAEXPAVClass_10A52A40_Member@@@Z
void Class_10A52A40::FUN_10a52a40(Class_10A52A40_Member* P)
{
    if (Unknown0C4 && Unknown0C4 != P && Unknown0C4->Virtual46())
        Unknown0C4->Virtual70(0);
    Unknown0C4 = P;
    if (P)
        P->Virtual70(1);
}

// FUNCTION: 0x10A52B80 ?FUN_10a52b80@Class_10E67FD0@@UAE?AVFBox@@XZ
FBox Class_10E67FD0::FUN_10a52b80()
{
    FBox Box(0);
    return Box;
}
