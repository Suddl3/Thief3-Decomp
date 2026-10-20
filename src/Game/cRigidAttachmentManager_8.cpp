// Game/cRigidAttachmentManager_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations
#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"

class Class_10905A90_Member;

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h copied whole, with SetCount and the destructor inline as this unit compiles them.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}

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

class Class_10A95860_Unknown08;

// The link element.
class Class_10E6CE28
{
public:
    Class_10A95860_Unknown08* GetUnknown08();
};

// The object the link points at: its flags at 0x74.
class Class_10A95860_Unknown08
{
public:
    char Pad00[0x74];
    int Unknown74;
};

// The object the manager gathers the attachments of: its brush at 0x98.
class Class_10A7C8A0_Actor
{
public:
    char Pad00[0x98];
    ABrush* Unknown98;
};

// The game's class at vtable 0x10E6BD90: the header's copy, with slot 17 and the slots this function calls.
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
    virtual void Virtual8(Class_10A7C8A0_Actor* A, cIntArray* B);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Attach(int A, int B);
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void FUN_10a7c8a0(Class_10A7C8A0_Actor* A, char Flag);
    virtual void Virtual18(Class_10A95860_Unknown08* A, Class_10E6CE28* B);
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08);
};

// FUNCTION: 0x10A7C8A0 ?FUN_10a7c8a0@cRigidAttachmentManager@@UAEXPAVClass_10A7C8A0_Actor@@D@Z
void cRigidAttachmentManager::FUN_10a7c8a0(Class_10A7C8A0_Actor* A, char Flag)
{
    cIntArray Local;
    Virtual8(A, &Local);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        if (A->Unknown98 != 0 && A->Unknown98->pStaticMesh != 0 && Flag == 0)
        {
            Class_10A95860_Unknown08* Linked = ((Class_10E6CE28*)Local.Unknown08[i])->GetUnknown08();
            Linked->Unknown74 |= 0x400;
        }
        else
        {
            Class_10A95860_Unknown08* Linked = ((Class_10E6CE28*)Local.Unknown08[i])->GetUnknown08();
            Virtual18(Linked, (Class_10E6CE28*)Local.Unknown08[i]);
        }
    }
}
