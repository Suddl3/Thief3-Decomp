// Game/cTriggerOperatorParam_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"

extern Class_1090A780 DAT_10f3a1f8[];

class cTriggerOperatorParam
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int TestRelation(int A, cTriggerOperatorParam* B);
    virtual cString GetText();
    virtual int FUN_10a8d4e0(cString* Text);
    virtual void Virtual5() = 0;
    virtual void Virtual6() = 0;
    virtual bool FUN_10a8d330();
    virtual Class_1090A780 FUN_10a8d570();
    virtual void Virtual9();
    virtual void WriteValue(int A, void* Stream);
    virtual bool ReadValue(int A, void* Reader);

    cTriggerOperatorParam();

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A8D4E0 ?FUN_10a8d4e0@cTriggerOperatorParam@@UAEHPAVcString@@@Z
int cTriggerOperatorParam::FUN_10a8d4e0(cString* Text)
{
    for (int i = 0; i < 4; i++)
    {
        const char* Want = DAT_10e47660;
        if (Text->Unknown00)
            Want = Text->Unknown00;
        const char* Have = DAT_10f3a1f8[i].Unknown00 ? DAT_10f3a1f8[i].Unknown00 : DAT_10e47660;
        if (strcmp(Have, Want) == 0)
        {
            Unknown04 = i;
            return 1;
        }
    }
    Unknown04 = 4;
    return 0;
}
