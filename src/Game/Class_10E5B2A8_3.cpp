// Game/Class_10E5B2A8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109E2A90.h"

class AZoneProperties;

class UObject;

struct Struct_109E2A90_Node
{
    Struct_109E2A90_Node* Next;
    int Unknown04;
    AZoneProperties* Unknown08;
};

class Class_10E5B2A8
{
public:
    virtual void FUN_109e30d0(int Event, UObject* A, int B, int C);

    Class_10E5B2A8();

    void FUN_109e2c10(INT A, AZoneProperties* B);
    void FUN_109e2ce0(UObject* Obj, int A, int B);
    void FUN_109e2fa0(UObject* A, int B, int C);
    void FUN_109e3060(UObject* A, int B, int C);
    void FUN_109e2b40(AZoneProperties* A);

    int Unknown04;
    int Unknown08;
    Class_109E2A90** Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x109E2C10 ?FUN_109e2c10@Class_10E5B2A8@@QAEXHPAVAZoneProperties@@@Z
void Class_10E5B2A8::FUN_109e2c10(INT Index, AZoneProperties* Obj)
{
    if (Index >= 0 && Index < Unknown04)
    {
        Class_109E2A90* Bucket = Unknown0C[Index];
        if (Bucket)
        {
            for (Struct_109E2A90_Node* Node = Bucket->Head; Node; Node = Node->Next)
            {
                if (Node->Unknown08 == Obj)
                {
                    Bucket->FUN_109e2a90(Node);
                    delete Node;
                    return;
                }
            }
        }
        FUN_109e2b40(Obj);
        return;
    }
    FUN_109e2b40(Obj);
}
