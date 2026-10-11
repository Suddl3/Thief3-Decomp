// Game/Unsorted_10B327C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10B31BE0.h"
#include "Game/Class_10B39530.h"
#include "Game/Struct_10AA3520.h"

class Class_10B39870;

class Class_1098E330;

// Copied whole from include/Game/Class_10AA82D0.h with the return type the symbol has.
class Class_10AA82D0 : public Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10B39870* FUN_10aa82d0();

    char Pad01[0x3];
    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int Unknown0C;
    };
};

// Copied whole from include/Game/Class_10B32160.h, on the copy of its base above.
class Class_10B32160 : public Class_10AA82D0
{
public:
    void FUN_10b31ad0(Class_1098E330* Props);
    void FUN_10b32160(Class_1098E330* Props);
    void FUN_10b32100(Class_1098E330* A);
    void FUN_10b31a70(Class_1098E330* A);

    char Pad04[0x24];
};

// Copied whole from include/Game/Class_10B21350.h with the padding at +0x440 named.
class Class_10B21350
{
public:
    void FUN_10b21350();

    char Unknown00[0x440];
    int Unknown440;
    int Unknown444;
    char Unknown448[0x1C];
    int Unknown464;
};

class Object_10B4CA50_A
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B21350* A, int B, FString* C, FString* D, FString* E, int F, int G);
    virtual void Virtual5();
    virtual void Virtual6(int A);
};

class Class_10B327C0
{
public:
    void FUN_10b327c0(Class_10B21350* A);

    char Unknown00[0x30];
    bool Unknown30;
    char Pad31[0x2];
    Class_10B31BE0 Unknown33;
};

extern const char DAT_10e7bdd0[];

extern const char* DAT_10ff3810;

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B327C0 ?FUN_10b327c0@Class_10B327C0@@QAEXPAVClass_10B21350@@@Z
void Class_10B327C0::FUN_10b327c0(Class_10B21350* A)
{
    if (!Unknown30)
    {
        Unknown30 = true;
        A->FUN_10b21350();
        ((Class_10B32160*)this)->FUN_10b32160((Class_1098E330*)A);
        ((Class_10B39530*)((Class_10AA82D0*)this)->FUN_10aa82d0())->FUN_10b39530(0x6d, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown33.FUN_10b31be0(A->Unknown440);
        DAT_10f35dec->Unknown64->Virtual6(A->Unknown444);
        FString First(DAT_10e7bdd0);
        FString Second(DAT_10ff3810);
        FString Third(DAT_10ff3810);
        DAT_10f35dec->Unknown64->Virtual4(A, A->Unknown444, &Third, &Second, &First, 0, 0);
    }
}
