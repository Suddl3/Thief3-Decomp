// Game/cTriggerOperatorParam_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cTriggerOperatorParam.h"
#include "Game/cString.h"

void ReadString(void* Reader, int* Out);

// FUNCTION: 0x10A8D3C0 ?ReadValue@cTriggerOperatorParam@@UAE_NHPAX@Z
bool cTriggerOperatorParam::ReadValue(int A, void* Reader)
{
    cString Text;
    ReadString(Reader, (int*)&Text);
    Virtual4(&Text);
    return true;
}
