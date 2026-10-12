// Game/Unsorted_10BC6A80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Class_10E97B00's destructor is implicit (inlined on the normal path).
#include "Game/Class_10E97B00.h"
#include "Game/cString.h"
#include "Game/Class_10BC9A50.h"

// FUNCTION: 0x10BC9A50 ?ShopOwnerNoCash@Class_10BC9A50@@QAE_NXZ
bool Class_10BC9A50::ShopOwnerNoCash()
{
    Class_10E97B00 Name("+shopowner:nocash");
    cString Text(DAT_10e47660);
    FUN_10bc7d70(&Name, 0x28, 4, &Text, true);
    return true;
}
