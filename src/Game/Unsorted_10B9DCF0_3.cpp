// Game/Unsorted_10B9DCF0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ABF100.h"
#include "Game/Class_10BAC050.h"

class Class_10BB9FC0;

class Class_10B9E410_Item;

class Class_10B9E410_Member;

struct Class_10B9E410_Unknown0C;

Class_10ABF100* FUN_10abf0d0();

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10BB9FC0
{
public:
    void FUN_10bb9e90();
    void FUN_10bb9fc0();
    void FUN_10bb9ff0();
    bool FUN_10bb96f0();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x278];
    int Unknown284;
};

class Class_10B9E410_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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
    virtual void Virtual32();
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
    virtual int Virtual48(int A, int B);
};

class Class_10B9E410_Member
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
    virtual int Virtual11(Class_10B9E410_Unknown0C* A, int B);
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
    virtual int Virtual28(int A);
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
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
    virtual int Virtual43(int A, Class_10B9E410_Item* B, int C);
    virtual int Virtual44(int A, Class_10B9E410_Item* B, int C);
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int Virtual48(Class_10B9E410_Unknown0C* A, int B);
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual int Virtual56(Class_10BB9FC0* A);
};

class Class_10B9E410
{
public:
    void FUN_10b9cf60();
    void FUN_10b9cfa0();
    Class_10B9E410_Item* Top()
    {
        if (m_Count == 0)
            return 0;
        return m_Stack[m_Count - 1];
    }
    void FUN_10b9cf20();
    void FUN_10b9e410();
    void FUN_10b9d740(int A);
    void FUN_10b9d8d0();
    void FUN_10b9dc80(int A);
    void FUN_10b9dcc0();
    void FUN_10b9dc40(int A);
    void FUN_10b9e660();
    void FUN_10b9e690(int A);
    void FUN_10b9eee0();
    void FUN_10b9e330(int A, int B);

    char Unknown00[0xC];
    Class_10BB9FC0* Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10B9E410_Item** m_Stack;
    int Unknown1C;
    int Unknown20;
    char Unknown24[0x14];
    Class_10B9E410_Member* Unknown38;
};

// FUNCTION: 0x10B9E330 ?FUN_10b9e330@Class_10B9E410@@QAEXHH@Z
void Class_10B9E410::FUN_10b9e330(int A, int B)
{
    Top()->Virtual48(A, B);
    if (A == 4)
    {
        if (FUN_10abf0d0()->FUN_10abf100())
        {
            switch (Top()->Virtual3())
            {
            case 1:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 20:
            case 36:
            case 39:
                if (!Unknown0C->FUN_10bb96f0())
                {
                    Class_10BAC050* Owner = (Class_10BAC050*)Unknown0C->Unknown08;
                    if (Owner->FUN_10baac90(DAT_10f35dec->Unknown08) == 2)
                        FUN_10b9d740(Unknown38->Virtual56(Unknown0C));
                }
                break;
            }
        }
    }
}
