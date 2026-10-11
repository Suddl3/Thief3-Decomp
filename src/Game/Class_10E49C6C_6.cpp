// Game/Class_10E49C6C_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10936A40.h"
#include "Game/Struct_10924210.h"

class IDirect3DBaseTexture8;

struct Info_10952690;

// Game/Class_10936AC0.h copied whole, with the three methods of 0x10938000..0x10938430 added.
class Class_10936AC0 : public Class_10936A40
{
public:
    void FUN_10936ac0(int A, int B);
    void FUN_10936b20(int A, int B);
    void FUN_1091ef90();
    void FUN_10937280(int A, Info_10952690* Info);
    void FUN_109371d0(int p1, int p2);
    void FUN_10937310(int Index, int Value);
    void FUN_10936bf0(int A);
    void FUN_10938000();
    void FUN_10938150(float A, float B, float C, float D);
    void FUN_10938430();

    char Pad01[0xb];
    char Pad81F[0x1];
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    IDirect3DBaseTexture8* Unknown1C[4];
    char Pad2C[0x7d0];
    Struct_10924210 Unknown7FC;
};

extern Class_10936AC0* DAT_10f31be0;

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

class Class_10E49C6C
{
public:
    void FUN_109301d0();

    char Unknown00[0x50];
    int m_ItemCount;
    int Unknown54;
    Class_109301D0_Unknown58** m_Items;
};

// FUNCTION: 0x109301D0 ?FUN_109301d0@Class_10E49C6C@@QAEXXZ
void Class_10E49C6C::FUN_109301d0()
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
