// Game/Unsorted_10C379A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// cIntArray: copied whole from include/Game/cIntArray.h, with SetCount inline
// as this unit compiles it.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(int);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(int);
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
                Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(int);
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

// The object the function works on: its virtual methods are the ones the
// target calls.
class Class_10C37960
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual unsigned char Virtual32(int A);
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52(int A, int B);
    virtual bool Virtual53(int A, int* B);
};

// FUNCTION: 0x10C37B20 ?FUN_10c37b20@@YAPAXPAVClass_10C37960@@HH@Z
void* FUN_10c37b20(Class_10C37960* A, int B, int C)
{
    int Out;
    if (A->Virtual53(C, &Out))
        return (void*)Out;

    cIntArray Arr;
    if (B != 0)
    {
        Arr.SetCount(1);
        Arr.Data[0] = B;
    }
    int Result = B;
    if (C != 0 && C != B)
    {
        int Index = Arr.Count;
        Arr.SetCount(Index + 1);
        Arr.Data[Index] = C;
    }
    A->Virtual34();
    for (int i = Arr.Count - 1; i >= 0; i--)
    {
        int Item = Arr.Data[i];
        if (A->Virtual32(Item) == 1)
        {
            Result = Item;
            break;
        }
    }
    A->Virtual52(C, Result);
    return (void*)Result;
}
