// Game/Class_10E49ADC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49ADC.h"

extern void* DAT_10e49adc[];

struct Struct_10929490
{
};

class Object_10929490
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
    virtual void __stdcall Virtual3();
    virtual void __stdcall Virtual4();
    virtual void __stdcall Virtual5();
    virtual void __stdcall Virtual6();
    virtual void __stdcall Virtual7();
    virtual void __stdcall Virtual8();
    virtual void __stdcall Virtual9();
    virtual void __stdcall Virtual10();
    virtual void __stdcall Virtual11();
    virtual void __stdcall Virtual12();
    virtual void __stdcall Virtual13();
    virtual void __stdcall Virtual14();
    virtual void __stdcall Virtual15();
    virtual void __stdcall Virtual16();
    virtual void __stdcall Virtual17(int A);
};

// FUNCTION: 0x10929490 ??1Class_10E49ADC@@QAE@XZ
Class_10E49ADC::~Class_10E49ADC()
{
    Unknown00 = DAT_10e49adc;
    for (unsigned int i = 0; i < 0xC; i++)
    {
        if (Unknown0C[i])
        {
            Unknown0C[i] = false;
            Unknown1F8->Virtual17(i);
        }
    }
    if (Unknown1F8)
    {
        Unknown1F8->Virtual2();
        Unknown1F8 = 0;
    }
    if (Unknown04)
    {
        delete Unknown04;
        Unknown04 = 0;
    }
}
