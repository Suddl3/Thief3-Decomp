// Game/Unsorted_109E6140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10905530.h"

class FArray
{
public:
    void* Data;
    int ArrayNum;
    int ArrayMax;
};

// Core/Core.h's FString, with the two members this function calls added.
class FString : public FArray
{
public:
    FString(const FString& Other);
    ~FString();
    FString& operator=(const FString& Other);
    void FUN_10af8410();
    void FUN_10af9060(void* A, void* B);
};

extern void* DAT_10e5b75c[];

// FUNCTION: 0x109E6140 ?ParseFileName@@YGXPAVFString@@PBV1@00@Z
void __stdcall ParseFileName(FString* Out1, const FString* In, FString* Out3, FString* Out4)
{
    FString Name(*In);
    Class_10905530 Parts;
    Out3->FUN_10af8410();
    Out4->FUN_10af8410();
    Name.FUN_10af9060(DAT_10e5b75c, &Parts);
    if (Parts.Unknown04 <= 1)
    {
        *Out3 = *Out1;
        *Out4 = *In;
    }
    else
    {
        *Out3 = ((FString*)Parts.Unknown00)[0];
        *Out4 = ((FString*)Parts.Unknown00)[1];
    }
}
