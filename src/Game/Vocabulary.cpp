// Game/Vocabulary.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Vocabulary.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10928760.h"
#include "Game/Class_1092F130.h"
#include "Game/cIntArray.h"
#include "Game/Class_10936A40.h"
#include "Game/Struct_10924210.h"
#include "Game/cD3DStateCache.h"

extern bool DAT_10f2c759;

extern unsigned int DAT_10efef9c;

extern unsigned int DAT_10efefa0;

extern bool DAT_10f2c754;

extern int DAT_10f34130;

extern int DAT_10f34134;

extern int DAT_10f34138;

class Class_1092FFD0_Unknown7C;

extern bool DAT_10f2c755;

class Class_10E4A538
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

    char Pad04[0x2F8];
    Class_1092FFD0_Unknown7C* Unknown2FC;
};

extern Class_10E4A538* DAT_10f2c8e4;

struct Struct_1092FFD0
{
    void* Unknown00;
    int Unknown04;
};

class Class_1092FFD0_Unknown7C
{
public:
    char Pad00[0x64];
    int Unknown64;
    char Pad68[0xB8];
    int Unknown120;
    char Pad124[0x4];
    Struct_1092FFD0* Unknown128;
};

extern bool DAT_10f2c757;

extern bool DAT_10f2c758;

extern cD3DStateCache* DAT_10f31be0;

extern float DAT_10eafbdc;

extern float DAT_10e49684;

class Class_109301D0_Obj
{
public:
    char Unknown00[0x64];
    int Unknown64;
};

struct Struct_109301D0
{
    Class_109301D0_Obj* Obj;
    int Unknown04;
};

class Class_109301D0_Unknown58
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

    char Unknown04[0x60];
    int Unknown64;
    int Unknown68;
    Struct_109301D0* Unknown6C;
};

extern cIntArray DAT_10f31ba8;

// FUNCTION: 0x1092F830 ??0Vocabulary@@QAE@XZ
Vocabulary::Vocabulary()
{
}

// FUNCTION: 0x1092FF00 ?FUN_1092ff00@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_1092ff00(int A, int B)
{
    if (!DAT_10f2c759 && DAT_10efef9c < DAT_10efefa0 && FUN_10925130(6))
    {
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(A, 6, m_Items[i]);
        FUN_10925190(6);
    }
}

// FUNCTION: 0x1092FF60 ?FUN_1092ff60@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_1092ff60(int A, int B)
{
    if (!DAT_10f2c754 && FUN_10925130(1))
    {
        FUN_1092fcb0(DAT_10f34130, DAT_10f34134, DAT_10f34138);
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(A, 1, m_Items[i]);
        FUN_10925190(1);
    }
}

// FUNCTION: 0x1092FFD0 ?FUN_1092ffd0@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_1092ffd0(int A, int B)
{
    if (!DAT_10f2c755 && FUN_10925160(B))
    {
        for (B = 0; B < Unknown74; B++)
        {
            Class_1092FFD0_Unknown7C* Item = (Class_1092FFD0_Unknown7C*)Unknown7C[B];
            if (Item->Unknown64 == 2)
            {
                DAT_10f2c8e4->Unknown2FC = Item;
                DAT_10f2c8e4->Virtual12();
                int Count = Item->Unknown120;
                for (int J = 0; J < Count; J++)
                    FUN_1092fae0(A, 2, Item->Unknown128[J].Unknown00);
            }
        }
        FUN_10925190(2);
    }
}

// FUNCTION: 0x10930110 ?FUN_10930110@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_10930110(int Param1, int Param2)
{
    if (!DAT_10f2c757 && FUN_10925160(Param2))
    {
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(Param1, 4, m_Items[i]);
        FUN_10925190(4);
    }
}

// FUNCTION: 0x10930170 ?FUN_10930170@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_10930170(int A, int B)
{
    if (!DAT_10f2c758 && FUN_10925160(B))
    {
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(A, 5, m_Items[i]);
        FUN_10925190(5);
    }
}

// FUNCTION: 0x109301D0 ?FUN_109301d0@Vocabulary@@QAEXXZ
void Vocabulary::FUN_109301d0()
{
    DAT_10f31be0->FUN_10938000();
    Class_109301D0_Unknown58** Slot = m_Items;
    for (int i = 0; i < m_ItemCount; i++, Slot++)
    {
        Class_109301D0_Unknown58* Item = *Slot;
        float Value = (float)Item->Unknown64;
        int Count = 0;
        if (DAT_10eafbdc < Value)
        {
            Struct_109301D0* List = Item->Unknown6C;
            do
            {
                if (List->Obj->Unknown64 == 1)
                    Value -= DAT_10e49684;
                Count++;
                List++;
            } while ((float)Count < Value);
        }
        if (Value > 6.0f)
            Value = 6.0f;
        DAT_10f31be0->FUN_10938150(Value * 0.16666667f, DAT_10e49684 - Value * 0.16666667f, 0.0f, 1.0f);
        (*Slot)->Virtual12();
    }
    DAT_10f31be0->FUN_10938430();
}

// FUNCTION: 0x109302A0 ??1Vocabulary@@UAE@XZ
Vocabulary::~Vocabulary()
{
    DAT_10f31ba8.SetCount(0);
}

// FUNCTION: 0x10930630 ??_GVocabulary@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1092F830's definition in this unit.
