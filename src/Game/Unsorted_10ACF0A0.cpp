// Game/Unsorted_10ACF0A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

extern char DAT_10e505c0[];

extern char DAT_10e707f8[];

extern char DAT_10e70800[];

extern char DAT_10e4edf4[];

extern char DAT_10e505e4[];

extern char DAT_10e707f0[];

extern char DAT_10e70808[];

extern "C" int __cdecl sprintf(char* Buffer, const char* Format, ...);

extern "C" __declspec(dllimport) int __stdcall SetFileAttributesA(const char* FileName, unsigned long Attributes);

extern "C" __declspec(dllimport) int __stdcall CopyFileA(const char* Source, const char* Destination, int FailIfExists);

class Class_10D4AE40;

void FUN_10d4b750(Class_10D4AE40* A);

void FUN_10d4ad10(const char* A);

void FUN_10a18e20();

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

class Class_10A174E0
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

    void FUN_10a18850(const cString& Name, int B);
};

Class_10A174E0* GetStats();

// Class_10ACEE90 from include/Game/Class_10ACEE90.h, with the return type
// the code shows.
class Class_10ACEE90
{
public:
    bool FUN_10acee90();
    bool FUN_10acf0a0();
    bool FUN_10acf2d0();

    char Pad00[0x1];
};

// FUNCTION: 0x10ACF0A0 ?FUN_10acf0a0@Class_10ACEE90@@QAE_NXZ
bool Class_10ACEE90::FUN_10acf0a0()
{
    Class_10D4AE40 Obj;

    char Buffer3[16];
    char Buffer1[264];
    char Buffer2[264];

    char* Base = Obj.FUN_10d4ab60();

    sprintf(Buffer1, DAT_10e4edf4, Base, DAT_10e505c0);
    sprintf(Buffer2, DAT_10e70800, Base, DAT_10e707f8, DAT_10e505c0);
    SetFileAttributesA(Buffer1, 0x80);
    if (!CopyFileA(Buffer2, Buffer1, 0))
    {
        return false;
    }

    sprintf(Buffer1, DAT_10e4edf4, Base, "TravelFlags");
    sprintf(Buffer2, DAT_10e70800, Base, DAT_10e707f8, "TravelFlags");
    SetFileAttributesA(Buffer1, 0x80);
    CopyFileA(Buffer2, Buffer1, 0);

    sprintf(Buffer1, DAT_10e4edf4, Base, DAT_10e505e4);
    sprintf(Buffer2, DAT_10e70800, Base, DAT_10e707f8, DAT_10e505e4);
    SetFileAttributesA(Buffer1, 0x80);
    CopyFileA(Buffer2, Buffer1, 0);

    sprintf(Buffer3, DAT_10e70808, DAT_10e707f0);
    FUN_10d4ad10(Buffer3);

    FUN_10a18e20();
    GetStats()->Virtual8();
    GetStats()->Virtual6();
    GetStats()->FUN_10a18850(cString("TravelFlags"), 0);

    return true;
}
