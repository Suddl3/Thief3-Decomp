// Game/Class_10E8C854.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10B9C9F0.h"
#include "Game/Class_10BAD190.h"

class Class_10BB3D50_Param2
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
    virtual void* Virtual8();
};

class Class_10BB3D50_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AB37C0* Virtual4(int A);
};

class Class_10BB3190_Result;

Class_10BB3190_Result* FUN_10983cf0(int A);

UObject* FUN_10c00710(void* A, int B);

Class_10B9C9F0* FUN_10bb0c60(int A);

class Class_10E8C854
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb3d50(int A, Class_10BB3D50_Param2* B, Class_10BB3D50_Param3* C);
};

// FUNCTION: 0x10BB3D50 ?FUN_10bb3d50@Class_10E8C854@@UAEHHPAVClass_10BB3D50_Param2@@PAVClass_10BB3D50_Param3@@@Z
int Class_10E8C854::FUN_10bb3d50(int A, Class_10BB3D50_Param2* B, Class_10BB3D50_Param3* C)
{
    if (B != 0 && B->Virtual8() && C != 0 && C->Virtual3() >= 1)
    {
        cString Name(*(cString*)C->Virtual4(0)->GetName());
        if (Name.Unknown00 != 0 && ((int*)Name.Unknown00)[-1] != 0)
        {
            _strlwr(Name.Unknown00);
            UObject* O = FUN_10c00710(B->Virtual8(), (int)&Name);
            if (O != 0)
            {
                Class_10BB3190_Result* R = FUN_10983cf0((int)O);
                if (R != 0)
                {
                    Class_10B9C9F0* X = FUN_10bb0c60((int)B);
                    if (X != 0)
                    {
                        ((Class_10BAD190*)X->FUN_10b9c9f0())->FUN_10bad190((int)R, 1, 1);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
