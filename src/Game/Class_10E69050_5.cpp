// Game/Class_10E69050_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E68F74.h"

Class_10905A90_Member* GetAllocator();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                m_CapacityBytes = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
    }

    int Unknown00;
    int m_CapacityBytes;
    void** Unknown08;
};

// What the array at +0x0C owns, deleted through its virtual destructor.
class Class_10A59050_Element
{
public:
    virtual ~Class_10A59050_Element();
};

class Class_10E69050 : public Class_10E68F74
{
public:
    virtual ~Class_10E69050();

    cIntArray m_Count;
    int m_Current;
};

// FUNCTION: 0x10A59030 ??_GClass_10E69050@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A59050's definition in this unit.

// FUNCTION: 0x10A59050 ??1Class_10E69050@@UAE@XZ
Class_10E69050::~Class_10E69050()
{
    int Count = m_Count.Unknown00;
    m_Current = 0;
    for (int i = 0; i < Count; i++)
        delete (Class_10A59050_Element*)m_Count.Unknown08[i];
}
