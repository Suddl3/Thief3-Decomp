// Game/cStateStack_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_10B9E410_Item.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10B9E410_Unknown0C.h"
#include "AICore/AICoreClasses.h"
#include "Game/cStateStack.h"

class Class_10B9E410_Member
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
    virtual int Virtual11(Class_10B9E410_Unknown0C* A, int B);
    virtual int Virtual12(Class_10B9E410_Unknown0C* A, Class_10B21560* B, int C, UObject* D);
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
    virtual int Virtual28(int A);
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
    virtual int Virtual43(int A, Class_10B9E410_Item* B, int C);
    virtual int Virtual44(int A, Class_10B9E410_Item* B, int C);
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int Virtual48(Class_10B9E410_Unknown0C* A, int B);
};

extern Struct_10AA3520* DAT_10f35dec;

UObject* FUN_10c00710(void* A, int B);

// FUNCTION: 0x10B9DCF0 ?MoveToPathPoint@cStateStack@@QAEXH@Z
void cStateStack::MoveToPathPoint(int A)
{
    Class_10C7D570* Owner = Unknown0C->Unknown08;
    UObject* Point = FUN_10c00710(Owner->FUN_10c7d570(), A);
    if (Point && Point->IsA(AAIPathPoint::StaticClass()))
    {
        if (m_Member && m_Count > 0)
        {
            int Result = m_Member->Virtual12(Unknown0C, DAT_10f35dec->Unknown08, 0, Point);
            if (Result)
            {
                if (Top()->Virtual3() == 8)
                    FUN_10b9d8d0();
                ApplyNextState(Result);
            }
        }
    }
}
