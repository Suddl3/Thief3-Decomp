// Game/Class_10E7E6A0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10B39610
{
public:
    void FUN_10b39610(float A);
};

float __stdcall GetMoveSpeedMultiplier(int A);

class Class_10E7E6A0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();

    void FUN_10b49dd0(int A);
    void FUN_10b4a4d0(int A);
    void FUN_10b4a7d0(int A, int B);

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    int Unknown10;
    int Unknown14;
    char Unknown18[2];
    bool Unknown1A;
    bool Unknown1B;
};

// FUNCTION: 0x10B4A7D0 ?FUN_10b4a7d0@Class_10E7E6A0@@QAEXHH@Z
void Class_10E7E6A0::FUN_10b4a7d0(int A, int B)
{
    if (Unknown10 == Unknown14)
    {
        if (!Unknown1A)
            FUN_10b49dd0(Unknown14);
        else
            Unknown1B = true;
    }
    else
        FUN_10b4a4d0(Unknown10);
    ((Class_10B39610*)GetLinkedObject())->FUN_10b39610(GetMoveSpeedMultiplier(Unknown08));
    Virtual4();
}
