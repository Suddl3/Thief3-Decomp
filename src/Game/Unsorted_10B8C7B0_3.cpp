// Game/Unsorted_10B8C7B0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8C810.h"

struct Struct_10D9E5E0_Param;

struct Struct_10B7C170;

class Class_10CAFD00;

struct Struct_10D9E5E0_Param
{
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
    virtual void Virtual18(float A);

    void FUN_10b8a880(int A);

    char Pad04[4];
    int Unknown08;
};

class Class_10B8C810_Unknown14
{
};

class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    int FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();
    void FUN_10d9a3b0(Class_10B8C810_Unknown14* A);

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B8C810 ?Clear@Class_10B8C810@@QAEXXZ
void Class_10B8C810::Clear()
{
    if (Unknown0C && Unknown19)
    {
        for (int i = 0; i < Unknown0C; i++)
            FUN_10d9dcb0()->FUN_10d9a3b0(Unknown14[i]);
        for (int i = 0; i < m_EntryCount; i++)
        {
            Struct_10D9E5E0_Param* Element = m_Entries[i];
            if (Element && Element->Unknown08 == 3)
                Element->FUN_10b8a880(0);
        }
        Unknown19 = false;
    }
    if (m_SingleMode)
    {
        FUN_10d9dcb0()->FUN_10d9e5e0(m_Single);
        return;
    }
    for (int i = 0; i < m_EntryCount; i++)
        FUN_10d9dcb0()->FUN_10d9e5e0(m_Entries[i]);
}
