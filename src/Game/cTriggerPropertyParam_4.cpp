// Game/cTriggerPropertyParam_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AF3AA0
{
public:
    void __cdecl FUN_10af3aa0(const char* Format, ...);
};

extern Class_10AF3AA0* GLog;

class cTriggerPropertyParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a89570(int Relation, cTriggerPropertyParam* Other);

    void* volatile Unknown04;
};

// FUNCTION: 0x10A89570 ?FUN_10a89570@cTriggerPropertyParam@@UAEHHPAV1@@Z
int cTriggerPropertyParam::FUN_10a89570(int Relation, cTriggerPropertyParam* Other)
{
    switch (Relation)
    {
    case 1:
    {
        void* OtherValue = Other->Unknown04;
        void* ThisValue = Unknown04;
        return (OtherValue == ThisValue);
    }
    case 6:
    {
        void* OtherValue = Other->Unknown04;
        void* ThisValue = Unknown04;
        return (OtherValue != ThisValue);
    }
    default:
        GLog->FUN_10af3aa0("TriggerPropertyParam relation not supported %d!", Relation);
        return 0;
    }
}
