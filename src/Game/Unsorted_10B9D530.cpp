// Game/Unsorted_10B9D530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BC4020.h"
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

struct Class_10B9E410_Unknown0C;

class Class_10B9E410;

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

// include/Game/Class_10B9E410_Member.h copied whole, with Virtual9 returning the int its caller uses.
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
    virtual int Virtual9(Class_10B9E410_Unknown0C* A, int B, int C, int D, int E, int F);
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
};

// include/Game/Class_10B9E410.h copied whole, with the three methods this function uses added
// and Unknown0C typed as the pointer it holds.
class Class_10B9E410
{
public:
    void FUN_10b9cf60();
    void FUN_10b9cfa0();
    Class_10B9E410_Item* Top()
    {
        if (m_Count == 0)
            return 0;
        return m_Stack[m_Count - 1];
    }
    void FUN_10b9cf20();
    void FUN_10b9e410();
    void FUN_10b9d740(int A);
    void FUN_10b9d8d0();
    void FUN_10b9dc80(int A);
    void FUN_10b9dcc0();
    void FUN_10b9dc40(int A);
    void FUN_10b9e660();
    void FUN_10b9e690(int A);
    void FUN_10b9eee0();
    void PopToBase(int A, int B, int C);
    int FUN_10b9cc00(int A);
    void FUN_10b9cad0(Class_10B9E410_Item* Item, int Value, int Flag);

    char Unknown00[0xC];
    Class_10B9E410_Unknown0C* Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10B9E410_Item** m_Stack;
    int Unknown1C;
    int Unknown20;
    char Unknown24[0x14];
    Class_10B9E410_Member* Unknown38;
};

// FUNCTION: 0x10B9DAC0 ?PopToBase@Class_10B9E410@@QAEXHHH@Z
void Class_10B9E410::PopToBase(int A, int B, int C)
{
    cIntArray* Array = (cIntArray*)&m_Count;
    int N = m_Count;
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
    Class_10B9E410_Member* Member = Unknown38;
    Class_10B9E410_Unknown0C* Owner = Unknown0C;
    int Res = Member->Virtual9(Owner, 0, A, B, C, FUN_10b9cc00(B));
    FUN_10b9d740(Res);
}
