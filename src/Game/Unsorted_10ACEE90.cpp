// Game/Unsorted_10ACEE90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A);
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10A174E0
{
public:
    void FUN_10a16700(const Class_109081E0& Name);
};

Class_10A174E0* FUN_10a18230();

class UEngine
{
public:
    void FUN_109844d0();
};

extern UEngine* GEngine;

class Class_10ACEE90
{
public:
    bool FUN_10acf2d0();
};

// FUNCTION: 0x10ACF2D0 ?FUN_10acf2d0@Class_10ACEE90@@QAE_NXZ
bool Class_10ACEE90::FUN_10acf2d0()
{
    FUN_10a18230()->FUN_10a16700(Class_109081E0("TravelFlags"));
    GEngine->FUN_109844d0();
    return true;
}

// FUNCTION: 0x10ACF350 ??$Cast@VUObject@@@@YAPAVUObject@@PAV0@@Z
template UObject* Cast<UObject>(UObject* Src);
