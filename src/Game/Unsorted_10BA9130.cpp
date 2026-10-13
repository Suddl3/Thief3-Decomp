// Game/Unsorted_10BA9130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10EC0808.h"
#include "Game/Class_10C04810.h"

class Class_10BA9130_FUN_10aa7220
{
public:
    int Unknown00;
    char Pad04[0x4];
    Class_10C04810** Unknown08;
};

// FUNCTION: 0x10BA9130 ?FUN_10ba9130@@YAPAVClass_10C04810@@PAVClass_10EC0808@@H@Z
Class_10C04810* FUN_10ba9130(Class_10EC0808* A, int B)
{
    for (int i = 0; i < ((Class_10BA9130_FUN_10aa7220*)A->FUN_10aa7220())->Unknown00; i++)
    {
        Class_10C04810* Item = ((Class_10BA9130_FUN_10aa7220*)A->FUN_10aa7220())->Unknown08[i];
        if (Item->FUN_10c04810(0) == B)
            return Item;
        if (Item->FUN_10c04810(1) == B)
            return Item;
    }
    return 0;
}
