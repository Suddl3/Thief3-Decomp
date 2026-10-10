// Game/Unsorted_10B9CDE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410_Item.h"

class Class_10E975A0 : public Class_10B9E410_Item
{
public:
    void FUN_10bef060();
};

class Class_10B9E410
{
public:
    void FUN_10b9cf20();

    Class_10B9E410_Item* Top()
    {
        if (Unknown10 == 0)
            return 0;
        return Unknown18[Unknown10 - 1];
    }

    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[4];
    Class_10B9E410_Item** Unknown18;
};

// FUNCTION: 0x10B9CF20 ?FUN_10b9cf20@Class_10B9E410@@QAEXXZ
void Class_10B9E410::FUN_10b9cf20()
{
    if (Top() && Top()->Virtual3() == 0xB)
        static_cast<Class_10E975A0*>(Top())->FUN_10bef060();
}
