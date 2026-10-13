// Game/Vocabulary_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10928760.h"
#include "Game/Vocabulary.h"

class Class_109301D0_Unknown58;

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

// FUNCTION: 0x1092FFD0 ?FUN_1092ffd0@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_1092ffd0(int A, int B)
{
    if (!DAT_10f2c755 && FUN_10925160(B))
    {
        for (B = 0; B < Unknown74; B++)
        {
            Class_1092FFD0_Unknown7C* Item = Unknown7C[B];
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
