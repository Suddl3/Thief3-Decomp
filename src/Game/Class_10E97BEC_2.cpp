// Game/Class_10E97BEC_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The header's cIntArray, copied whole with its inline SetCount added (the header only declares it).
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
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
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
                Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

// The pointee of Data's entries: the value is stored in its first field.
class Class_10C0ADD0_Data
{
public:
    int Unknown00;
};

class Class_10E97BEC : public cIntArray
{
public:
    virtual ~Class_10E97BEC();
    virtual void Virtual1();
    virtual void SetAllAndClear(int Value);
};

// FUNCTION: 0x10C0ADD0 ?SetAllAndClear@Class_10E97BEC@@UAEXH@Z
void Class_10E97BEC::SetAllAndClear(int Value)
{
    for (int i = 0; i < Count; i++)
        ((Class_10C0ADD0_Data*)Data[i])->Unknown00 = Value;
    SetCount(0);
}
