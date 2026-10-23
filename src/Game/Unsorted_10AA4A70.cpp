// Game/Unsorted_10AA4A70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10970890.h"
#include "Game/cD3DStateCache.h"

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

class Class_1096BD50
{
public:
    Class_1096BD50(UClass* InClass)
    {
        FUN_1096bd50(InClass);
    }

    Class_1096BD50* FUN_1096bd50(UClass* InClass);

    int Unknown00;
};

struct Struct_10A89290
{
    char Pad00[0x8];
    int Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1c];
    Struct_10A89290* Unknown1C;
};

class Class_1098E330;

class Class_1096C8D0 : public Class_1096BD50
{
public:
    Class_1096C8D0(UClass* InClass) : Class_1096BD50(InClass)
    {
    }

    UBOOL IsValid()
    {
        if (Unknown04 == 0)
            return Unknown08 < UObject::GObjObjects.Num();
        Struct_10A89290* Obj = Unknown0C->Unknown1C;
        return !(Unknown10 == Obj && Unknown24 == 0);
    }

    Class_1098E330* GetObject()
    {
        if (Unknown04 == 0)
            return (Class_1098E330*)UObject::GObjObjects(Unknown08);
        return (Class_1098E330*)Unknown10->Unknown08;
    }

    void FUN_1096c8d0();

    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    Struct_10A89290* Unknown10;
    Class_10B0D530 Unknown14;
    char Pad15[0xf];
    int Unknown24;
};

// The object the actor's field at 0xB4 points at: a virtual at slot 12.
class Class_10AA4AF0_UnknownB4
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
};

class Class_1098E330 : public AActor
{
public:
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual int Virtual105();

    int GetPropertyValue(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();

    char Pad04[0x20];
    int Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    char Pad30[0x84];
    Class_10AA4AF0_UnknownB4* UnknownB4;
    char PadB8[0xc];
    unsigned int m_Flags;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
};

// The object the iterator's class returns: a virtual at slot 38.
class Object_10970890
{
public:
    virtual int Virtual0();
    virtual int Virtual1();
    virtual int Virtual2();
    virtual int Virtual3();
    virtual int Virtual4();
    virtual int Virtual5();
    virtual int Virtual6();
    virtual int Virtual7();
    virtual int Virtual8();
    virtual int Virtual9();
    virtual int Virtual10();
    virtual int Virtual11();
    virtual int Virtual12();
    virtual int Virtual13();
    virtual int Virtual14();
    virtual int Virtual15();
    virtual int Virtual16();
    virtual int Virtual17();
    virtual int Virtual18();
    virtual int Virtual19();
    virtual int Virtual20();
    virtual int Virtual21();
    virtual int Virtual22();
    virtual int Virtual23();
    virtual int Virtual24();
    virtual int Virtual25();
    virtual int Virtual26();
    virtual int Virtual27();
    virtual int Virtual28();
    virtual int Virtual29();
    virtual int Virtual30();
    virtual int Virtual31();
    virtual int Virtual32();
    virtual int Virtual33();
    virtual int Virtual34();
    virtual int Virtual35();
    virtual int Virtual36();
    virtual int Virtual37();
    virtual int Virtual38(int A);
};

// The render device: a virtual at slot 50, called with this on the stack.
class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual int __stdcall Virtual50(int A, int B);
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern cD3DStateCache* DAT_10f31be0;

class Class_10E6D52C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10aa4af0();

    char Pad04[0x4];
    int Unknown08;
};

// FUNCTION: 0x10AA4AF0 ?FUN_10aa4af0@Class_10E6D52C@@UAEXXZ
void Class_10E6D52C::FUN_10aa4af0()
{
    FVector V;
    if (Unknown08 == 0)
    {
        V.X = 1.0f;
        V.Y = 0.0f;
        V.Z = 0.0f;
    }
    else
    {
        V.X = 0.0f;
        V.Y = 1.0f;
        V.Z = 1.0f;
    }
    Unknown08 = (Unknown08 + 1) % 2;
    DAT_10f31be0->FUN_10938000();
    DAT_10f31be0->FUN_10938150(V.X, V.Y, V.Z, 1.0f);
    GDirect3DDevice8->Virtual50(7, 0);
    GDirect3DDevice8->Virtual50(0x2F, 5);

    {
        Class_1096C8D0 Iter(AActor::StaticClass());
        while (Iter.IsValid())
        {
            Class_1098E330* Actor = Iter.GetObject();
            Class_10970890* Sub = Actor->FUN_10991eb0();
            if (Sub)
            {
                Object_10970890* Obj = Sub->FUN_10970890();
                if (!Obj->Virtual38(0))
                {
                    Class_1098E330* Actor2 = Iter.GetObject();
                    if (Actor2->UnknownB4)
                        Actor2->UnknownB4->Virtual12();
                }
            }
            Iter.FUN_1096c8d0();
        }
    }

    GDirect3DDevice8->Virtual50(0x2F, 0);
    GDirect3DDevice8->Virtual50(7, 1);
}
