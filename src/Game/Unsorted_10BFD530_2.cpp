// Game/Unsorted_10BFD530_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BAEC00.h"
#include "Game/Class_10BFD780.h"

class Class_10BFD780_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual bool Virtual12(int Key);
    virtual void Virtual13(int Key);
};

struct Struct_10BFD780_Elem
{
    int Unknown00;
    int Key;
    char Pad08[0xc];
};

// FUNCTION: 0x10BFD780 ?RemoveByKey@Class_10BFD780@@QAEXH@Z
void Class_10BFD780::RemoveByKey(int Key)
{
    for (int i = 0; i < m_Objects.Count; i++)
    {
        Class_10BFD780_Unknown10* Obj = (Class_10BFD780_Unknown10*)m_Objects.Data[i];
        if (Obj->Virtual12(Key))
        {
            if (Unknown14 == Obj)
                Unknown14 = 0;
            if (Unknown18 == Obj)
                Unknown18 = 0;
            if (Unknown1C == Obj)
                Unknown1C = 0;
            cIntArray* Arr = &m_Objects;
            int Tmp = Arr->Data[i];
            int Last = Arr->Count - 1;
            Arr->Data[i] = Arr->Data[Last];
            Arr->Data[Last] = Tmp;
            Arr->SetCount(Arr->Count - 1);
            i--;
            Obj->Virtual5(1);
        }
        else
        {
            Obj->Virtual13(Key);
        }
    }
    for (int j = 0; j < m_Entries.m_Count; j++)
    {
        Struct_10BFD780_Elem* Elem = (Struct_10BFD780_Elem*)m_Entries.m_Data;
        if (Elem[j].Key == Key)
        {
            m_Entries.FUN_10bfc320(j, m_Entries.m_Count - 1);
            m_Entries.SetCount(m_Entries.m_Count - 1);
            j--;
        }
    }
}
