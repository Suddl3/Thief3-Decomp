// Game/Unsorted_10BF8CC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Object_10BF9030
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

    char Unknown04[0x74];
    int Unknown78;
};

class Class_10AF7F80 : public FString
{
public:
    const char* FUN_10af7f80();
};

// FUNCTION: 0x10BF8FB0 ?FUN_10bf8fb0@@YA?AVFString@@PAVClass_10AF7F80@@PAH@Z
FString FUN_10bf8fb0(Class_10AF7F80* Src, int* Pos)
{
    char Buf[1024];
    int Count = 0;
    const char* Text = Src->FUN_10af7f80();
    while (*Pos < Src->Len())
    {
        char C = Text[*Pos];
        if (C == '|')
            break;
        Buf[Count] = C;
        Count++;
        (*Pos)++;
    }
    (*Pos)++;
    Buf[Count] = 0;
    return FString(Buf);
}

// FUNCTION: 0x10BF9030 ?FUN_10bf9030@@YA_NPAVObject_10BF9030@@@Z
bool FUN_10bf9030(Object_10BF9030* Obj)
{
    if (Obj && (Obj->Unknown78 & 4))
        return Obj->Virtual34();
    return false;
}
