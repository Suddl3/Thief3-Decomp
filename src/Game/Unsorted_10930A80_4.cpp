// Game/Unsorted_10930A80_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_109262B0.h"

class Class_10931F10_Unknown00
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10931F10_Unknown08
{
public:
    Class_10931F10_Unknown00 Unknown00;
    int Unknown0C;
    Class_10BFBD70 Unknown10;
    Class_10BFBD70 Unknown1C;
    Class_10BFBD70 Unknown28;
    int Unknown34;
    int Unknown38;
    bool Unknown3C;
    int Unknown40;
};

// FUNCTION: 0x10931F10 ?FUN_10931f10@Class_109262B0@@QAEXABV1@@Z
void Class_109262B0::FUN_10931f10(const Class_109262B0& Other)
{
    FUN_10926020(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
    {
        Class_10931F10_Unknown08* Src = (Class_10931F10_Unknown08*)Other.Unknown08 + i;
        Class_10931F10_Unknown08* Dst = (Class_10931F10_Unknown08*)Unknown08 + i;
        Dst->Unknown00 = Src->Unknown00;
        Dst->Unknown0C = Src->Unknown0C;
        Class_10BFBD70& Dst10 = Dst->Unknown10;
        Dst10.FUN_10bfbd70(Src->Unknown10.Unknown00);
        for (int j = 0; j < Dst10.Unknown00; j++)
            Dst10.Unknown08[j] = Src->Unknown10.Unknown08[j];
        Class_10BFBD70& Dst1C = Dst->Unknown1C;
        Dst1C.FUN_10bfbd70(Src->Unknown1C.Unknown00);
        for (int j = 0; j < Dst1C.Unknown00; j++)
            Dst1C.Unknown08[j] = Src->Unknown1C.Unknown08[j];
        Class_10BFBD70& Dst28 = Dst->Unknown28;
        Dst28.FUN_10bfbd70(Src->Unknown28.Unknown00);
        for (int j = 0; j < Dst28.Unknown00; j++)
            Dst28.Unknown08[j] = Src->Unknown28.Unknown08[j];
        Dst->Unknown34 = Src->Unknown34;
        Dst->Unknown38 = Src->Unknown38;
        Dst->Unknown3C = Src->Unknown3C;
        Dst->Unknown40 = Src->Unknown40;
    }
}
