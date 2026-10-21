// Game/Unsorted_10A9E850.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class ULevel;

class AAIPathPoint;

class Class_10DA0870;

class Class_10B47720;

class Struct_10B4C2C0;

class Class_10B39870;

class Class_10BAA6B0_Param;

class Class_10C08940;

class Class_10978090Result;

// include/Game/Class_1096D780.h, copied whole with the vector at 0x2C added.
class Class_1096D780
{
public:
    void* Get();

    char Unknown00[0x2C];
    FVector Unknown2C;
    FRotator Unknown38;
    char Unknown44[0x54];
    void* Field98;
    char Unknown9C[0x14];
    Class_10DA0870* UnknownB0;
    char UnknownB4[0x440 - 0xB4];
    int Unknown440;
};

// include/Game/Class_10978090.h, copied whole with the result of FUN_10978090 named.
class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

// include/Game/Class_10A7EF00.h, copied whole.
class Class_10A7EF00
{
public:
    char Unknown00[0x7];
    unsigned char Field07;
public:
    unsigned char FUN_10a7ef00();
};

// The link the command works on: the game's own class, with a name at 0x10.
class Class_10A9F440_Link : public Class_10A7EF00
{
public:
    char Pad08[0x8];
    char* Unknown10;
};

// include/Game/Class_10AA82D0.h, copied whole.
class Class_10AAF570
{
public:
    virtual void Virtual0();

    int GetLinkType();

    char unknown_04[0xC];
    int m_LinkType;
    int unknown_14;
};

class Class_10AA82D0 : public Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();
    void FUN_10b4fbf0(int A, int B, float C, float D, int E, int F, float G);

    char Pad01[0x3];
    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

// include/Game/cUObjectLinkManager.h, copied whole with slot 2's signature.
class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void* Virtual2(void* A, void* B, void* C);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

// include/Game/Class_10B39870.h, copied whole with the name at 0x40 added.
class Class_10B39870
{
public:
    int FUN_10b39870(int A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Pad10[0x30];
    FString Unknown40;
};

class Class_10A9F440_Arg2;

class Class_10A9F440_Arg3;

AAIPathPoint* FUN_10a49f00(ULevel* Level, UClass* Class, int C, int D, FVector E, FVector F, FRotator G,
                           FRotator H, bool I);

cUObjectLinkManager* GetUObjectLinkManager();

extern const char DAT_10e47660[];

// The class whose table at 0x10E6D290 holds this method.
class Class_10E6D290
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a9f440(void* A, Class_10A9F440_Arg2* B, Class_10A9F440_Arg3* C);
};

// The two objects the command comes from: one holds the path, the other the link.
class Class_10A9F440_Arg2
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
    virtual Class_1096D780* Virtual8();
};

class Class_10A9F440_Arg3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void* Virtual4(int A);
};

// FUNCTION: 0x10A9F440 ?FUN_10a9f440@Class_10E6D290@@UAEHPAXPAVClass_10A9F440_Arg2@@PAVClass_10A9F440_Arg3@@@Z
int Class_10E6D290::FUN_10a9f440(void* A, Class_10A9F440_Arg2* Arg2, Class_10A9F440_Arg3* Arg3)
{
    Class_10978090* Target = (Class_10978090*)Arg3->Virtual4(0);
    Class_10A9F440_Link* Link = (Class_10A9F440_Link*)Arg3->Virtual4(1);
    AAIPathPoint* Point = FUN_10a49f00((ULevel*)Arg2->Virtual8()->Get(), (UClass*)Target->FUN_10978090(),
                                       1, 0, Arg2->Virtual8()->Unknown2C, FVector(0, 0, 0),
                                       Arg2->Virtual8()->Unknown38, FRotator(0, 0, 0), false);
    Class_10AA82D0* Linked;
    if (Link->FUN_10a7ef00())
    {
        Linked = (Class_10AA82D0*)GetUObjectLinkManager()->Virtual2(Point, Arg2->Virtual8(),
                                                     ((Class_10AA82D0*)Link)->GetLinkedObject());
    }
    else
    {
        Linked = (Class_10AA82D0*)GetUObjectLinkManager()->Virtual2(Arg2->Virtual8(), Point,
                                                     ((Class_10AA82D0*)Link)->GetLinkedObject());
    }
    Class_10B39870* Object = Linked->GetLinkedObject();
    if (Object)
    {
        const char* Text = DAT_10e47660;
        if (Link->Unknown10)
            Text = Link->Unknown10;
        Object->Unknown40 = FString(Text);
    }
    return 1;
}
