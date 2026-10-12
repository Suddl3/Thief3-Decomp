// Game/Unsorted_10C32B40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C49740.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Struct_10C32C30.h"
#include "Game/Class_10C32C30.h"
#include "Game/cIntArray.h"

class cMotionControllerAnim
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void RemoveMotionCallback(int Item);

    char Unknown04[0x134];
    cIntArray m_MotionCallbacks;
};

// FUNCTION: 0x10C32B40 ?RemoveMotionCallback@cMotionControllerAnim@@UAEXH@Z
void cMotionControllerAnim::RemoveMotionCallback(int Item)
{
    int Count = m_MotionCallbacks.Unknown00;
    cIntArray* Set = &m_MotionCallbacks;
    for (int i = 0; i < Count; i++)
    {
        if (m_MotionCallbacks.Unknown08[i] == Item)
        {
            int Last = Set->Unknown00 - 1;
            int Moved = Set->Unknown08[Last];
            int Old = Set->Unknown08[i];
            Set->Unknown08[i] = Moved;
            Set->Unknown08[Last] = Old;
            Set->SetCount(Set->Unknown00 - 1);
            return;
        }
    }
}

// FUNCTION: 0x10C32C30 ?GetValue@Class_10C32C30@@QAEHH@Z
int Class_10C32C30::GetValue(int A)
{
    int Key = A;
    Entry_10C32C30* Value;
    Entry_10C32C30* Entry = Unknown0C.FUN_10c49740(&Key, &Value) ? Value : 0;
    Struct_10C32C30* Obj = Entry->Unknown00;
    if (Obj)
        return Obj->Unknown08;
    return 0;
}
