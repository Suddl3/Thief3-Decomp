// Game/Unsorted_1092F850.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10928760.h"
#include "Game/Class_109514F0.h"
#include "Game/Class_10951900.h"
#include "Game/Class_109523B0.h"
#include "Game/Class_109523C0.h"

class Class_109301D0_Unknown58;

class Class_1094B030;

class Class_10E4AC6C;

// Game/Class_10952390.h copied here: this unit reads the kind of the item
// at 0x0C of the table the item points at.
struct Struct_10952390_A
{
    char Unknown00[0xC];
    int Unknown0C;
};

struct Struct_10952390_B;

class Class_10952390
{
public:
    bool FUN_10952390();

    Struct_10952390_A* Unknown00;
    Struct_10952390_B* Unknown04;
};

// Game/Class_1092F270.h copied here: this unit needs the fields at 0x48 and
// 0x50 that the header keeps as padding.
class Class_1092F270
{
public:
    Class_10951900* GetOrCreate(bool A);

    union
    {
        char Pad00[0x48];
        char Unknown00[0x48];
    };
    bool Unknown48;
    char Pad49[0x7];
    int Unknown50;
    char Pad54[0x5C];
    union
    {
        Class_10E4AC6C* Unknown0B0;
        int UnknownB0;
    };
};

// The virtuals the vocabulary object at the third argument has.
class Class_1092FAE0_C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6();
    virtual void* Virtual7(int A);
    virtual void Virtual8();
    virtual void Virtual9(int A, int B);
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual bool Virtual18(int A, int B);
};

// The renderer the vocabulary talks to.
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
    virtual void Virtual11(int A, unsigned char B, float C);
};

extern Class_10E4A538* DAT_10f2c8e4;

extern int DAT_10f341a4;

extern int DAT_10f341a8;

// Game/Vocabulary.h copied here: this unit needs FUN_1092f850, which the
// header does not declare yet.
class Vocabulary : public Class_10928760
{
public:
    virtual ~Vocabulary();

    Vocabulary();

    void FUN_1092ff00(int A, int B);
    bool FUN_10925130(int A);
    void FUN_1092fae0(int A, int B, void* C);
    void FUN_10925190(int A);
    void FUN_10930110(int Param1, int Param2);
    bool FUN_10925160(int A);
    void FUN_10930170(int A, int B);
    void FUN_1092ff60(int A, int B);
    void FUN_1092fcb0(int A, int B, int C);
    void FUN_109301d0();
    void FUN_1092ffd0(int A, int B);
    void FUN_10930070(int A, int B);
    void FUN_1092fde0(Class_1094B030* A);
    bool FUN_1092f850(int A, int B, void* C, int D, void* E, int F);

    int Unknown04;
    char Pad08[0x48];
    int m_ItemCount;
    int Unknown54;
    Class_109301D0_Unknown58** m_Items;
    char Pad5C[0x18];
    int Unknown74;
    char Pad78[0x4];
    Class_1094B030** Unknown7C;
};

// FUNCTION: 0x1092FAE0 ?FUN_1092fae0@Class_10930110@@QAEXHHPAX@Z
void Vocabulary::FUN_1092fae0(int A, int B, void* C)
{
    Class_1092F270* vocab = (Class_1092F270*)C;
    if (!vocab->Unknown48)
        return;
    int count = ((Class_1092FAE0_C*)vocab)->Virtual6();
    bool flag = false;
    if (count == 0)
        return;

    for (int i = 0; i < count; i++)
    {
        DAT_10f341a4 = 0;
        DAT_10f341a8 = 0;
        int n = 1;
        if (((Class_1092FAE0_C*)vocab)->Virtual18(A, i))
        {
            void* items[2];
            items[0] = ((Class_1092FAE0_C*)vocab)->Virtual7(i);
            Class_109514F0* obj = (Class_109514F0*)vocab->GetOrCreate(false);
            if (obj)
            {
                void* result = obj->FUN_109514f0(items[0], A, B);
                items[1] = result;
                if (items[0] != result)
                {
                    if (((Class_10952390*)items[0])->Unknown00->Unknown0C == 1 && obj->Unknown28 == 2)
                        n = 2;
                    else
                        items[0] = result;
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (B == 6)
                {
                    if (A == 2 || A == 4 || ((Class_10952390*)items[j])->FUN_10952390())
                        DAT_10f2c8e4->Virtual11(1, ((Class_109523B0*)items[j])->FUN_109523b0(), (float)((Class_109523C0*)items[j])->FUN_109523c0() * (1.0f / 255.0f));
                    else
                        DAT_10f2c8e4->Virtual11(0, 0, 0.0f);
                }
                if (!flag)
                {
                    ((Class_1092FAE0_C*)vocab)->Virtual8();
                    flag = true;
                }
                if (FUN_1092f850(A, B, items[j], vocab->Unknown50, obj, i))
                    ((Class_1092FAE0_C*)vocab)->Virtual9(B, i);
            }
        }
    }
}
