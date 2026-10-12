// Game/Unsorted_10BFBD30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBE30.h"

double GetTimeSeconds();

class Object_10BFBD30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual ~Object_10BFBD30();
};

struct Struct_10BFBD30
{
    int Unknown00;
    int Unknown04;
    Object_10BFBD30** Unknown08;
};

// FUNCTION: 0x10BFBD30 ?DeleteAllObjects@@YAXPAUStruct_10BFBD30@@@Z
void DeleteAllObjects(Struct_10BFBD30* List)
{
    for (int i = 0; i < List->Unknown00; i++)
        delete List->Unknown08[i];
    List->Unknown00 = 0;
}

// FUNCTION: 0x10BFBE30 ?HasTimedOut@Class_10BFBE30@@QAE_NXZ
bool Class_10BFBE30::HasTimedOut()
{
    float Limit = m_TimeLimit;
    if (GetTimeSeconds() - m_TimeStamp > Limit)
        return true;
    return false;
}
