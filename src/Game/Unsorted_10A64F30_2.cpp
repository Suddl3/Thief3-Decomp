// Game/Unsorted_10A64F30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10A66E20.h"

class Class_10E6B490
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool IsEqual(Class_10E6B490* p1);

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A66DD0 ?IsEqual@Class_10E6B490@@UAE_NPAV1@@Z
bool Class_10E6B490::IsEqual(Class_10E6B490* p1)
{
    return p1->Unknown08 == Unknown08;
}
