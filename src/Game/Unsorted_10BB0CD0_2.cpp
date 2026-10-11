// Game/Unsorted_10BB0CD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10978090.h"
#include "Game/Class_10AAB5C0.h"

class Class_1098E330;

class Class_10971570;

struct Struct_10BBD8B0;

class Class_10BBDC30
{
public:
    float FUN_10bbdbc0(int Id);
    bool FUN_10bbd870(int A, float* B);
    bool FUN_10bbd8b0(int A, bool* B);
    float FUN_10bbdad0(int A);
    bool FUN_10bbdc30(int A);
    bool FUN_10bbdcc0(int A);
    bool FUN_10bbd840(int A);
    void FUN_10bbdf10(int A, int B);

    char Unknown00[4];
    Class_1098E330* Unknown04;
    char Unknown08[4];
    Class_10971570* Unknown0C;
    char Unknown10[4];
    Class_10971570* Unknown14;
    int Unknown18;
    char Unknown1C[4];
    Struct_10BBD8B0** Unknown20;
};

class Class_1096A820
{
public:
    Class_1096A820* FUN_1096a820();

    int Unknown00;
    int Unknown04;
    Class_10BBDC30** Unknown08;
};

class Class_10BB0E40_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

int FUN_10c27900();

int FUN_10baa130(int A);

class Class_10E8C818
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb0e40(int A, int B, Class_10BB0E40_Param* C);
};

// FUNCTION: 0x10BB0E40 ?FUN_10bb0e40@Class_10E8C818@@UAEHHHPAVClass_10BB0E40_Param@@@Z
int Class_10E8C818::FUN_10bb0e40(int A, int B, Class_10BB0E40_Param* C)
{
    if (B != 0 && C != 0)
    {
        if (C->Virtual3() >= 3)
        {
            int Key = (int)C->Virtual4(0)->FUN_10978090();
            int Value = C->Virtual4(1)->FUN_10aab5c0();
            int Third = FUN_10baa130((int)C->Virtual4(2)->FUN_10978090());
            if (FUN_10c27900() == 0)
                return 0;
            Class_1096A820* List = ((Class_1096A820*)FUN_10c27900())->FUN_1096a820();
            for (int i = 0; i < List->Unknown00; i++)
            {
                Class_10BBDC30* Item = List->Unknown08[i];
                if (Item->FUN_10bbdcc0(0x4040025d) == Key)
                    Item->FUN_10bbdf10(Third, Value);
            }
            return 1;
        }
    }
    return 0;
}
