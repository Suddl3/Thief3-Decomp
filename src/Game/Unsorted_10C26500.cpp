// Game/Unsorted_10C26500.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C26A60.h"
#include "Game/Struct_10C26A60.h"

class Class_10C26500_Unknown38
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Virtual2();
    virtual char Virtual3(Struct_10C26A60* Obj);
    virtual void Virtual4(int Arg);
};

// FUNCTION: 0x10C26500 ?FUN_10c26500@Class_10C26A60@@QAEDPAUStruct_10C26A60@@H@Z
char Class_10C26A60::FUN_10c26500(Struct_10C26A60* Obj, int Arg)
{
    for (int i = 0; i < Unknown38.Count; i++)
    {
        Class_10C26500_Unknown38* Item = (Class_10C26500_Unknown38*)Unknown38.Data[i];
        if (Item->Virtual2() == Obj->Virtual2() && Item->Virtual3(Obj) == 1)
        {
            Item->Virtual4(Arg);
            return 1;
        }
    }
    return 0;
}
