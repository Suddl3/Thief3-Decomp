// Game/Unsorted_10A66E50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <float.h>
#include "Game/Info_10A66E50.h"
#include "Game/Info_10A66E70.h"
#include "Game/Class_10A66E50.h"
#include "Game/Class_10A66E70.h"

int FUN_10a66c80(void* A, void* B, float Epsilon);

class Class_10E6B4AC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool IsEqual(Class_10E6B4AC* Other);

    char Unknown04[4];
    int m_Value;
};

// FUNCTION: 0x10A66E50 ?FUN_10a66e50@Class_10A66E50@@QAEXPBUInfo_10A66E50@@@Z
void Class_10A66E50::FUN_10a66e50(const Info_10A66E50* In)
{
    Unknown08 = *In;
}

// FUNCTION: 0x10A66E70 ?FUN_10a66e70@Class_10A66E70@@QAEXPBUInfo_10A66E70@@@Z
void Class_10A66E70::FUN_10a66e70(const Info_10A66E70* In)
{
    Unknown14 = *In;
}

// FUNCTION: 0x10A66E90 ?IsEqual@Class_10E6B4AC@@UAE_NPAV1@@Z
bool Class_10E6B4AC::IsEqual(Class_10E6B4AC* Other)
{
    return FUN_10a66c80(&m_Value, &Other->m_Value, FLT_EPSILON) == 1;
}
