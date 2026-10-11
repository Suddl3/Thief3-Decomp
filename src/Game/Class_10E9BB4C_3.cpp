// Game/Class_10E9BB4C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4B2A0.h"
#include "Game/Class_10C68070.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10C4B2A0* FUN_10c4c2d0();

class Class_10E9CB00;

struct Struct_10C64E10;

// Copied whole from include/Game/Class_10C662F0.h, with FUN_10c66230 added.
class Class_10C662F0
{
public:
    bool FUN_10c662f0(int A, int B, int C);
    void FUN_10c64e10(Class_10E9CB00* A);
    void FUN_10c64ff0(Class_10E9CB00* A);
    bool FUN_10c66230(int A, Class_10C68070* B);

    char Unknown00[0x178];
    int Unknown178;
    int Unknown17C;
    Struct_10C64E10* Unknown180;
};

Class_10C662F0* FUN_10c65090();

class Class_10E9BB4C_Arg;

// Copied whole from include/Game/Class_10E9BB4C.h: slot 0 is FUN_10c4cbd0, not Virtual0.
class Class_10E9BB4C
{
public:
    virtual Class_10C68070* FUN_10c4cbd0(int A);
    virtual void FUN_10c4d1e0(Class_10E9BB4C_Arg* Param);
    virtual void Virtual2();
    virtual bool FUN_10c47e70(int A, int B, int C);

    Class_10E9BB4C* FUN_10c47f30(bool A);

    bool Unknown04;
    char Pad05[0x3];
    union
    {
        int MaxLoadedSchemas;
        int Unknown08;
    };
    int Unknown0C;
};

// FUNCTION: 0x10C4CBD0 ?FUN_10c4cbd0@Class_10E9BB4C@@UAEPAVClass_10C68070@@H@Z
Class_10C68070* Class_10E9BB4C::FUN_10c4cbd0(int A)
{
    if (Unknown08 != -1 && Unknown0C >= Unknown08)
    {
        if (!FUN_10c4c2d0()->FUN_10c48d90())
            return 0;
    }
    GetAllocator()->Virtual8(0, 0);
    Class_10C68070* Obj = new(0, 0, 0, 0, 0) Class_10C68070;
    GetAllocator()->Virtual9();
    Obj->Virtual6(A);
    if (Unknown04)
    {
        if (!FUN_10c65090()->FUN_10c66230(A, Obj))
        {
            delete Obj;
            Obj = 0;
            Unknown0C--;
        }
    }
    Unknown0C++;
    return Obj;
}
