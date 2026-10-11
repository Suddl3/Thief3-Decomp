// Game/Class_10E6B9B8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/cUObjectLinkManager.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Class_1098E3D0.h"

extern Class_10F46DA0* DAT_10f46da0;

cUObjectLinkManager* FUN_10b0b2b0();

class Class_10A6E080_Arg2
{
public:
    char Pad00[0x4];
    float Unknown04;
};

class Class_10E6B9B8
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
    virtual int FUN_10a6e080(int A, Class_10A6E080_Arg2* Obj, float Dt);
    virtual void Virtual14();
    virtual void Virtual15(int A, int B);
};

// FUNCTION: 0x10A6E080 ?FUN_10a6e080@Class_10E6B9B8@@UAEHHPAVClass_10A6E080_Arg2@@M@Z
int Class_10E6B9B8::FUN_10a6e080(int A, Class_10A6E080_Arg2* Obj, float Dt)
{
    Obj->Unknown04 -= Dt;
    if (Obj->Unknown04 <= 0.0f)
    {
        {
            DAT_10f46da0->Virtual5(0x6e, (Class_10B697A0*)A, 0, 0);
            Class_10BFBD70 Found;
            FUN_10b0b2b0()->Virtual5(A, 0, 0x285b534, (int)&Found, 3);
            for (int i = 0; i < Found.Unknown00; i++)
            {
                this->Virtual15(A, Found.Unknown08[i]);
            }
            void* Out = 0;
            ((Class_1098E3D0*)A)->FUN_1098e3d0(0x8003f3, &Out);
        }
        return 1;
    }
    return 0;
}
