// Game/Unsorted_10A6B540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first
#include "Core/Core.h"
#include "Game/FArchive.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10A6B770.h"
#include "Game/Class_10A6BD80.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10A6BD80_Param
{
public:
    char Unknown00[0x24];
    bool Unknown24;
    bool Unknown25;
    bool Unknown26;
};

// FUNCTION: 0x10A6B770 ?FUN_10a6b770@Class_10A6B770@@QAEXAAVFArchive@@@Z
void Class_10A6B770::FUN_10a6b770(FArchive& Ar)
{
    FUN_10b052a0(Ar, &Unknown04);
    FUN_10b052a0(Ar, &Unknown10);
    Ar.Serialize(&Unknown1C, 4);
    Ar.Serialize(&Unknown20, 4);
    Ar.Serialize(&Unknown24, 1);
    Ar.Serialize(&Unknown25, 1);
    Ar.Serialize(&Unknown26, 1);
    if (Ar.Unknown14)
        Unknown28 = 0;
}

// FUNCTION: 0x10A6BD80 ?FUN_10a6bd80@Class_10A6BD80@@QAE_NHPAVClass_10A6BD80_Param@@@Z
bool Class_10A6BD80::FUN_10a6bd80(int A, Class_10A6BD80_Param* B)
{
    if (B->Unknown25 || B->Unknown24)
    {
        if (!B->Unknown26)
            Virtual7(A);
        return false;
    }
    int Key;
    if (((Class_1098E330*)A)->FUN_1098e330(0x40800056, &Key) && Key)
    {
        if (B->Unknown26)
        {
            B->Unknown25 = true;
            return false;
        }
        Virtual7(A);
        return false;
    }
    return true;
}
