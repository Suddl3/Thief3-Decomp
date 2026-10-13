// Game/Unsorted_10914AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

class cString;

Class_10905A90_Member* GetAllocator();

class Class_1090FD40
{
public:
    Class_1090FD40() : m_Count(0), m_CapacityBytes(0), m_Items(0)
    {
        SetCount(0);
    }
    ~Class_1090FD40()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
    }
    int Add(const cString& Item);
    void SetCount(int Count);
    void FUN_1090fd00();
    void MoveItems(int A, int B, int C);
    void RemoveAt(int Index);
    void Insert(int Index, const cString& Value);
    void FUN_10a5b5b0(int A, int B);
    void RemoveUnordered(int Index);

    int m_Count;
    int m_CapacityBytes;
    cString* m_Items;
};

void FUN_10914ae0(int A, int B, int C, Class_1090FD40* D);

// FUNCTION: 0x10914CD0 ?FUN_10914cd0@@YAXHH@Z
void FUN_10914cd0(int A, int B)
{
    Class_1090FD40 Names;
    FUN_10914ae0(A, B, 0, &Names);
}
