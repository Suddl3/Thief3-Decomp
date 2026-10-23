// Game/PatrolStack.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#define GAME_CSTATESTACK_H
#include "Engine/EngineClasses.h"
#include "AICore/AICoreClasses.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10B9E410_Unknown0C.h"
#include "Game/Class_10BB8D60.h"
#include "Game/cIntArray.h"

class PatrolStackItem
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual void Virtual4(int Flags);
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
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
};

class PatrolStackFactory
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
    virtual PatrolStackItem* Virtual13(Class_10B9E410_Unknown0C* Context);
};

// Folded native setter 0x10BECEE0 stores one pointer-sized argument at +0x78.
class Class_10BECEE0
{
public:
    void FUN_10becee0(UObject* Point);
};

class Class_10A0A8C0
{
public:
    void FUN_10a0a8c0(int Index, PatrolStackItem** Value);
};

class Class_10B9F200
{
public:
    void FUN_10b9d7e0(int A, int B);
};

class cStateStack
{
public:
    void FUN_10b9ddb0(int PathPoint);
    void ApplyNextState(int State);
    void FUN_10b9d8d0();
    char Unknown00[0xC];
    Class_10B9E410_Unknown0C* Context;
    int Count;
    int CapacityBytes;
    PatrolStackItem** Items;
    char Unknown1C[0x1C];
    PatrolStackFactory* Factory;
};

UObject* FUN_10c00710(void* Owner, int PathPoint);

// FUNCTION: 0x10B9DDB0 ?FUN_10b9ddb0@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9ddb0(int PathPoint)
{
    Class_10C7D570* Owner = Context->Unknown08;
    UObject* Point = FUN_10c00710(Owner->FUN_10c7d570(), PathPoint);
    if (Point && Point->IsA(AAIPathPoint::StaticClass()))
    {
        if (Factory && Count > 0)
        {
            cIntArray* Stack = (cIntArray*)&Count;
            PatrolStackItem* Next = Factory->Virtual13(Context);
            PatrolStackItem* Patrol = Next;
            if (Next)
            {
                ((Class_10BB8D60*)Context)->Reset();
                ((Class_10BECEE0*)Next)->FUN_10becee0(Point);
                if (Count == 1)
                {
                    ApplyNextState((int)Next);
                    return;
                }
                if (Count == 2 &&
                    (Items[1]->Virtual3() == STATE_PATROL || Items[1]->Virtual3() == STATE_WANDER))
                {
                    ((Class_10B9F200*)this)->FUN_10b9d7e0((int)Next, 1);
                    return;
                }
                if (Items[1]->Virtual3() == STATE_PATROL)
                {
                    PatrolStackItem* Previous = Items[1];
                    Stack->RemoveAt(1);
                    ((Class_10A0A8C0*)Stack)->FUN_10a0a8c0(1, &Patrol);
                    if (Previous) Previous->Virtual4(1);
                    if (Items[2]->Virtual3() == STATE_PATROL_LOOK || Items[2]->Virtual3() == STATE_WANDER)
                    {
                        if (Count == 3) FUN_10b9d8d0();
                        else Stack->RemoveAt(2);
                    }
                }
                else
                    ((Class_10A0A8C0*)Stack)->FUN_10a0a8c0(1, &Patrol);
                for (int Index = 0; Index < Count; ++Index)
                {
                    if (Items[Index]->Virtual3() == STATE_SIT || Items[Index]->Virtual3() == STATE_SLEEPING)
                        Items[Index]->Virtual73();
                }
            }
        }
    }
}
