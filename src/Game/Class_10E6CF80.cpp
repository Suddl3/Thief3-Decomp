// Game/Class_10E6CF80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10A98570_Unknown08.h"
#include "Game/Class_10D4ACC0.h"

Class_10D4ACC0 FUN_10d4acc0();

class Class_10E6BF84
{
public:
    Class_10E6BF84();
    virtual ~Class_10E6BF84() {}

    void FUN_10d51e20(int A);
    int FUN_10d521c0(Class_10C08940* A, Class_10978090* B);

    int Unknown04;
    int Unknown08;
};

class Class_10E6CF80 : public Class_10AAB5C0
{
public:
    virtual int Virtual6(int A, int B);
};

// FUNCTION: 0x10A98570 ?Virtual6@Class_10E6CF80@@UAEHHH@Z
int Class_10E6CF80::Virtual6(int A, int B)
{
    Class_10A98570_Unknown08* Obj1 = (Class_10A98570_Unknown08*)FUN_10aab5c0();
    Class_10978090* Obj1Result = Obj1->Virtual4(0);
    Class_10C08940* Result1 = Obj1Result->FUN_10978090();
    Class_10A98570_Unknown08* Obj2 = (Class_10A98570_Unknown08*)FUN_10aab5c0();
    Class_10978090* Obj3 = Obj2->Virtual4(1);
    Class_10D4ACC0 Local1 = FUN_10d4acc0();
    int Value = Local1.FUN_10d4acb0();
    Class_10E6BF84 Local2;
    Local2.FUN_10d51e20(Value);
    return Local2.FUN_10d521c0(Result1, Obj3);
}
