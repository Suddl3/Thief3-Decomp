// Game/Class_10A4EFB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A4EFB0.h"
#include "Game/Class_10905A90_Member.h"
#include "Core/Core.h"
#include "Game/Class_10A4FC00.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10BB7C00.h"

Class_10905A90_Member* GetAllocator();

// cString as the game declares it, with the destructor's body inline.
class cString
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// The element: 8 bytes, an int and a string.
class Class_10A4E9D0_m_Buffer
{
public:
    int Unknown00;
    cString Unknown04;
};

// FUNCTION: 0x10A4E9D0 ?Resize@Class_10A4EFB0@@QAEXH@Z
void Class_10A4EFB0::Resize(int Count)
{
    int OldCount = Unknown00;
    int Capacity = !m_Buffer ? 0 : m_BufferSize / sizeof(Class_10A4E9D0_m_Buffer);
    for (int i = Count; i < OldCount; i++)
    {
        Class_10A4E9D0_m_Buffer* Element = (Class_10A4E9D0_m_Buffer*)m_Buffer + i;
        Element->Unknown04.~cString();
    }
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Class_10A4E9D0_m_Buffer), 0, 0, 0, 0);
        m_BufferSize = NewCapacity * sizeof(Class_10A4E9D0_m_Buffer);
        m_Buffer = Block;
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            m_BufferSize = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Class_10A4E9D0_m_Buffer), 0, 0, 0, 0);
            m_BufferSize = NewCapacity * sizeof(Class_10A4E9D0_m_Buffer);
            m_Buffer = Block;
        }
    }
    for (int j = OldCount; j < Count; j++)
    {
        Class_10A4E9D0_m_Buffer* Element = (Class_10A4E9D0_m_Buffer*)m_Buffer + j;
        if (Element)
        {
            Element->Unknown04.Unknown00 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}

// FUNCTION: 0x10A4EFB0 ?Free@Class_10A4EFB0@@QAEXXZ
void Class_10A4EFB0::Free()
{
    Resize(0);
    if (m_BufferSize)
    {
        GetAllocator()->Virtual5(m_Buffer);
        m_Buffer = 0;
        m_BufferSize = 0;
    }
}
