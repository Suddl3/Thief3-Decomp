// Game/Class_10E7E808.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Player/T3PlayerClasses.h"

class Class_10E7E6A0
{
public:
    virtual void Virtual0();

    void ReleaseArm(AGarrett* Garrett);
    void ClearVelocity(AGarrett* Garrett);
};

class GSMantle : public Class_10E7E6A0
{
public:
    void ForceArms(AGarrett* Garrett);
};

class Class_10B3AE70 : public GSMantle
{
public:
    void ForceBody(AGarrett* Garrett);
};

class Class_10E7E730 : public Class_10B3AE70
{
public:
    void StopBody(AGarrett* Garrett);
};

class Class_10E7E808 : public Class_10E7E730
{
public:
    virtual void FUN_10b4bcb0(int A);
    virtual void FUN_10b4bce0(AGarrett* Garrett);
    virtual void ReleaseArmsForBody(AGarrett* Garrett);
    virtual void Virtual4();

    char Unknown04[0xC];
    float Unknown10;
};

// FUNCTION: 0x10B4BCE0 ?FUN_10b4bce0@Class_10E7E808@@UAEXPAVAGarrett@@@Z
void Class_10E7E808::FUN_10b4bce0(AGarrett* Garrett)
{
    Unknown10 = 3.5f;
    switch (Garrett->MtNextState)
    {
    case 2:
        ForceArms(Garrett);
        break;
    default:
        ForceBody(Garrett);
        break;
    }
    StopBody(Garrett);
    Garrett->bUpdatePhysHeight = 0;
}
