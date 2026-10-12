// Game/Unsorted_10A4EFF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A243F0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A4EFB0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A4F120 ?Reset@Class_10A4EFB0@@QAEXXZ
void Class_10A4EFB0::Reset()
{
    FUN_10a4e9d0(0);
    for (int i = 0; i < 0x42; i++)
    {
        unsigned Capacity;
        if (Unknown0C[i].m_Buffer == 0)
            Capacity = 0;
        else
            Capacity = (unsigned)Unknown0C[i].m_BufferBytes >> 2;
        GetAllocator()->Virtual8(0, 0);
        if ((int)Capacity < 0)
        {
            int Want = 0;
            if (Capacity)
                Want = 0x10;
            Unknown0C[i].m_Buffer = GetAllocator()->Virtual3(Unknown0C[i].m_Buffer, Want * 4, 0, 0, 0, 0);
            Unknown0C[i].m_BufferBytes = Want * 4;
        }
        else if ((int)(Capacity - 16) >= 0)
        {
            GetAllocator()->Virtual5(Unknown0C[i].m_Buffer);
            Unknown0C[i].m_Buffer = 0;
            Unknown0C[i].m_BufferBytes = 0;
        }
        GetAllocator()->Virtual9();
        Unknown0C[i].Unknown00 = 0;
    }
    for (int i = 0; i < 0xff; i++)
        Unknown324[i] = 0x40;
    for (int i = 0; i < 0xe; i++)
        Unknown720[i].Resize(0);
}
