// Game/Unsorted_10C3EFD0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class TimeManager
{
public:
    static TimeManager* Instance();
    float FUN_10d3edc0();
    float GetTimeScale();
};

class Class_10C41420
{
public:
    void FUN_10c462c0(float A);
};

Class_10C41420* FUN_10c47d90();

class Class_10C562C0
{
public:
    void FUN_10c56780(float A);
};

Class_10C562C0* FUN_10c562c0();

class Class_10C80360
{
public:
    void FUN_10c5dc60(float A);
};

Class_10C80360* FUN_10c5f280();

class Class_10E9B5C0
{
public:
    virtual void Virtual0();
    virtual void FUN_10c3eff0(float Dt);
};

// FUNCTION: 0x10C3EFF0 ?FUN_10c3eff0@Class_10E9B5C0@@UAEXM@Z
void Class_10E9B5C0::FUN_10c3eff0(float Dt)
{
    Dt = (TimeManager::Instance()->FUN_10d3edc0() + Dt) / TimeManager::Instance()->GetTimeScale();
    FUN_10c47d90()->FUN_10c462c0(Dt);
    FUN_10c562c0()->FUN_10c56780(Dt);
    FUN_10c5f280()->FUN_10c5dc60(Dt);
}
