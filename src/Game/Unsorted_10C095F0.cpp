// Game/Unsorted_10C095F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E97BE8.h"
#include "Game/Class_10D38640.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10BAA000.h"

struct Struct_10D38640;

class Object_10C09910
{
public:
    int Unknown00;
    char Unknown04[4];
    Struct_10BAA000** Unknown08;
};

void FUN_10c05660(Struct_10C05A80* Out, Struct_10D38640* Src);

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

// FUNCTION: 0x10C09910 ?FUN_10c09910@Class_10C0AA00@@QAEHHH@Z
int Class_10E97BE8::FUN_10c09910(int Item, int Arg)
{
    Struct_10C05A80 Pos;
    FUN_10c05660(&Pos, ((Class_10D38640*)Item)->FUN_10d38640());
    Pos.Unknown08 = Pos.Unknown08 + 64.0f;
    Object_10C09910* List = (Object_10C09910*)Arg;
    float BestDist = 0.0f;
    Struct_10BAA000* Best = 0;
    for (int i = 0; i < List->Unknown00; i++)
    {
        Struct_10BAA000* Cur = List->Unknown08[i];
        float Dist = DistanceSquared3D(&Cur->Unknown2C, &Pos);
        if (i == 0 || Dist < BestDist)
        {
            BestDist = Dist;
            Best = Cur;
        }
    }
    return (int)Best;
}
