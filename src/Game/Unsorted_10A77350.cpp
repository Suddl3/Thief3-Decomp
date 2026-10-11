// Game/Unsorted_10A77350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6BCD0.h"

class Class_10E6BD18;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BD18* Obj, int A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e6bd18[];

class cActorManager
{
public:
    cActorManager();
    ~cActorManager();

    void** Unknown00;
};

class Class_10E6BD18 : public cActorManager
{
public:
    Class_10E6BD18();
};

class UObject;

class ULevel;

template <class T> T* Cast(UObject* Src);

struct Struct_10A78020
{
    char Unknown00[8];
    int Unknown08;
};

// FUNCTION: 0x10A78020 ?FUN_10a78020@Class_10E6BCD0@@QAEXPAVUObject@@PAUStruct_10A78020@@H@Z
void Class_10E6BCD0::FUN_10a78020(UObject* A, Struct_10A78020* B, int C)
{
    if (B && B->Unknown08 == 0)
    {
        ULevel* Level = Cast<ULevel>(A);
        if (Unknown04 == 0 && Unknown14 == 0)
        {
            FUN_10a77750(Level);
            FUN_10a77af0(Level);
        }
    }
}

// FUNCTION: 0x10A79050 ??0Class_10E6BD18@@QAE@XZ
Class_10E6BD18::Class_10E6BD18()
{
    Unknown00 = DAT_10e6bd18;
    DAT_10f46da0->Virtual1(this, 0x27, -1, -1);
}
