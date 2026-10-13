// Game/Class_10B1B8A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABDAE0.h"
#include "Game/Class_10B197E0.h"
#include "Game/Class_10E79464.h"

class Class_10B1B8A0
{
public:
    void FUN_10b1a840();
    void EmptyArrays();

    char Unknown00[4];
    Class_10ABDAE0 m_Arrays[8];
};

// FUNCTION: 0x10B1ABA0 ?EmptyArrays@Class_10B1B8A0@@QAEXXZ
void Class_10B1B8A0::EmptyArrays()
{
    for (int i = 0; i < 8; i++)
        m_Arrays[i].SetCount(0);
    FUN_10b1a840();
}
