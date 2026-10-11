// Game/cTaggedAnimSeq_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class Class_10A1F150
{
public:
    virtual void Virtual0();
    virtual const int* Virtual1(Class_10A1F150** Out);
    virtual void Virtual2();
    virtual int Virtual3();
};

bool FUN_1090f010(const int* A, const int* B);

class cTaggedAnimSeq
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool SetName(Class_10A1F150* Item);

    int m_Name;
};

// FUNCTION: 0x10A1F150 ?SetName@cTaggedAnimSeq@@UAE_NPAVClass_10A1F150@@@Z
bool cTaggedAnimSeq::SetName(Class_10A1F150* Item)
{
    if (Item->Virtual3())
        return false;
    Class_10A1F150* Object;
    const int* Value = Item->Virtual1(&Object);
    bool Result = FUN_1090f010(Value, &m_Name);
    if (Object)
    {
        char* Block = (char*)Object - 4;
        GetAllocator()->Virtual5(Block);
    }
    return Result;
}
