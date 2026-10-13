// Game/cConNoteEvent_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B36120.h"
#include "Game/Class_1090A780.h"

class Class_10AAAC20_Param
{
public:
    virtual void Virtual0(const Class_1090A780& A);
};

class cConNoteEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10aaac20(Class_10AAAC20_Param* Param);

    Class_10B36120 Unknown04;
    Class_1090A780 Unknown08;
};

// FUNCTION: 0x10AAAC20 ?FUN_10aaac20@cConNoteEvent@@UAEHPAVClass_10AAAC20_Param@@@Z
int cConNoteEvent::FUN_10aaac20(Class_10AAAC20_Param* Param)
{
    Param->Virtual0(Unknown04.FUN_10b36120());
    Param->Virtual0(Unknown08);
    return 1;
}
