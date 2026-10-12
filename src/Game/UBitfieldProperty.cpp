// Game/UBitfieldProperty.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_1098E160
{
public:
    int FUN_1098e160(int& A, int& B);
};

class Class_10AF01B0_Unknown60
{
public:
    char Unknown00[0x34];
    Class_1098E160 Unknown34;
};

const TCHAR* FUN_10aec5a0(const TCHAR* In, TCHAR* Out, INT Size, INT Flags);

class UBitfieldProperty
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual ~UBitfieldProperty();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Serialize(FArchive& Ar);
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
    virtual const TCHAR* ImportText(const TCHAR* Str, DWORD* Out, void* Unknown0C);

    char Unknown04[0x5C];
    Class_10AF01B0_Unknown60* Unknown60;
};

// FUNCTION: 0x10AF01B0 ?ImportText@UBitfieldProperty@@UAEPBDPBDPAKPAX@Z
const TCHAR* UBitfieldProperty::ImportText(const TCHAR* Str, DWORD* Out, void* Unknown0C)
{
    if (!Str)
        return NULL;
    TCHAR C = *Str;
    DWORD Mask = 0;
    if (C != '(')
        return NULL;
    Str++;
    while (Str)
    {
        if (*Str == ')')
        {
            Str++;
            break;
        }
        TCHAR Buf[0x400];
        Str = FUN_10aec5a0(Str, Buf, 0x400, 0);
        FName Name(Buf, FNAME_Find);
        if (Name != NAME_None)
        {
            int Index = 0;
            if (Unknown60->Unknown34.FUN_1098e160((int&)Name.Value, Index))
                Mask |= 1 << Index;
        }
        if (*Str == ',')
            Str++;
    }
    *Out = Mask;
    return Str;
}
