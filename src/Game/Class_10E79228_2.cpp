// Game/Class_10E79228_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A174E0.h"
#include "Game/Class_10B15960.h"
#include "Game/Class_10E5B7C8.h"

enum EFindName
{
    FNAME_Find = 0,
    FNAME_Add = 1
};

class FName
{
public:
    FName(const char* Name, EFindName FindType = FNAME_Add);

    unsigned long Value;
};

extern const char DAT_10e6f4d8[];

Class_10A174E0* FUN_10a18230();

class WindowManager : public Class_10B15960
{
};

extern WindowManager* GWindowManager;

class Class_10E79228 : public Class_10E5B7C8
{
public:
    virtual void FUN_10b17100();
};

// FUNCTION: 0x10B17100 ?FUN_10b17100@Class_10E79228@@UAEXXZ
void Class_10E79228::FUN_10b17100()
{
    if (FUN_10a18230()->Virtual3(DAT_10e6f4d8))
        GWindowManager->FUN_10b15d70(1);
}
