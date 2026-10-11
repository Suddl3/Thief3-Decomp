// Game/Class_10E7E730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA9DC0.h"
#include "Game/Class_10B193E0.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10B193E0.h"

class AGarrett;

struct Struct_10B4A260;

class Class_10B19300;

extern float DAT_10eafbdc;

Class_10B19300* FUN_10b190e0();

float FUN_10b1e1e0();

// Class_10E7E730 as include/Game/Class_10E7E730.h has it, without the base
// Class_10B3AE70: the header's base would move Unknown10 past 0x10, and the
// accepted Game/Unsorted_10B49450.cpp declares the class standalone with its
// slots at 0 to 12. Slot 4 returns an int, slot 7 is this function.
class Class_10E7E730
{
public:
    virtual void FUN_10b4a120(AGarrett* Garrett);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10b4a180(Struct_10B193E0* X);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10b4a260(Struct_10B4A260* Out);

    void FUN_10b3b0b0(AGarrett* Garrett);
    bool FUN_10b3b540(Struct_10B193E0* A, int B, int C);

    char Pad04[0xc];
    int Unknown10;
    float Unknown14;
    char Pad18[0x24];
};

// FUNCTION: 0x10B4A180 ?FUN_10b4a180@Class_10E7E730@@UAEHPAUStruct_10B193E0@@@Z
int Class_10E7E730::FUN_10b4a180(Struct_10B193E0* X)
{
    ((Class_10B193E0*)FUN_10b190e0())->FUN_10b193e0(X);
    if (Unknown14 != -1.0f)
    {
        if (Unknown14 < DAT_10eafbdc)
            return 8;
        Unknown14 = Unknown14 - X->Unknown454;
        return Virtual4();
    }
    if (FUN_10b3b540(X, 0, 0))
        return 1;
    if (FUN_10b1e1e0() != DAT_10eafbdc)
    {
        X->Unknown400 = X->Unknown38;
        return 8;
    }
    if ((((Class_10AA9DC0*)FUN_10b190e0())->FUN_10aa9dc0() == 0 && Unknown10 == 1)
        || ((int)((Class_10AA9DC0*)FUN_10b190e0())->FUN_10aa9dc0() == 1 && Unknown10 == 0))
        Unknown14 = 0.3f;
    return Virtual4();
}
