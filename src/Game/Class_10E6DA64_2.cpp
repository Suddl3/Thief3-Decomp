// Game/Class_10E6DA64_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10AAB7D0
{
public:
    ~Class_10AAB7D0()
    {
        SetCount(0);
        if (m_ByteCapacity)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_ByteCapacity = 0;
        }
    }

    int m_Count;
    int m_ByteCapacity;
    void* m_Data;

    void SetCount(int NewCount);
};

class Class_10E6DA64
{
public:
    virtual ~Class_10E6DA64();
    Class_10E6DA64* Init();

    cIntArray Unknown04;
    Class_10AAB7D0 Unknown10;
};

// FUNCTION: 0x10AAB8D0 ??1Class_10E6DA64@@UAE@XZ
Class_10E6DA64::~Class_10E6DA64()
{
}

// FUNCTION: 0x10AABA30 ??_GClass_10E6DA64@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AAB8D0's definition in this unit.
