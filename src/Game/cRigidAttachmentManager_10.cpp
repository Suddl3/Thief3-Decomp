// Game/cRigidAttachmentManager_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/cIntArray.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_1098E3D0.h"

class Class_10B47720;

struct Struct_10B4C2C0;

// The linked object: copied from include/Game/Class_10B39870.h with the
// fields at 0x6C and 0x74 added (the game reads the flag byte there).
class Class_10B39870
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Unknown10[0x5C];
    int Unknown6C;
    char Unknown70[0x4];
    unsigned char Unknown74;
};

// Class_10AA82D0 copied from include/Game/Class_10AA82D0.h with GetLinkedObject's real return type.
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

// The link item the manager walks.
class Class_10E6CE28 : public Class_10AA82D0
{
public:
    int GetUnknown08();
};

// The third argument: a record whose field at 0x4 points at the value the
// report carries.
class Class_10A7D150_Param
{
public:
    int Unknown00;
    int* Unknown04;
};

// cRigidAttachmentManager's header, copied whole: slot 8 takes the actor and
// the list it fills, and slot 23 is this function.
class cRigidAttachmentManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10a7a370(int p1);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7(int p1);
    virtual void Virtual8(AActor* A, cIntArray* B);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Attach(int A, int B);
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17(int A, int B);
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void FUN_10a7d150(UObject* A, cIntArray* B, Class_10A7D150_Param* C);
    virtual void Virtual24();
    virtual void FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08);
};

// FUNCTION: 0x10A7D150 ?FUN_10a7d150@cRigidAttachmentManager@@UAEXPAVUObject@@PAVcIntArray@@PAVClass_10A7D150_Param@@@Z
void cRigidAttachmentManager::FUN_10a7d150(UObject* A, cIntArray* B, Class_10A7D150_Param* C)
{
    AActor* Actor = Cast<AActor>(A);
    int* Value = C->Unknown04;
    if (Value)
    {
        cIntArray Local;
        this->Virtual8(Actor, &Local);
        for (int i = 0; i < Local.Count; i++)
        {
            Class_10E6CE28* Item = (Class_10E6CE28*)Local.Data[i];
            Class_10B39870* Linked = Item->GetLinkedObject();
            URigidAttachmentLinkDataObject* Rigid = Cast<URigidAttachmentLinkDataObject>((UObject*)Linked);
            if (!Rigid || !(Linked->Unknown74 & 0x10))
            {
                int Sub = Item->GetUnknown08();
                int Key = *Value;
                ((Class_1098E3D0*)Sub)->FUN_1098e3d0(0x40800056, &Key);
            }
        }
    }
}
