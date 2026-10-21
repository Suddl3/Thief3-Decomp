// Game/cTriggerSoundSchemaParam_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);
    ~Class_1090A780();

    char* Unknown00;
};

extern std::vector<Class_1090A780> DAT_10f3a1e4;

extern int DAT_10f3a1dc;

class cTriggerSoundSchemaParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual Class_1090A780 FUN_10a8b050();
};

// FUNCTION: 0x10A8B050 ?FUN_10a8b050@cTriggerSoundSchemaParam@@UAE?AVClass_1090A780@@XZ
Class_1090A780 cTriggerSoundSchemaParam::FUN_10a8b050()
{
    Class_1090A780* Item = &DAT_10f3a1e4[DAT_10f3a1dc];
    return *Item;
}
