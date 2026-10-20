// Game/cRigidAttachmentManager_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAF570.h"
#include "Game/Class_10905A90_Member.h"

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

class Class_10AA82D0;

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray* D);
    virtual void Virtual5();
    virtual void Virtual6(Class_10AA82D0* A);
};

cUObjectLinkManager* GetUObjectLinkManager();

class Class_10B47720;

struct Struct_10B4C2C0;

// Class_10B39870 copied from include/Game/Class_10B39870.h with the byte at 0x74 added.
class Class_10B39870
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Unknown10[0x64];
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

class cRigidAttachmentManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10a7ba40(int A);
};

// FUNCTION: 0x10A7BA40 ?FUN_10a7ba40@cRigidAttachmentManager@@UAEXH@Z
void cRigidAttachmentManager::FUN_10a7ba40(int A)
{
    cIntArray Local;
    GetUObjectLinkManager()->Virtual4(0, A, 0x281b9d0, &Local);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        Class_10AA82D0* Element = (Class_10AA82D0*)Local.Unknown08[i];
        if (((Class_10B39870*)Element->GetLinkedObject())->Unknown74 & 4)
            GetUObjectLinkManager()->Virtual6(Element);
    }
}
