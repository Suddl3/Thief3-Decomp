// Game/Unsorted_10C60D80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C64AA0.h"
#include "Game/Class_10C60D80.h"
#include "Game/Class_10C64AC0.h"
#include "Game/Elem_10C64AC0.h"

class Class_10C662F0;

void operator delete(void* Ptr);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

Class_10C662F0* FUN_10c65090();

// FUNCTION: 0x10C60D80 ?ResizeBuffer@Class_10C60D80@@QAEXXZ
void Class_10C60D80::ResizeBuffer()
{
    if (m_BufferSize == 0)
    {
        ::operator delete(m_Buffer);
        m_Buffer = 0;
        return;
    }
    if (m_Buffer)
    {
        ::operator delete(m_Buffer);
        m_Buffer = 0;
    }
    unsigned Hi;
    unsigned Lo;
    ((Class_10C64AA0*)FUN_10c65090())->FUN_10c64aa0(Unknown120, &Hi, &Lo);
    Elem_10C64AC0* Elem = ((Class_10C64AC0*)FUN_10c65090())->FUN_10c64ac0(Hi);
    int Tag = 0;
    m_Buffer = operator new(m_BufferSize, Tag, 0, 0, 0, 0);
    Elem->FUN_10d57770(Unknown128 + Unknown124 + Lo);
    Elem->FUN_10d577b0(m_Buffer, m_BufferSize);
}
