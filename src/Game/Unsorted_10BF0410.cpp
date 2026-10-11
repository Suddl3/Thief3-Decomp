// Game/Unsorted_10BF0410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10BB8330.h"
#include "Game/Class_10BB82C0.h"

class Class_10BF0870
{
public:
    bool FUN_10bf0870();
    int FUN_10bef240();
    bool FUN_10bf0150(Class_10BFF460* A, int B);

    char Unknown00[4];
    Class_10BBB410* Unknown04;
    char Unknown08[0x74];
    int Unknown7C;
};

// FUNCTION: 0x10BF0870 ?FUN_10bf0870@Class_10BF0870@@QAE_NXZ
bool Class_10BF0870::FUN_10bf0870()
{
    Class_10BFF460* Obj = Unknown04->FUN_10bbb410();
    if (!Obj)
        return false;
    bool R = true;
    if (FUN_10bef240() != 1)
    {
        if (((Class_10BB8330*)Unknown04)->FUN_10bb8330())
            R = ((Class_10BB82C0*)Unknown04)->FUN_10bb82c0(Unknown7C);
        else
            R = FUN_10bf0150(Obj, Unknown7C);
    }
    return R;
}
