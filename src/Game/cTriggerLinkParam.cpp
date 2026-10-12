// Game/cTriggerLinkParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6BF84.h"
#include "Game/cString.h"

extern const char DAT_10e5da48[];

class cTriggerLinkParam : public Class_10E6BF84
{
public:
    cTriggerLinkParam(bool A);

    virtual int Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int IsLoaded();
    virtual void Virtual8();
    virtual int IsDefaultFlavor();

    bool Unknown04;
    char Unknown05[2];
    bool Unknown07;
    cString m_Flavor;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A7EF60 ??0cTriggerLinkParam@@QAE@_N@Z
cTriggerLinkParam::cTriggerLinkParam(bool A) : Unknown04(A), Unknown07(true), m_Flavor(DAT_10e5da48)
{
    Unknown10 = 0;
}
