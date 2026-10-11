// Game/Unsorted_10A7A7F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E6BD90
{
public:
    virtual void FUN_10a7a830(int Event, UObject* A, int B, int C);
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
    virtual void Virtual19();
    virtual void Virtual20(UObject* A, int B, int C);
    virtual void Virtual21(UObject* A, int B, int C);
    virtual void Virtual22(UObject* A);
    virtual void Virtual23(UObject* A, int B, int C);
    virtual void Virtual24(UObject* A, int B, int C);
    virtual void Virtual25(UObject* A, int B, int C);
};

// FUNCTION: 0x10A7A830 ?FUN_10a7a830@Class_10E6BD90@@UAEXHPAVUObject@@HH@Z
void Class_10E6BD90::FUN_10a7a830(int Event, UObject* A, int B, int C)
{
    if (!A || A->GetClass()->ClassDefaultObject != A)
    {
        switch (Event)
        {
        case 3:
            Virtual20(A, B, C);
            break;
        case 4:
            Virtual21(A, B, C);
            break;
        case 36:
            Virtual22(A);
            break;
        case 1:
            Virtual23(A, B, C);
            break;
        case 42:
        case 43:
            Virtual24(A, B, C);
            break;
        case 5:
            Virtual25(A, B, C);
            break;
        }
    }
}
