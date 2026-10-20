// Game/Unsorted_10AAE8B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6C470.h"

extern "C" void* memset(void* Dst, int Val, unsigned Count);

class Class_10AAE8B0_Unknown820
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5(void* Buf, int Size);
    virtual int __stdcall Virtual6(void* Buf, int Size);
    virtual int __stdcall Virtual7(int A, int B);
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9(int* Out);
};

class Class_10AAE8B0_Unknown824
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5(void* Buf, int Size);
    virtual int __stdcall Virtual6(void* Buf, int Size);
    virtual int __stdcall Virtual7(int A, int B);
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9(int* Out);
};

struct Struct_10AAE8B0_State
{
    int Unknown00;
    char Unknown04[0x28];
    int Unknown2C;
    int* Unknown30;
    int Unknown34;
};

class XBInputInterface : public Class_10E6C470
{
public:
    XBInputInterface();

    void FUN_10aaf320(int A);
    void FUN_10aae8b0();
    void FUN_10aaf4d0(int A);
    bool GetNormalizedAxis(int A, float* Out);
    unsigned char FUN_10aae350(int A);
    void InitDirectInput();

    char Pad810[0x2];
    bool Unknown812;
    char Pad813[0xd];
    Class_10AAE8B0_Unknown820* Unknown820;
    Class_10AAE8B0_Unknown824* Unknown824;
    int Unknown828;
    int Unknown82C;
};

// FUNCTION: 0x10AAE8B0 ?FUN_10aae8b0@Class_10AAF4D0@@QAEXXZ
void XBInputInterface::FUN_10aae8b0()
{
    if (Unknown820 && Unknown824)
    {
        int Result;
        int Value;
        int Out;
        Struct_10AAE8B0_State State;
        Struct_10AAE8B0_State State2;

        Unknown820->Virtual9(&Result);
        if (!Result)
            Unknown820->Virtual7(1, 0);

        memset(&State, 0, sizeof(State));
        State.Unknown30 = &Value;
        State.Unknown00 = 0x38;
        State.Unknown2C = 4;
        Unknown820->Virtual5(&State, 0x100);
        if (Value != Unknown828)
        {
            Out = -Unknown828;
            memset(&State2, 0, sizeof(State2));
            State2.Unknown30 = &Out;
            State2.Unknown00 = 0x38;
            State2.Unknown2C = 4;
            Unknown820->Virtual6(&State2, 0x100);
        }

        Unknown824->Virtual9(&Result);
        if (!Result)
            Unknown824->Virtual7(1, 0);

        memset(&State, 0, sizeof(State));
        State.Unknown30 = &Value;
        State.Unknown00 = 0x38;
        State.Unknown2C = 4;
        Unknown824->Virtual5(&State, 0x100);
        if (Value != Unknown82C)
        {
            Out = Unknown82C;
            memset(&State2, 0, sizeof(State2));
            State2.Unknown00 = 0x38;
            State2.Unknown2C = 4;
            State2.Unknown30 = &Out;
            Unknown824->Virtual6(&State2, 0x100);
        }
    }
}
