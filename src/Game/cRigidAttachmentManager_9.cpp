// Game/cRigidAttachmentManager_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E3D60_Member.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10AA82D0.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h has no destructor and an out-of-line SetCount; this copy inlines both, as the function does.
class cIntArray
{
public:
    cIntArray()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
    }

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

// The class the packet's vtable names; slot 15 is this function.
class cRigidAttachmentManager
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
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13(int A, cIntArray* B, cIntArray* C);
    virtual void Virtual14();
    virtual void FUN_10a7afd0(int A, cIntArray* B);
};

// The links the array holds: each one knows the object it links to.
class Class_10E6CE28 : public Class_10AA82D0
{
public:
    int GetUnknown08();
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A7AFD0 ?FUN_10a7afd0@cRigidAttachmentManager@@UAEXHPAVcIntArray@@@Z
void cRigidAttachmentManager::FUN_10a7afd0(int A, cIntArray* B)
{
    cIntArray Local;
    this->Virtual13(A, B, &Local);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        Class_10E6CE28* Item = (Class_10E6CE28*)Local.Unknown08[i];
        int Linked = Item->GetLinkedObject();
        URigidAttachmentLinkDataObject* Rigid = Cast<URigidAttachmentLinkDataObject>((UObject*)Linked);
        if (Rigid->m_bConcretes)
        {
            int Sub = Item->GetUnknown08();
            if (Sub && ((UObject*)Sub)->IsA(AActor::StaticClass()))
                DAT_10f35dec->Unknown28->Virtual2(Sub);
        }
    }
}
