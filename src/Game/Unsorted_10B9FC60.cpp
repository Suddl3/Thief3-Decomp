// Game/Unsorted_10B9FC60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

class FArchive;

Class_10905A90_Member* GetAllocator();

// cCharArray with the destructor its members need: the body of cCharArray::Free, inline.
class cCharArray
{
public:
    ~cCharArray()
    {
        Resize(0);
        if (m_Capacity)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_Capacity = 0;
        }
    }

    void Resize(int Count);
    void Free();

    int m_Count;
    int m_Capacity;
    char* m_Data;
};

// Class_10B9FC20 with the destructor its members need: the body of Class_10B9FC20::Free, inline.
class Class_10B9FC20
{
public:
    ~Class_10B9FC20()
    {
        FUN_10b9f6d0(0);
        if (m_Capacity)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_Capacity = 0;
        }
    }

    void FUN_10b9f6d0(int Count);
    void Free();

    int Unknown00;
    int m_Capacity;
    void* m_Data;
};

class Class_10E8C008
{
public:
    virtual void Serialize(FArchive& Ar);
    ~Class_10E8C008();

    cCharArray Unknown04;
    cCharArray Unknown10;
    Class_10B9FC20 Unknown1C;
    cCharArray Unknown28;
    cCharArray Unknown34;
};

// FUNCTION: 0x10B9FC60 ??1Class_10E8C008@@QAE@XZ
Class_10E8C008::~Class_10E8C008()
{
}
