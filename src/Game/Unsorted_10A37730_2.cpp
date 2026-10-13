// Game/Unsorted_10A37730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10924E80.h"
#include "Game/Class_10E66530.h"
#include "Game/Class_10E666A0.h"
#include "Game/Info_10A399C0.h"
#include "Game/Struct_10A378B0.h"
#include "Game/UClient.h"
#include "Engine/EngineClasses.h"

class Class_10A37810
{
public:
    int FUN_10a37810();

    char Unknown00[0x20];
    int Unknown20;
    int Unknown24;
    int Unknown28;
};

extern Class_10924E80* DAT_10f2c734;

extern UEngine* GEngine;

class Class_10A37A30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, float C);
};

// FUNCTION: 0x10A37810 ?FUN_10a37810@Class_10A37810@@QAEHXZ
int Class_10A37810::FUN_10a37810()
{
    return Unknown20 ? Unknown20 : Unknown28;
}

// FUNCTION: 0x10A378B0 ?FUN_10a378b0@@YGXPAUStruct_10A378B0@@@Z
void __stdcall FUN_10a378b0(Struct_10A378B0* A)
{
    A->Unknown40 = true;
    DAT_10f2c734->FUN_10925c60(A->Unknown04, 0);
    GEngine->Client->Unknown70 = A->Unknown2A0;
    GEngine->Virtual35();
}

// FUNCTION: 0x10A37A30 ?FUN_10a37a30@Class_10E66530@@UAEXHPAVClass_10A37A30@@@Z
void Class_10E66530::FUN_10a37a30(int A, Class_10A37A30* B)
{
    B->Virtual5(-1, 0, -1.0f);
}

// FUNCTION: 0x10A399C0 ?FUN_10a399c0@Class_10E666A0@@UAEXPBUInfo_10A399C0@@@Z
void Class_10E666A0::FUN_10a399c0(const Info_10A399C0* In)
{
    Unknown2C = *In;
}
