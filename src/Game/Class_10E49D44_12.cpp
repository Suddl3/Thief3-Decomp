// Game/Class_10E49D44_12.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10934990.h"

class Class_10E49D44
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10933f50(unsigned int A, int B, int C, int D, int E, int* Out);

    char Unknown04[8];
    unsigned int Unknown0C;
    Class_10934990** Unknown10;
};

// FUNCTION: 0x10933F50 ?FUN_10933f50@Class_10E49D44@@UAEHIHHHHPAH@Z
int Class_10E49D44::FUN_10933f50(unsigned int A, int B, int C, int D, int E, int* Out)
{
    if (!Out)
        return 0x80070057;
    *Out = 0;
    if (A < Unknown0C && B && C)
    {
        Class_10934990* Element = Unknown10[A];
        if (Element->Unknown14 & 1)
            return 0x8004071e;
        if (Element->Unknown14 & 4)
            return Element->FUN_10933fd0(B, C, Out, E);
        return Element->FUN_109346e0(B, C, Out, E);
    }
    return 0x80070057;
}
