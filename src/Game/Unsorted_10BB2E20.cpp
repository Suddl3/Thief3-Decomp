// Game/Unsorted_10BB2E20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10A7F5A0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10A9DBE0_Param2.h"
#include "Game/Class_10A9DBE0_Param3.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10B9BCA0.h"

class Class_10BAA580;

class Class_10B39870;

// The linked object of a link record.
class Class_10BBAD80
{
public:
    void FUN_10bbad80(int A, int B, float C, int D, int E);
    bool FUN_10bbaca0(int A);

    char Unknown00[8];
    Class_10BAA580* Unknown08;
};

class Class_10B39870 : public Class_10BBAD80
{
};

// The link a pawn controller holds.
struct Struct_10B9BCA0;

// The link record's owner: the game reads its linked object from here.
class Class_10AA82D0 : public Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();
    void FUN_10b4fbf0(int A, int B, float C, float D, int E, int F, float G);

    char Pad01[0x3];
    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

struct Struct_10B9BCA0
{
    char Unknown00[8];
    Class_10AA82D0* Unknown08;
};

// The property a scripted value comes from.
class Class_10E6CE28
{
public:
    int GetUnknown08();
};

// The game's AI pawn: a pawn controller drives one.
class AAIPawn
{
public:
    virtual ~AAIPawn();
};

// What FUN_10983cf0 returns.
class Class_10BB3190_Result : public AAIPawn
{
};

Class_10BB3190_Result* FUN_10983cf0(int A);

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

class Class_10E8C938
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb2e20(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C);
};

// FUNCTION: 0x10BB2E20 ?FUN_10bb2e20@Class_10E8C938@@UAEHHPAVClass_10A9DBE0_Param2@@PAVClass_10A9DBE0_Param3@@@Z
int Class_10E8C938::FUN_10bb2e20(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C)
{
    if (B && B->Virtual8() && C && C->Virtual3() >= 6)
    {
        int Value = ((Class_10E6CE28*)C->Virtual4(1))->GetUnknown08();
        float Weight = ((Class_10C3D3B0*)C->Virtual4(2))->Class_10C3D3B0::FUN_10c3d3b0();
        float Scale = ((Class_10C3D3B0*)C->Virtual4(3))->Class_10C3D3B0::FUN_10c3d3b0();
        float Range = ((Class_10C3D3B0*)C->Virtual4(4))->Class_10C3D3B0::FUN_10c3d3b0();
        float Power = ((Class_10C3D3B0*)C->Virtual4(5))->Class_10C3D3B0::FUN_10c3d3b0();

        cIntArray Found = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
        for (int i = 0; i < Found.Count; i++)
        {
            Class_10BB3190_Result* Item = FUN_10983cf0(Found.Data[i]);
            if (Item)
            {
                Class_10B9BCA0* Controller = GetAIPawnController(Item);
                if (Controller)
                {
                    Struct_10B9BCA0* Record = Controller->Unknown118;
                    if (Record)
                    {
                        Class_10AA82D0* Link = Record->Unknown08;
                        if (Link)
                            Link->GetLinkedObject()->FUN_10bbad80(Value, *(int*)&Weight, Range, *(int*)&Scale, *(int*)&Power);
                    }
                }
            }
        }
        return 1;
    }
    return 0;
}
