// Game/Unsorted_1094EEE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10939570.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1094EEE0.h"

class Class_10953590;

Class_10905A90_Member* FUN_10905aa0();

extern Class_10939570* DAT_10f323fc;

class Class_1094EEE0_UnknownFC
{
public:
    Class_10953590* Unknown00;
};

// FUNCTION: 0x1094EEE0 ?FUN_1094eee0@Class_1094EEE0@@QAEXPBDH@Z
void Class_1094EEE0::FUN_1094eee0(const char* Name, int Index)
{
    Class_10953590* Obj = UnknownFC[Index]->Unknown00;
    if (Obj)
        DAT_10f323fc->FUN_1093bce0(Obj);
    else
        UnknownF0++;
    this->Virtual10(Index, DAT_10f323fc->FUN_1093bd40((int*)&Class_109081E0(Name), 0, 0));
}
