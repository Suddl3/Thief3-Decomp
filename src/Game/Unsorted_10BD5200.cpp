// Game/Unsorted_10BD5200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

struct Struct_10BAEC40_Unknown08;

Class_10905A90_Member* GetAllocator();

class cStructArray
{
public:
    cStructArray() : m_Count(0), m_AllocBytes(0), m_Items(0) {}
    ~cStructArray();
    void SetCount(int Count);
    void FUN_10baec40();
    void Empty()
    {
        SetCount(0);
        if (m_AllocBytes)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_AllocBytes = 0;
        }
    }
    void CopyFrom(const cStructArray& Other);
    void MoveRange(int A, int B, int C);

    int m_Count;
    int m_AllocBytes;
    Struct_10BAEC40_Unknown08* m_Items;
};

extern void* DAT_10e93b5c[];

class Class_10E93B5C
{
public:
    Class_10E93B5C(const Class_10E93B5C& Other);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    int Unknown20;
    int Unknown24;
    cStructArray Unknown28;
};

// FUNCTION: 0x10BD5B10 ??0Class_10E93B5C@@QAE@ABV0@@Z
Class_10E93B5C::Class_10E93B5C(const Class_10E93B5C& Other)
    : Unknown00(DAT_10e93b5c), Unknown04(Other.Unknown04), Unknown08(Other.Unknown08), Unknown0C(Other.Unknown0C),
      Unknown10(Other.Unknown10), Unknown14(Other.Unknown14), Unknown18(Other.Unknown18), Unknown1C(Other.Unknown1C),
      Unknown20(Other.Unknown20), Unknown24(Other.Unknown24)
{
    if (Other.Unknown28.m_Count > 0)
        Unknown28.CopyFrom(Other.Unknown28);
}
