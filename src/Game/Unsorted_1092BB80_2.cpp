// Game/Unsorted_1092BB80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_1092C0A0.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* GetAllocator();

class cString : public Class_1090A780
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
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }

    char Unknown04[8];
    cString* Unknown0C;
    cString* Unknown10;
};

// FUNCTION: 0x1092C0A0 ?Clear@Class_1092C0A0@@QAEXXZ
void Class_1092C0A0::Clear()
{
    cString* P = m_Head;
    while (P && m_Count)
    {
        cString* Next = P->Unknown10;
        if (!P->Unknown0C)
            m_Head = P->Unknown10;
        else
            P->Unknown0C->Unknown10 = P->Unknown10;
        if (!P->Unknown10)
            m_Tail = P->Unknown0C;
        else
            P->Unknown10->Unknown0C = P->Unknown0C;
        m_Count--;
        delete P;
        P = Next;
    }
}
