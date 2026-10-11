// Game/Unsorted_10A36450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10BFBD70.h"

class Class_10E77578
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70& Found);
    virtual void Virtual5(int A, int B, int C, Class_10BFBD70& Found, int E);
};

Class_10E77578* FUN_10b0b2b0();

class Class_10B82390;

class Class_10C08940
{
public:
    int FUN_10ad18b0();

    char Pad00[0xE8];
    Class_10B82390* UnknownE8;
};

class Class_10B82390 : public Class_10C08940
{
public:
    int FUN_10b82390(int A, void* B);
};

struct Struct_10A36570
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
};

// FUNCTION: 0x10A36570 ?FUN_10a36570@@YGPAUStruct_10A36570@@PAU1@HH@Z
Struct_10A36570* __stdcall FUN_10a36570(Struct_10A36570* Out, int Id, int Index)
{
    Struct_10A36570 Arr[37];
    Struct_10A36570 Result;
    Result.Unknown00 = 0.0f;
    Result.Unknown04 = 0.0f;
    Result.Unknown08 = 0.0f;
    Class_10BFBD70 Found;
    FUN_10b0b2b0()->Virtual5(Id, 0, 0x2e2eda5, Found, 3);
    if (Found.Count != 0)
    {
        Class_10B82390* Obj = (Class_10B82390*)((Class_10AAB5C0*)Found.Data[0])->FUN_10aab5c0();
        if (Obj->FUN_10ad18b0())
            Obj = Obj->UnknownE8;
        if (Obj->FUN_10b82390(0x803bf, Arr))
        {
            *Out = Arr[Index];
            return Out;
        }
    }
    *Out = Result;
    return Out;
}
