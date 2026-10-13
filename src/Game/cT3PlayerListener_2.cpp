// Game/cT3PlayerListener_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B21570.h"

class Class_10B38E90_Arg1;

class Class_10B38E90_Arg2
{
public:
    char Unknown00[0x24];
    FString Unknown24;
    char Unknown30[0x10];
    int Unknown40;
};

int FUN_10af3690(const char* A, const char* B);

extern const char DAT_10e7c510[];

extern const char DAT_10e7c504[];

extern const char DAT_10e7c4f8[];

extern const char DAT_10e7c4ec[];

extern const char DAT_10e7c4e0[];

extern char DAT_10e6b668[];

class cT3PlayerListener
{
public:
    void PickUpBody();
    void FUN_10b37760();
    void FUN_10b37a30();
    void FUN_10b37fe0();
    void FUN_10b379e0(Class_10B38E90_Arg2* A, int B);
    void FUN_10b382b0(Class_10B38E90_Arg1* A, Class_10B38E90_Arg2* B, int C);
    void FUN_10b38e90(Class_10B38E90_Arg1* A, Class_10B38E90_Arg2* B, int C);

    char Unknown00[4];
    Class_10B21570* Unknown04;
};

// FUNCTION: 0x10B38E90 ?FUN_10b38e90@cT3PlayerListener@@QAEXPAVClass_10B38E90_Arg1@@PAVClass_10B38E90_Arg2@@H@Z
void cT3PlayerListener::FUN_10b38e90(Class_10B38E90_Arg1* A, Class_10B38E90_Arg2* B, int C)
{
    FString* Name = B->Unknown40 ? &B->Unknown24 : 0;
    if (!FUN_10af3690(**Name, DAT_10e7c510))
    {
        FUN_10b37760();
        return;
    }
    if (!FUN_10af3690(**Name, DAT_10e7c504))
    {
        PickUpBody();
        return;
    }
    if (!FUN_10af3690(**Name, DAT_10e7c4f8))
    {
        if (Unknown04->FUN_10b21570())
            FUN_10b37a30();
        return;
    }
    if (!FUN_10af3690(**Name, DAT_10e7c4ec))
    {
        FUN_10b37fe0();
        return;
    }
    if (!FUN_10af3690(**Name, DAT_10e7c4e0))
    {
        FUN_10b382b0(A, B, C);
        return;
    }
    if (!FUN_10af3690(**Name, DAT_10e6b668))
        FUN_10b379e0(B, C);
}
