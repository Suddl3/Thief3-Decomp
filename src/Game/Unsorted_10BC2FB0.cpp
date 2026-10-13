// Game/Unsorted_10BC2FB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1096D780.h"
#include "Game/Class_10974340.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10BBDC30.h"
#include "Game/Struct_10AA3520.h"

class APawn;

class Class_10BBDB40;

class Class_10C7D570
{
public:
    void* FUN_10c7d570();
    void* FUN_10c7d570(int A, APawn** B);
    Class_10BBDB40* FUN_10dbd510(int Id);
    Class_10BBDB40* FUN_10dbd510();

    char Unknown00[0x64];
    bool Unknown64;
};

class Class_10BAC050 : public Class_10C7D570
{
public:
    int FUN_10baac90(int A);
    int FUN_10bac050(int A);
    int FUN_10bac070(int A);
};

class Class_10BAA6B0_Param
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
    virtual void Virtual32();
    virtual void Virtual33();
    virtual int Virtual34();
};

class Class_10BABED0
{
public:
    void FUN_10bacff0(void* A);
};

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

class Class_10BC3590_Item
{
public:
    char Unknown00[0xC0];
    Class_10BAA6B0_Param* UnknownC0;
    char UnknownC4[8];
    Class_10BC3590_Item* UnknownCC;
};

class Class_10BC3590_Owner
{
public:
    char Unknown00[0x2C8];
    Class_10BC3590_Item* Unknown2C8;
};

class Class_10BC3590
{
public:
    void FUN_10bc3590(Class_1098E3D0* A);
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10BC3590 ?FUN_10bc3590@Class_10BC3590@@QAEXPAVClass_1098E3D0@@@Z
void Class_10BC3590::FUN_10bc3590(Class_1098E3D0* A)
{
    unsigned char Flag = 4;
    A->FUN_1098e3d0(0x420004a8, &Flag);
    Class_10BABED0* Owner = FUN_10baa6b0((Class_10BAA6B0_Param*)this);
    if (Owner && ((Class_1096D780*)this)->Get())
    {
        Class_10BC3590_Owner* Holder = (Class_10BC3590_Owner*)((Class_10974340*)((Class_1096D780*)this)->Get())->FUN_10974340();
        for (Class_10BC3590_Item* Item = Holder->Unknown2C8; Item; Item = Item->UnknownCC)
        {
            if (Item->UnknownC0 && Item->UnknownC0->Virtual34() == 0)
            {
                Class_10BAC050* Node = (Class_10BAC050*)FUN_10baa6b0(Item->UnknownC0);
                if (Node)
                {
                    ((Class_10BBDC30*)Node->FUN_10dbd510())->FUN_10bbdcc0(0x4040025d);
                    if (!(char)Node->FUN_10baac90((int)DAT_10f35dec->Unknown08))
                        Owner->FUN_10bacff0(Node->FUN_10c7d570(0, (APawn**)1));
                }
            }
        }
    }
}
