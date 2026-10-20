// Game/Unsorted_10AC05C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations
#include "Core/Core.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10A370C0.h"
#include "Game/Class_10E6F414.h"
#include "Game/cCitySectionManager.h"

class Class_10E6F414_Member;

class Class_109671D0;

class FCoords;

// Class_10D9FEE0 from include/Game/Class_10D9FEE0.h, with Virtual12 taking the argument the target passes.
class Class_10D9FEE0 : public Class_10AA82D0
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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10da03a0(int A);
    virtual void Virtual12(unsigned int A);
    virtual void Virtual13(int A);
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void FUN_10d9fdb0();

    void FUN_10d9fee0(int A, int B);
    void FUN_10da01b0(const FVector& A);
    void FUN_10da0710(const FVector& A);
    FVector FUN_10da00f0();
    bool FUN_10d9feb0();
    void FUN_10da07c0(const FVector& V);
    void FUN_10da0000(bool A);
    unsigned FUN_10da0400();
    void FUN_10da0640(Class_109671D0* A, int B);
    void FUN_10da06b0(Class_109671D0* A);
    void FUN_10da0ab0(const FCoords& A);

    char Pad04[0x4];
    int Unknown08;
};

cCitySectionManager* GetCitySectionManager();

int __cdecl FUN_10a37390(UObject* A);

bool __cdecl FUN_10a37030(Class_10A370C0* A, const FVector& B);

float __cdecl appFrand();

// FUNCTION: 0x10AC05C0 ?FUN_10ac05c0@Class_10E6F414@@UAEXPAVClass_10A370C0@@0@Z
void Class_10E6F414::FUN_10ac05c0(Class_10A370C0* A, Class_10A370C0* B)
{
    int nValue;
    if (A == 0)
        return;
    if (B == 0)
        return;
    int Key = 0;
    if (((Class_1098E330*)A)->FUN_1098e330(0x8001f0, &Key) && Key != 0)
        return;
    Virtual13(B, A);
    if (GetCitySectionManager()->FUN_10abf100())
    {
        unsigned char Type;
        if (((Class_10971570*)A)->FUN_10971570(0x20000bd, (bool*)&Type))
        {
            switch (Type)
            {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 10:
                nValue = 1;
                ((Class_1098E3D0*)A)->FUN_1098e3d0(0x40800648, &nValue);
                break;
            case 2:
            case 8:
            case 9:
                break;
            }
        }
    }
    Class_10D9FEE0* PhysB = B->Unknown0B0;
    Class_10D9FEE0* PhysA = A->Unknown0B0;
    if (PhysA != 0 && PhysB != 0)
        PhysA->Virtual12(PhysB->FUN_10da0400());
    FUN_10a37390((UObject*)A);
    FUN_10ac0830((Class_1096D780*)A, (AActor*)B);
    FVector Vec;
    Vec.X = (int)(60.0f - appFrand() * 120.0f);
    Vec.Y = (int)(60.0f - appFrand() * 120.0f);
    Vec.Z = 60.0f;
    FUN_10a37030(A, Vec);
}
