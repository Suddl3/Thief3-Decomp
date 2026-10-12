// Game/Unsorted_10BAD9D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cVisualSubsystemArray.h"

Class_10905A90_Member* GetAllocator();

enum EInternal { EC_Internal };

inline void* operator new(unsigned int Size, EInternal* Mem) { return Mem; }

// Game/VisualSubsystem.h copied with the default constructor the element's loop runs (it stores the vtable, then zeroes Unknown04).
class VisualSubsystem
{
public:
    VisualSubsystem() { Unknown04 = 0; }
    VisualSubsystem(const VisualSubsystem& Other);
    virtual ~VisualSubsystem();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
};

// FUNCTION: 0x10BAD9D0 ?Resize@cVisualSubsystemArray@@QAEXH@Z
void cVisualSubsystemArray::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : m_CapacityBytes / sizeof(VisualSubsystem);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(VisualSubsystem), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(VisualSubsystem);
        m_Items = (VisualSubsystem*)Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(VisualSubsystem), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(VisualSubsystem);
            m_Items = (VisualSubsystem*)Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        VisualSubsystem* Element = m_Items + j;
        new ((EInternal*)Element) VisualSubsystem();
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
