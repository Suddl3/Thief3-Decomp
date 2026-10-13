// Game/Unsorted_10B4C320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"
#include "Game/Class_10A18E80.h"
#include "Game/Class_10EB79F4.h"
#include "Game/Class_10AA9D90.h"
#include "Game/Class_10B4C620.h"
#include "Game/Class_10B255F0.h"

class FArchive;

class Object_10A18FC0;

extern float DAT_10eafbdc;

Object_10A18FC0* FUN_10a18fc0();

Class_10B255F0* GetSelection();

class Class_1098E330
{
public:
    char Unknown00[0x440];
    Class_10971570* Unknown440;
};

// FUNCTION: 0x10B4C620 ?FUN_10b4c620@Class_10B4C620@@QAEXPAVClass_1098E330@@@Z
void Class_10B4C620::FUN_10b4c620(Class_1098E330* A)
{
    if (((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(6) > DAT_10eafbdc)
    {
        if (A->Unknown440)
        {
            bool Out = false;
            A->Unknown440->FUN_10971570(0x20000bd, &Out);
            FUN_10b3add0(Out);
            return;
        }
        if (!((Class_10EB79F4*)GetSelection())->FUN_10b24d60())
        {
            if (!GetSelection()->FUN_10b24f70())
                GetSelection()->FUN_10b261e0();
        }
    }
    Virtual4();
}
