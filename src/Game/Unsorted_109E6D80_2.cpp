// Game/Unsorted_109E6D80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090EC30.h"
#include "Game/Class_1091DEE0.h"
#include <string.h>

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

// include/Game/Class_1090A780.h copied whole, with the Class_1090EC30 base
// that cString's chain omits: FUN_1090ec30 is its method.
class Class_1090A780 : public Class_1090EC30
{
public:
    Class_1090A780(const Class_1090A780& Other);
    ~Class_1090A780()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
    Class_1090A780() : Unknown00(0) {}

    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
    operator int();

    char* Unknown00;
};

// include/Game/cString.h copied whole.
class cString : public Class_1090A780
{
public:
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

extern Class_1091DEE0* DAT_10f2c928;

// FUNCTION: 0x109E7690 ?FUN_109e7690@@YGPAVClass_1091CA00@@AAVcString@@PAH@Z
Class_1091CA00* __stdcall FUN_109e7690(cString& Name, int* Result)
{
    *Result = 1;
    cString Text = Name;
    if (Name.Unknown00 && strcmp(Name.Unknown00, "SMALL_FONT") == 0)
    {
        Text = DAT_10f2c928->GetFontName(0);
    }
    else if (Name.FUN_1090ec30("MEDIUM_FONT"))
    {
        Text = DAT_10f2c928->GetFontName(1);
    }
    else if (Name.FUN_1090ec30("DEFAULT_FONT"))
    {
        Text = DAT_10f2c928->GetFontName(2);
    }

    if (!DAT_10f2c928)
    {
        *Result = 0;
        return 0;
    }
    return DAT_10f2c928->FUN_1091dc40(Text);
}
