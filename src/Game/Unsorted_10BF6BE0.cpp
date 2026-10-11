// Game/Unsorted_10BF6BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BF70E0.h"
#include "Game/Class_10BFB8C0.h"
#include "Game/Class_10BFB910.h"
#include "Game/Class_10E6D8F0.h"
#include "Game/Class_10E9799C.h"
#include "Game/Class_10E979DC_Primary.h"
#include "Game/Struct_10FF66B0.h"

class Class_10E5B578
{
public:
    virtual void FUN_10bf8c90(int Code, int A, int B, int C) = 0;
};

class MovementController : public Class_10E979DC_Primary, public Class_10E9799C, public Class_10E5B578
{
public:
    void FUN_10bf8b40(int A, int B, int C);
    virtual void FUN_10bf8c90(int Code, int A, int B, int C);
};

class Class_10E9CD90
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
    virtual void FUN_10bfbb80(int param);
    char Unknown04[0x38];
    int Unknown3C;
};

typedef int INT;

typedef int UBOOL;

typedef char ANSICHAR;

class FArray
{
public:
    INT Num() const { return ArrayNum; }

    void* Data;
    INT ArrayNum;
    INT ArrayMax;
};

// A constructor that leaves the object as it is (the object system zeroes it first).
enum ENoInit { E_NoInit = 0 };

// A string: its characters and terminator in an array (TArray<ANSICHAR> in
// stock Unreal Engine 2), with these members out of line in this build.
class FString : public FArray
{
public:
    FString(ENoInit) {}
    FString();                                                // 0x10AF8230
    FString(const FString& Other);                            // 0x10AF8250
    FString(const ANSICHAR* In);                              // 0x10AF82B0
    ~FString();                                               // 0x10AF83B0

    FString& operator=(const ANSICHAR* Other);                // 0x10AF81C0
    FString& operator=(const FString& Other);                 // 0x10AF8340
    FString& operator+=(const ANSICHAR* Str);                 // 0x10AF8420
    FString& operator+=(const FString& Str);                  // 0x10AF8490
    INT InStr(const ANSICHAR* SubStr, UBOOL Right = 0) const; // 0x10AF80F0
    INT InStr(const FString& SubStr, UBOOL Right = 0) const;  // 0x10AF8190

    INT Len() const;                                          // 0x10AF7F70
    const ANSICHAR* FUN_10af7f80();                           // 0x10AF7F80
};

int FUN_10af36e0(const char* A, const char* B);

extern const char DAT_10e47660[];

extern Struct_10FF66B0 DAT_10ff66b0[];

// FUNCTION: 0x10BF6E10 ?FUN_10bf6e10@@YGHVFString@@@Z
int __stdcall FUN_10bf6e10(FString Name)
{
    for (int i = 0; i < 124; i++)
    {
        const char* Text = DAT_10e47660;
        if (DAT_10ff66b0[i].Unknown00)
            Text = DAT_10ff66b0[i].Unknown00;
        if (FUN_10af36e0(Text, Name.FUN_10af7f80()) == 0)
            return i;
    }
    return 0;
}

// FUNCTION: 0x10BF70E0 ?FUN_10bf70e0@Class_10BF70E0@@QAEXXZ
void Class_10BF70E0::FUN_10bf70e0()
{
    Unknown58 = 0;
    Unknown5C = FUN_10bf6d70();
}

// FUNCTION: 0x10BF8C90 ?FUN_10bf8c90@MovementController@@UAEXHHHH@Z
void MovementController::FUN_10bf8c90(int Code, int A, int B, int C)
{
    if (Code == 4)
        FUN_10bf8b40(A, B, C);
}

// FUNCTION: 0x10BFB8C0 ?FUN_10bfb8c0@Class_10BFB8C0@@QAEMH@Z
float Class_10BFB8C0::FUN_10bfb8c0(int Index)
{
    return Unknown00[Index * 3 + 3];
}

// FUNCTION: 0x10BFB910 ?FUN_10bfb910@Class_10BFB910@@QAEXH@Z
void Class_10BFB910::FUN_10bfb910(int Index)
{
    Unknown00[(Index + 1) * 3] = 0;
}

// FUNCTION: 0x10BFBB50 ?FUN_10bfbb50@Class_10E6D8F0@@UAEXH@Z
void Class_10E6D8F0::FUN_10bfbb50(int param)
{
    Unknown18 = param;
}

// FUNCTION: 0x10BFBB80 ?FUN_10bfbb80@Class_10E9CD90@@UAEXH@Z
void Class_10E9CD90::FUN_10bfbb80(int param)
{
    Unknown3C = param;
}
