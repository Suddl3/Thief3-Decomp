// Game/Class_10E9CA9C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// This module calls Class_109081E0's destructor out of line where the rest of the game inlines it:
// the class as it compiles here.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];
Class_10905A90_Member* GetAllocator();

class Class_109081E0 : public Class_1090A780
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    Class_109081E0(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    Class_109081E0& operator=(const Class_109081E0& Other);
    Class_109081E0& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};


class Class_10C61C20_Param;

class Class_10E9CA9C
{
public:
    virtual void Virtual0();
    virtual void __stdcall FUN_10c62760(const char* Text);
    virtual void FUN_10c61c20(Class_10C61C20_Param* p1);

    char Unknown04;
    char Pad05[0x3];
    Class_109081E0 Unknown08;
};

// FUNCTION: 0x10C62760 ?FUN_10c62760@Class_10E9CA9C@@UAGXPBD@Z
void __stdcall Class_10E9CA9C::FUN_10c62760(const char* Text)
{
    Unknown08 = Text;
}
