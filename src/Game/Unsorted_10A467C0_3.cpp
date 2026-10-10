// Game/Unsorted_10A467C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10A46810.h"

class Class_10A462B0
{
public:
    ~Class_10A462B0();

    char Unknown00[0x20];
};

// FUNCTION: 0x10A46810 ?FUN_10a46810@Class_10A46810@@QAEXHH@Z
void Class_10A46810::FUN_10a46810(int Index, int Count)
{
    for (int i = Index; i < Index + Count; i++)
        ((Class_10A462B0*)Unknown00)[i].~Class_10A462B0();
    FUN_10af3bd0(Index, Count, 0x20);
}
