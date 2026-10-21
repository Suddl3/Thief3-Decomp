// Game/Unsorted_10BB2BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10B9D060.h"
#include "Game/Class_10BB8CD0.h"
#include "Game/Class_10BF9050.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h copied: this function inlines SetCount, the game's copy does not.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                m_CapacityBytes = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    // The game's (0x109ED5E0): inlined on normal paths, called from unwind funclets.
    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
    }

    int Unknown00;
    int m_CapacityBytes;
    void** Unknown08;
};

// Game/Class_10A7F5A0.h copied: it returns the cIntArray above.
class Class_10A7F5A0
{
public:
    cIntArray FUN_10a7f5a0(int A, int B);

    char Pad00[0x1];
};

// Game/Class_10B9C9A0.h copied: the fields this function calls through.
class Class_10B9BEB0;

class Class_10B9C9A0
{
public:
    ~Class_10B9C9A0();

    void Release();

    Class_10B9BEB0* Unknown00;
    Class_10BB8CD0* Unknown04;
    Class_10B9D060* Unknown08;
    char Pad0C[0xC];
    Class_10BF9050* Unknown18;
};

// AICore/AICoreClasses.h's AAIPawnController copied: the field at 0x118 is a pointer.
class AAIPawnController : public AAIController
{
    DECLARE_CLASS(AAIPawnController, AAIController, 0x0, AICore)

public:
    virtual void Destroy();                 // slot 0
    virtual ~AAIPawnController();           // slot 2
    virtual void Serialize(FArchive& Ar);   // slot 8

public:
    BITFIELD initialized:1;                 // 0x114
    Class_10B9C9A0* Unknown118;              // 0x118
};

// The second argument: a virtual at slot 8.
class Class_10A9DBE0_Param2
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
    virtual int Virtual8();
};

// The third argument: a virtual at slot 4 that returns the object to work on.
class Class_10A9DBE0_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

// The class whose table at 0x10E8C92C holds this function: slot 2.
class Class_10E8C950
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb2bc0(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C);
};

void __cdecl FUN_10abc130(void* A);

// FUNCTION: 0x10BB2BC0 ?FUN_10bb2bc0@Class_10E8C950@@UAEHHPAVClass_10A9DBE0_Param2@@PAVClass_10A9DBE0_Param3@@@Z
int Class_10E8C950::FUN_10bb2bc0(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C)
{
    cIntArray Local = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        APawn* Item = (APawn*)Local.Unknown08[i];
        if (Item && Item->IsA(APawn::StaticClass()))
        {
            if (Item->Controller)
            {
                if (Item->Virtual34() == 0)
                {
                    if (((AAIPawnController*)Item->Controller)->IsA(AAIPawnController::StaticClass()))
                    {
                        AAIPawnController* Controller = (AAIPawnController*)Item->Controller;
                        Class_10B9C9A0* Holder = Controller->Unknown118;
                        if (Holder && Holder->Unknown04)
                        {
                            Holder->Unknown08->FUN_10b9d060();
                            Holder->Unknown04->FUN_10bb8cd0();
                            Holder->Unknown18->FUN_10bf9050();
                            ((Class_1098E330*)Item)->FUN_1098e330(0x8000862, (int*)&B);
                            FUN_10abc130(B);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
