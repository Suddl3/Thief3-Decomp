// Game/Unsorted_10C088B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10C08960.h"

// Declarations first
class AAIPawn;

class Class_10B9CAC0;

class Class_10BAA6B0_Param;

class Class_10C08960_Unknown10;

class Class_10BABED0;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param);

class Class_10BABED0 : public Class_10BAA8A0
{
};

class Class_10B9CAC0
{
public:
    void FUN_10b9d1a0(int A);
    void FUN_10b9d1c0(int A);
};

class Class_10C08960_Unknown10
{
public:
    char Unknown00[0xc];
    Class_10BAA6B0_Param* Unknown0C;
    char Unknown10[0x14];
    bool Unknown24;
};

// FUNCTION: 0x10C088B0 ?FUN_10c088b0@Class_10C08960@@QAEXXZ
void Class_10C08960::FUN_10c088b0()
{
    if (Unknown20)
        return;
    Class_10BABED0* A = FUN_10baa6b0(Unknown10->Unknown0C);
    if (A)
    {
        Class_10B9CAC0* B = A->FUN_10baa750();
        if (B)
            B->FUN_10b9d1a0((int)Unknown10);
    }
    if (Unknown08)
    {
        for (int i = 0; i < m_Count; i++)
        {
            Class_10BAA6B0_Param* Param = m_Params[i];
            if (Param && Unknown10->Unknown0C != Param)
            {
                Class_10BABED0* Other = FUN_10baa6b0(Param);
                if (Other)
                {
                    Class_10B9CAC0* Next = Other->FUN_10baa750();
                    if (Next)
                        Next->FUN_10b9d1c0((int)Unknown10);
                }
            }
        }
        Unknown10->Unknown24 = true;
    }
}
