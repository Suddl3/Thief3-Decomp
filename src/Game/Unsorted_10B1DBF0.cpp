// Game/Unsorted_10B1DBF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

class Class_10A18E80
{
public:
    float FUN_10a18e80(int Index);
};

class Object_10A18FC0 : public Class_10A18E80
{
};

Object_10A18FC0* FUN_10a18fc0();

extern float DAT_10eafbdc;

// FUNCTION: 0x10B1DBF0 ?FUN_10b1dbf0@@YAHXZ
int FUN_10b1dbf0()
{
    float A = FUN_10a18fc0()->FUN_10a18e80(0);
    float AbsB = fabs(FUN_10a18fc0()->FUN_10a18e80(1));
    if (AbsB + fabs(A) != DAT_10eafbdc)
        return 1;
    return 0;
}
