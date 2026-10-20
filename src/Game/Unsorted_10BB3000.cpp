// Game/Unsorted_10BB3000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10A7F5A0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10A9DBE0_Param2.h"
#include "Game/Class_10A9DBE0_Param3.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10BB86B0.h"
#include "Game/Class_10E8C944.h"

class Class_10BAA580;

class Class_10B47720;

struct Struct_10B4C2C0;

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

// The object a link points at.
class Class_10B39870 : public Class_10BB86B0
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    Class_10B47720* Unknown0C;
};

// The linked object of a pawn controller.
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

// The link a pawn controller holds.
struct Struct_10B9BCA0
{
    char Unknown00[8];
    Class_10AA82D0* Unknown08;
};

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

Class_10BB3190_Result* FUN_10983cf0(int A);

// FUNCTION: 0x10BB3000 ?FUN_10bb3000@Class_10E8C944@@UAEHHPAVClass_10A9DBE0_Param2@@PAVClass_10A9DBE0_Param3@@@Z
int Class_10E8C944::FUN_10bb3000(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C)
{
    if (B && B->Virtual8() && C && C->Virtual3() >= 2)
    {
        float Value = ((Class_10C3D3B0*)C->Virtual4(1))->Class_10C3D3B0::FUN_10c3d3b0();
        cIntArray Found = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
        for (int i = 0; i < Found.Count; i++)
        {
            Class_10BB3190_Result* Item = FUN_10983cf0(Found.Data[i]);
            if (Item)
            {
                Class_10B9BCA0* Controller = GetAIPawnController(Item);
                if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
                    Controller->Unknown118->Unknown08->GetLinkedObject()->FUN_10bb86b0(Value);
            }
        }
        return 1;
    }
    return 0;
}
