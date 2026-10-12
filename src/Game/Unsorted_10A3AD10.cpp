// Game/Unsorted_10A3AD10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A3B460_Member.h"
#include "Game/cIntArray.h"
#include "Game/Class_10A3AD10.h"

class Class_10E667C4
{
public:
    virtual void FUN_10a3b460(int Message, int Param, int C, int D);

    bool FUN_10a3ad90(int Param);

    Class_10A3B460_Member Unknown04;
    char Unknown08[0x20];
    int m_Target;
};

// FUNCTION: 0x10A3AD10 ??0Class_10A3AD10@@QAE@ABV0@@Z
Class_10A3AD10::Class_10A3AD10(const Class_10A3AD10& Other)
    : Unknown00(Other.Unknown00), Unknown04(Other.Unknown04), Unknown10(Other.Unknown10),
      Unknown14(Other.Unknown14), Unknown18(Other.Unknown18), Unknown1C(Other.Unknown1C),
      Unknown20(Other.Unknown20), Unknown24(Other.Unknown24)
{
}

// FUNCTION: 0x10A3B460 ?FUN_10a3b460@Class_10E667C4@@UAEXHHHH@Z
void Class_10E667C4::FUN_10a3b460(int Message, int Param, int C, int D)
{
    bool NoTarget = m_Target == 0;
    switch (Message)
    {
    case 59:
        FUN_10a3ad90(Param);
        break;
    case 6:
    case 38:
    case 39:
        if (!NoTarget)
            Unknown04.Virtual5(Param);
        break;
    }
}
