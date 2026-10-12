// Game/Unsorted_10BAA000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAA000.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10BAA000.h"

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

struct Struct_10AA3520
{
    char Unknown00[8];
    Struct_10BAA000* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10BAA000 ?GetDistanceFalloff@Class_10BAA000@@QAEMXZ
float Class_10BAA000::GetDistanceFalloff()
{
    if (DAT_10f35dec && DAT_10f35dec->Unknown08)
    {
        Struct_10BAA000* Mine = Unknown34;
        float Dist = DistanceSquared3D(&Mine->Unknown2C, &DAT_10f35dec->Unknown08->Unknown2C);
        if (Dist > 1048576.0f)
            return DAT_10eafbdc;
        return DAT_10e49684 - Dist * 9.536743e-07f;
    }
    return DAT_10eafbdc;
}
