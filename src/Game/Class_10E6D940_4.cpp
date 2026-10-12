// Game/Class_10E6D940_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10AAB590_Param.h"

class Class_10F46D9C;

class Object_10AA7BA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(const Class_109081E0& A);
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
    virtual void Virtual16(int A, void* B);
    virtual void Virtual17(int A, void* B, Class_10F46D9C* C);
    virtual void Virtual18(Class_10AAB590_Param* A, Class_10F46D9C* B);
};

class Class_10F46D9C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Object_10AA7BA0* Virtual3();
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

extern Class_10F46D9C* DAT_10f46d9c;

class Class_10E6D940
{
public:
    virtual ~Class_10E6D940();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10aa7750(void* Stream, int A, int B);
    virtual int FUN_10aa7a40(Class_10AAB590_Param* Src);

    Class_109081E0 Unknown04;
    Object_10AA7BA0* Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AA7A40 ?FUN_10aa7a40@Class_10E6D940@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6D940::FUN_10aa7a40(Class_10AAB590_Param* Src)
{
    Unknown04 = Src->Virtual2();
    Class_109081E0 Name = Src->Virtual2();
    Unknown08 = DAT_10f46d9c->Virtual3();
    Unknown08->Virtual3(Name);
    Unknown14 = Src->Virtual3();
    Unknown18 = Src->Virtual3();
    Unknown08->Virtual18(Src, DAT_10f46d9c);
    return 1;
}
