// Game/cStateStack_14.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10BC4020.h"
#include "Game/cIntArray.h"
#include "Game/cStateStack.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

struct Class_10B9E410_Unknown0C;

class cStateStack;

// include/Game/Class_10B9E410_Item.h copied whole, with Virtual4 taking the argument it is called with.
class Class_10B9E410_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual void Virtual4(int A);
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
};

// include/Game/Class_10B9E410_Member.h copied whole, with the slots up to Virtual57 added
// (Virtual57 is the call that gives this function its result).
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
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual int Virtual57(Class_10B9E410_Unknown0C* A, int B);
};

// include/Game/cStateStack.h copied whole, with FUN_10b9cad0 added and Unknown0C typed as the
// pointer it holds.
// FUNCTION: 0x10B9E550 ?FUN_10b9e550@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9e550(int A)
{
    cIntArray* Array = (cIntArray*)&m_Count;
    Class_10B9E410_Item* Current = Top();
    if (Current == 0 || (Current->Virtual3() != 0x26 && Current->Virtual3() != 0x25))
    {
        int N = Array->Count;
        while (N > 1)
        {
            if (N > 0)
            {
                int I = N - 1;
                Class_10B9E410_Item* Item = m_Stack[I];
                Item->Virtual21();
                ((Class_10BC4020*)Item)->FUN_10bc4020(0);
                int R = Item->Virtual3();
                if (I != Array->Count - 1)
                {
                    int From = I + 1;
                    int To = I;
                    int Count = Array->Count - I - 1;
                    if (From != To && Count)
                        memmove(Array->Data + To, Array->Data + From, Count * sizeof(int));
                }
                Array->SetCount(Array->Count - 1);
                Item->Virtual4(1);
                if (Array->Count > 0)
                    FUN_10b9cad0(m_Stack[Array->Count - 1], R, 1);
            }
            N = Array->Count;
        }
        Class_10B9E410_Member* Member = m_Member;
        Class_10B9E410_Unknown0C* Owner = Unknown0C;
        int Res = Member->Virtual57(Owner, A);
        ApplyNextState(Res);
    }
}
