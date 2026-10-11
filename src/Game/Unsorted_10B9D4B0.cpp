// Game/Unsorted_10B9D4B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

typedef unsigned long DWORD;

typedef int INT;

typedef INT UBOOL;

typedef char ANSICHAR;

typedef ANSICHAR TCHAR;

enum EName
{
    NAME_None = 0,
};

enum EFindName
{
    FNAME_Find,
    FNAME_Add,
    FNAME_Intrinsic,
};

class FName
{
public:
    FName() {}
    FName(EName N) : Value(N) {}
    FName(const TCHAR* Name, EFindName FindType = FNAME_Add);

    UBOOL operator==(const FName& Other) const { return Value == Other.Value; }
    UBOOL operator!=(const FName& Other) const { return Value != Other.Value; }

    Class_109081E0 FUN_10af9730() const;

    DWORD Value;
};

class Class_10B9D4B0_Result
{
public:
    char Unknown00[0x34];
    FName* Unknown34;
};

extern void* DAT_10f3e46c;

void* FUN_10add8a0(const char* Name);

void FUN_10ad1fa0();

Class_10B9D4B0_Result* FUN_10adc3b0(void* Package, int Class, const char* Name, int Exact);

// FUNCTION: 0x10B9D4B0 ?FUN_10b9d4b0@@YA?AVClass_109081E0@@PAPBDH@Z
Class_109081E0 FUN_10b9d4b0(const char** Name, int Index)
{
    const char* Str = DAT_10e47660;
    if (*Name)
        Str = *Name;
    if (DAT_10f3e46c == 0)
    {
        DAT_10f3e46c = FUN_10add8a0("Core");
        FUN_10ad1fa0();
    }
    Class_10B9D4B0_Result* Found = FUN_10adc3b0(DAT_10f3e46c, -1, Str, 0);
    if (Found == 0)
        return Class_109081E0(DAT_10e47660);
    return Found->Unknown34[Index].FUN_10af9730();
}
