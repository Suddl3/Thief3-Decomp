// Game/Unsorted_10ACEE90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A174E0.h"
#include "Game/Class_10ACEE90.h"
#include "Game/cString.h"
#include "Engine/EngineClasses.h"
#include "Game/cCitySectionManager.h"

Class_10A174E0* GetStats();

extern UEngine* GEngine;

extern char DAT_10e505c0[];

extern char DAT_10e707f8[];

extern char DAT_10e70800[];

extern char DAT_10e4edf4[];

extern char DAT_10e505e4[];

extern "C" int __cdecl sprintf(char* Buffer, const char* Format, ...);

extern "C" __declspec(dllimport) unsigned long __stdcall GetFileAttributesA(const char* FileName);

extern "C" __declspec(dllimport) int __stdcall SetFileAttributesA(const char* FileName, unsigned long Attributes);

extern "C" __declspec(dllimport) int __stdcall CopyFileA(const char* Source, const char* Destination, int FailIfExists);

cCitySectionManager* GetCitySectionManager();

class Class_10D4AE40;

void FUN_10d4b750(Class_10D4AE40* A);

// The object the function builds in place: its destructor is called on every
// exit path, so the frame carries an exception handler.
class Class_10D4AE40
{
public:
    Class_10D4AE40()
    {
        FUN_10d4b750(this);
    }
    ~Class_10D4AE40();

    char* FUN_10d4ab60();

    char Unknown00[12];
};

// FUNCTION: 0x10ACEE90 ?FUN_10acee90@Class_10ACEE90@@QAE_NXZ
bool Class_10ACEE90::FUN_10acee90()
{
    if (GetCitySectionManager()->FUN_10abf100())
    {
        return true;
    }

    Class_10D4AE40 Obj;
    char* Base = Obj.FUN_10d4ab60();

    char Buffer1[264];
    sprintf(Buffer1, DAT_10e70800, Base, DAT_10e707f8, DAT_10e505c0);
    unsigned long Attributes = GetFileAttributesA(Buffer1);
    if (Attributes != 0xffffffff && (Attributes & 0x50) == 0)
    {
        return true;
    }

    char Buffer2[264];
    sprintf(Buffer2, DAT_10e4edf4, Base, DAT_10e505c0);
    SetFileAttributesA(Buffer1, 0x80);
    if (!CopyFileA(Buffer2, Buffer1, 0))
    {
        return false;
    }

    sprintf(Buffer2, DAT_10e4edf4, Base, "TravelFlags");
    sprintf(Buffer1, DAT_10e70800, Base, DAT_10e707f8, "TravelFlags");
    SetFileAttributesA(Buffer1, 0x80);
    CopyFileA(Buffer2, Buffer1, 0);

    sprintf(Buffer2, DAT_10e4edf4, Base, DAT_10e505e4);
    sprintf(Buffer1, DAT_10e70800, Base, DAT_10e707f8, DAT_10e505e4);
    SetFileAttributesA(Buffer1, 0x80);
    CopyFileA(Buffer2, Buffer1, 0);

    return true;
}

// FUNCTION: 0x10ACF2D0 ?FUN_10acf2d0@Class_10ACEE90@@QAE_NXZ
bool Class_10ACEE90::FUN_10acf2d0()
{
    GetStats()->FUN_10a16700(cString("TravelFlags"));
    GEngine->FUN_109844d0();
    return true;
}

// FUNCTION: 0x10ACF350 ??$Cast@VUObject@@@@YAPAVUObject@@PAV0@@Z
template UObject* Cast<UObject>(UObject* Src);
