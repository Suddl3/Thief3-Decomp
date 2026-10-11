// Game/Unsorted_10B6FA00_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B6FC70.h"

// The object Class_10B6FDA0's pointer names: a flags word at +0x74.
class Class_10B6FBA0_Unknown00
{
public:
    char Unknown00[0x74];
    int Unknown74;
};

// Class_10B6FDA0 copied whole from include/Game/Class_10B6FDA0.h, with the pointer at +0x00 and the id at +0x68.
class Class_10B6FDA0
{
public:
    Class_10B6FDA0();
    ~Class_10B6FDA0();

    Class_10B6FBA0_Unknown00* Unknown00;
    char Unknown04[0x64];
    int Unknown68;
    char Unknown6C[0x18];
};

// Class_10E871C8 copied whole from include/Game/Class_10E871C8.h, with Virtual0 taking the flag.
class Class_10E871C8
{
public:
    virtual void Virtual0(bool Flag);

    Class_10E871C8();

    void FUN_10b70d40(int p1, int p2);
    void FUN_10b70db0(int A);

    Class_10B6FDA0 Unknown04[500];
    Class_10B6FC70 Unknown101D4[10];
    int Unknown102EC;
    int Unknown102F0;
    int Unknown102F4;
    float Unknown102F8;
    int Unknown102FC;
};

// FUNCTION: 0x10B6FBA0 ?Virtual0@Class_10E871C8@@UAEX_N@Z
void Class_10E871C8::Virtual0(bool Flag)
{
    Class_10B6FDA0* Row = Unknown04;
    int Rows = 100;
    do
    {
        if (Row[0].Unknown68 != -1)
        {
            Class_10B6FBA0_Unknown00* Object = Row[0].Unknown00;
            if (Object)
            {
                if (Flag)
                    Object->Unknown74 &= ~0x200;
                else
                    Object->Unknown74 |= 0x200;
            }
        }
        if (Row[1].Unknown68 != -1)
        {
            Class_10B6FBA0_Unknown00* Object = Row[1].Unknown00;
            if (Object)
            {
                if (Flag)
                    Object->Unknown74 &= ~0x200;
                else
                    Object->Unknown74 |= 0x200;
            }
        }
        if (Row[2].Unknown68 != -1)
        {
            Class_10B6FBA0_Unknown00* Object = Row[2].Unknown00;
            if (Object)
            {
                if (Flag)
                    Object->Unknown74 &= ~0x200;
                else
                    Object->Unknown74 |= 0x200;
            }
        }
        if (Row[3].Unknown68 != -1)
        {
            Class_10B6FBA0_Unknown00* Object = Row[3].Unknown00;
            if (Object)
            {
                if (Flag)
                    Object->Unknown74 &= ~0x200;
                else
                    Object->Unknown74 |= 0x200;
            }
        }
        if (Row[4].Unknown68 != -1)
        {
            Class_10B6FBA0_Unknown00* Object = Row[4].Unknown00;
            if (Object)
            {
                if (Flag)
                    Object->Unknown74 &= ~0x200;
                else
                    Object->Unknown74 |= 0x200;
            }
        }
        Row += 5;
    } while (--Rows != 0);
}
