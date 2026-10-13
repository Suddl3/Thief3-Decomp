// Game/Class_10BBF5D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10BB8CC0.h"
#include "Game/Class_10BBDB10.h"
#include "Game/Class_10BBDC00.h"
#include "Game/Class_10BBDC70.h"
#include "Game/Class_10BBF5C0.h"
#include "Game/Class_10BBF5D0.h"
#include "Game/Class_10BC3F90.h"
#include "Game/Class_10BC4010.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E70A50.h"
#include "Game/Class_Field04.h"
#include "Game/Struct_10BC3F90.h"
#include "Game/cIntArray.h"

class AAIPathPoint;

class Class_10BC0EB0_Unknown08
{
public:
    AAIPathPoint* Unknown00;
};

class Class_10BC0EB0_Field00
{
public:
    int Unknown00;
    char Unknown04[4];
    Class_10BC0EB0_Unknown08* Unknown08;
    char Unknown0C[0xC];
    int Unknown18;
    char Unknown1C[4];
    AAIPathPoint** Unknown20;
    int Unknown24;
    char Unknown28[4];
    AAIPathPoint** Unknown2C;
};

// FUNCTION: 0x10BBF5D0 ?FUN_10bbf5d0@Class_10BBF5D0@@QAEHXZ
int Class_10BBF5D0::FUN_10bbf5d0()
{
    return Field00 + 0x24;
}

// FUNCTION: 0x10BC0EB0 ?FUN_10bc0eb0@Class_10BBF5D0@@QAEXPAVAAIPathPoint@@0@Z
void Class_10BBF5D0::FUN_10bc0eb0(AAIPathPoint* Point, AAIPathPoint* Other)
{
    Class_10BC0EB0_Field00* List = (Class_10BC0EB0_Field00*)Field00;
    if (List->Unknown00 > 0 && (Other == 0 || List->Unknown08->Unknown00 != Other))
    {
        do
        {
            FUN_10bc0150(Point, List->Unknown08->Unknown00);
            List = (Class_10BC0EB0_Field00*)Field00;
        } while (List->Unknown00 > 0);
    }
    List = (Class_10BC0EB0_Field00*)Field00;
    while (List->Unknown18 > 0)
    {
        FUN_10bc0150(Point, *List->Unknown20);
        List = (Class_10BC0EB0_Field00*)Field00;
    }
    List = (Class_10BC0EB0_Field00*)Field00;
    while (List->Unknown24 > 0)
    {
        FUN_10bc0150(Point, *List->Unknown2C);
        List = (Class_10BC0EB0_Field00*)Field00;
    }
}
