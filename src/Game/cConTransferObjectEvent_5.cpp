// Game/cConTransferObjectEvent_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10AAB590_Param.h"

class cConTransferObjectEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10aa7360(Class_10AAB590_Param* Src);

    cString Unknown04;
    char Unknown08[4];
    cString Unknown0C;
    cString Unknown10;
    char Unknown14[4];
    cString Unknown18;
    cString Unknown1C;
    cString Unknown20;
    cString Unknown24;
};

// FUNCTION: 0x10AA7360 ?FUN_10aa7360@cConTransferObjectEvent@@UAEHPAVClass_10AAB590_Param@@@Z
int cConTransferObjectEvent::FUN_10aa7360(Class_10AAB590_Param* Src)
{
    Unknown04 = Src->Virtual2();
    Unknown0C = Src->Virtual2();
    Unknown18 = Src->Virtual2();
    Unknown24 = Src->Virtual2();
    Unknown20 = Src->Virtual2();
    Unknown10 = Src->Virtual2();
    Unknown1C = Src->Virtual2();
    return 1;
}
