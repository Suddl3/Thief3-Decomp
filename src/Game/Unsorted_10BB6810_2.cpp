// Game/Unsorted_10BB6810_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C04830.h"
#include "Game/Class_10EC0808.h"
#include "Game/Class_10BB67F0.h"

class Class_10BAA3C0;

// The list FUN_10aa7220 returns: its count, then its items.
struct Struct_10BB6810_List
{
    int Unknown00;
    char Pad04[0x4];
    Class_10C04830** Unknown08;
};

// FUNCTION: 0x10BB6810 ?FUN_10bb6810@Class_10BB67F0@@QAEPAXHPAVClass_10EC0808@@HPAXPAVClass_10BAA3C0@@@Z
void* Class_10BB67F0::FUN_10bb6810(int Unused, Class_10EC0808* Owner, int B, void* C, Class_10BAA3C0* D)
{
    if (Owner == 0)
        return FUN_10bb62a0(Unknown00, B, C, D);
    if (FUN_10bb4590((int)Owner, B, (int)C) == 1)
        return Owner;
    for (int I = 0; I < ((Struct_10BB6810_List*)Owner->FUN_10aa7220())->Unknown00; I++)
    {
        Class_10C04830* Item = ((Struct_10BB6810_List*)Owner->FUN_10aa7220())->Unknown08[I];
        int Found = Item->FUN_10c04830((int)Owner);
        if (FUN_10bb4590(Found, B, (int)C) == 1)
            return (void*)Found;
    }
    return FUN_10bb62a0(Unknown00, B, C, D);
}
