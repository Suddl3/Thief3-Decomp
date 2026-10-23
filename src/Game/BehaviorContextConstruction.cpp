// Game/BehaviorContextConstruction.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Game/Class_10E93B5C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    Class_10E93B5C(int A, int B, int C, int D, float E, float F,
                  bool G, int H, int I, const cStructArray* Values);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    float Unknown14;
    float Unknown18;
    bool Unknown1C;
    int Unknown20;
    int Unknown24;
    cStructArray Unknown28;
};

// FUNCTION: 0x10BF7B90 ??0Class_10E93B5C@@QAE@HHHHMM_NHHPBVcStructArray@@@Z
Class_10E93B5C::Class_10E93B5C(int A, int B, int C, int D, float E, float F,
                             bool G, int H, int I, const cStructArray* Values)
    : Unknown00(DAT_10e93b5c), Unknown04(A), Unknown08(B), Unknown0C(C), Unknown10(D),
      Unknown14(E), Unknown18(F), Unknown1C(G), Unknown20(H), Unknown24(I)
{
    if (Values)
        Unknown28.CopyFrom(*Values);
}
