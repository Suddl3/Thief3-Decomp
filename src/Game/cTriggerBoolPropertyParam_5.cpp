// Game/cTriggerBoolPropertyParam_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AF3AA0
{
public:
    void __cdecl FUN_10af3aa0(const char* Format, ...);
};

extern Class_10AF3AA0* GLog;

extern const char DAT_10e6c658[];

class cTriggerBoolPropertyParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a8b670(int Relation, cTriggerBoolPropertyParam* Other);

    void* volatile Unknown04;
};

// FUNCTION: 0x10A8B670 ?FUN_10a8b670@cTriggerBoolPropertyParam@@UAEHHPAV1@@Z
int cTriggerBoolPropertyParam::FUN_10a8b670(int Relation, cTriggerBoolPropertyParam* Other)
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
        GLog->FUN_10af3aa0(DAT_10e6c658, Relation);
        return 0;
    }
}
