// Game/Unsorted_10C00C80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10C01990.h"
#include "Game/Class_10C01CE0.h"
#include "Game/Class_10E97B00.h"

// FUNCTION: 0x10C013A0 ??0Class_10E97B00@@QAE@PBD@Z
Class_10E97B00::Class_10E97B00(const char* Name) : Unknown04(Name)
{
}

// FUNCTION: 0x10C01990 ??0Class_10C01990@@QAE@HABVClass_1090A780@@@Z
Class_10C01990::Class_10C01990(int A, const Class_1090A780& B) : Unknown00(A), Unknown04(B)
{
}

// FUNCTION: 0x10C01CE0 ?RemoveAll@Class_10C01CE0@@QAEXXZ
void Class_10C01CE0::RemoveAll()
{
    while (Unknown00 > 0)
        RemoveEntry(0);
}
