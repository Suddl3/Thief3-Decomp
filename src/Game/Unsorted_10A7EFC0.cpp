// Game/Unsorted_10A7EFC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cTriggerLinkParam.h"
#include "Game/Class_1096A960.h"
#include "Game/cEngineTriggerRegistrar.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int Size, EInternal* Mem) { return Mem; }

Class_10905A90_Member* GetAllocator();

bool FUN_1090f010(const int* A, const int* B);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void FUN_10af37a0(int A, const char* B, ...);

void FUN_10af35e0(int A, int B, int C);

char* FUN_10af3630(char* A, const char* B);

class Class_10A7EFC0_Param
{
public:
    char Unknown00[0x24];
    Class_1096A960* Unknown24;
};

// FUNCTION: 0x10A7EFC0 ?FUN_10a7efc0@@YAXPAVClass_10A7EFC0_Param@@H@Z
void FUN_10a7efc0(Class_10A7EFC0_Param* A, int B)
{
    if (!A)
    {
        FUN_10af37a0(B, "Error");
        return;
    }
    Class_1096A960* Source = A->Unknown24;
    char Buffer[256];
    FUN_10af37a0((int)Buffer, *Source->FUN_1096a960());
    char* Found = FUN_10af3630(Buffer, "LinkDataObject");
    if (!Found)
        FUN_10af37a0(B, "%s", Buffer);
    else
        FUN_10af35e0(B, (int)Buffer, (Found - Buffer) + 1);
}

// FUNCTION: 0x10A7F220 ?CreateLinkParam@cEngineTriggerRegistrar@@UAEPAVcTriggerLinkParam@@HPBH@Z
cTriggerLinkParam* cEngineTriggerRegistrar::CreateLinkParam(int A, const int* B)
{
    GetAllocator()->Virtual8(0, 0);
    bool Flag;
    {
        char Storage[4];
        Flag = FUN_1090f010(B, (const int*)new ((EInternal*)Storage) cString("NoSelf"));
        ((cString*)Storage)->~cString();
    }
    cTriggerLinkParam* Result;
    if (Flag)
    {
        Result = new(0, 0, 0, 0, 0) cTriggerLinkParam(false);
    }
    else
    {
        Result = new(0, 0, 0, 0, 0) cTriggerLinkParam(true);
    }
    GetAllocator()->Virtual9();
    return Result;
}
