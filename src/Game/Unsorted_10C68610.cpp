// Game/Unsorted_10C68610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C68610.h"

struct Struct_10C68610
{
};

// FUNCTION: 0x10C68610 ?Free@Class_10C68610@@QAEXXZ
void Class_10C68610::Free()
{
    for (int i = 0; i <= m_LastIndex; i++)
    {
        delete Unknown04[i];
        delete Unknown08[i];
    }
    delete Unknown04;
    delete Unknown08;
    Unknown04 = 0;
    Unknown08 = 0;
}
