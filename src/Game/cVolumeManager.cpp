// Game/cVolumeManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/cActorManager.h"
#include "Game/Class_10A4C550.h"

class FVector;

class cVolume;

class Class_10AA6290
{
public:
    void FUN_10aa6290(int A);
};

Class_10AA6290* FUN_10aa6040();

struct Class_10A71380_Arg2
{
    char Unknown00[4];
    int Unknown04;
};

struct Class_10A71380_Arg3
{
    char Unknown00[4];
    BYTE* Unknown04;
};

class cVolumeManager : public cActorManager
{
public:
    virtual void HandleEvent(int Event, int A, int B, int C);
    virtual void Virtual17(int A, int B, int C);
    virtual void Virtual18(int A, int B, int C);
    virtual void Virtual19(int A, int B, int C);
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
    virtual bool ContainsPoint(const FVector& A, cVolume* B);
    virtual int* FindValue(unsigned int Key);
    virtual void Virtual8(int A, int B, int C);

    using cActorManager::Virtual7;
    void FUN_10a71210(AVolume* Volume);

    Class_10A4C550 m_Values;
    char Pad05[0x3];
};

// FUNCTION: 0x10A71380 ?Virtual8@cVolumeManager@@UAEXHHH@Z
void cVolumeManager::Virtual8(int A, int B, int C)
{
    AVolume* Volume = (AVolume*)A;
    if (Volume->IsA(AVolume::StaticClass()))
    {
        if (((Class_10A71380_Arg2*)B)->Unknown04 == 0x8038b)
        {
            BYTE* Flag = ((Class_10A71380_Arg3*)C)->Unknown04;
            Virtual7((int)Volume);
            FUN_10aa6040()->FUN_10aa6290((int)Volume);
            if (!Volume->bDeleteMe && !(Volume->ObjectFlags & 0x800000) && Flag && !(*Flag & 1))
                FUN_10a71210(Volume);
        }
    }
}
