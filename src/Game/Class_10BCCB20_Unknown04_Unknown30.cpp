// Game/Class_10BCCB20_Unknown04_Unknown30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C3DD60
{
public:
    virtual int Virtual0();
    char Unknown00[0x24];
    float Field24;

    virtual float FUN_10c3dd60();
};

class Class_10BCCB20_Unknown04_Unknown30
{
public:
    Class_10C3DD60* FUN_10bfc080(int A);

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Class_10C3DD60** Unknown10;
    Class_10C3DD60* Unknown14;
};

// FUNCTION: 0x10BFC080 ?FUN_10bfc080@Class_10BCCB20_Unknown04_Unknown30@@QAEPAVClass_10C3DD60@@H@Z
Class_10C3DD60* Class_10BCCB20_Unknown04_Unknown30::FUN_10bfc080(int A)
{
    if (Unknown14 != 0 && Unknown14->Virtual0() == A)
        return Unknown14;
    float Best = 0.0f;
    Class_10C3DD60* Result = 0;
    for (int i = 0; i < Unknown08; i++)
    {
        Class_10C3DD60* Obj = Unknown10[i];
        if (Obj->Virtual0() == A)
        {
            if (Obj->Class_10C3DD60::FUN_10c3dd60() > Best)
            {
                Best = Obj->Class_10C3DD60::FUN_10c3dd60();
                Result = Obj;
            }
        }
    }
    return Result;
}
