// Game/cTriggerBoolPropertyParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

extern const char DAT_10e6c100[];

// The primary base (0x10E6BF84): it shares the vptr at offset 0.
class Class_10E6BF84
{
public:
    virtual ~Class_10E6BF84();
};

class cTriggerBoolPropertyParam : public Class_10E6BF84
{
public:
    cTriggerBoolPropertyParam();
    virtual ~cTriggerBoolPropertyParam();

    int Unknown04;
    int Unknown08;
    cString Unknown0C;
};

// FUNCTION: 0x10A8B750 ??0cTriggerBoolPropertyParam@@QAE@XZ
cTriggerBoolPropertyParam::cTriggerBoolPropertyParam()
{
    Unknown04 = 0;
    GetAllocator()->Virtual8(0, 0);
    Unknown0C.FUN_1090a590(DAT_10e6c100);
    GetAllocator()->Virtual9();
}
