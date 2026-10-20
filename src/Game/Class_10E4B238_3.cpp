// Game/Class_10E4B238_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4B238.h"

extern void* DAT_10e4b238[];

extern void* DAT_10e4b230[];

// FUNCTION: 0x109618A0 ?FUN_109618a0@Class_10E4B238@@QAEPAV1@XZ
Class_10E4B238* Class_10E4B238::FUN_109618a0()
{
    this->Class_10E4B180::Class_10E4B180();
    // the vtable pointer at offset 0
    *(void***)this = DAT_10e4b238;
    this->Unknown2C = DAT_10e4b230;
    return this;
}
