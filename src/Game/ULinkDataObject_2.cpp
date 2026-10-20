// Game/ULinkDataObject_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10C08940.h"

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

// The header's cUObjectLinkManager copied whole, with slot 4's real signature and slot 6 added.
class UClass;

class Class_10AA82D0;

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(void* A, int B, int C, cIntArray* D);
    virtual void Virtual5(int A, int B, int C, int D, int E);
    virtual void Virtual6(Class_10AA82D0* A);
};

cUObjectLinkManager* GetUObjectLinkManager();

// The link object, as symbols.txt names its GetUnknown08.
class Class_10E6CE28
{
public:
    int GetUnknown08();
};

// AICore/AICoreClasses.h's AAIPathPoint, with the method this unit calls.
class AAIPathPoint
{
public:
    void FUN_10b06230(int A);
};

// Core/CoreClasses.h's ULinkDataObject copied whole, with m_pAssociatedLink's real type.
class ULinkDataObject : public UObject
{
    DECLARE_CLASS(ULinkDataObject, UObject, 0x1, Core)

public:
    virtual void Destroy();                 // slot 0: 0x10B0F7F0
    virtual ~ULinkDataObject();             // slot 2: 0x1099F280
    virtual void Serialize(FArchive& Ar);   // slot 8: 0x10B0F5E0
    virtual void Virtual31();               // slot 31: 0x10B0F4D0
    virtual void Virtual32();               // slot 32: 0x109E3CA0, signature unknown
    virtual int Virtual24();                // slot 24: 0x10B0F4A0, UObject's

public:
    INT m_LinkFlavor;                       // 0x2C
    Class_10E6CE28* m_pAssociatedLink;      // 0x30
    FStringNoInit m_LinkComment;            // 0x34
    FStringNoInit m_name;                   // 0x40
    FName m_GroupName;                      // 0x4C
};

// FUNCTION: 0x10B0F7F0 ?Destroy@ULinkDataObject@@UAEXXZ
void ULinkDataObject::Destroy()
{
    ((AAIPathPoint*)this)->FUN_10b06230(0x800000);
    if (m_pAssociatedLink)
    {
        cIntArray Found;
        GetUObjectLinkManager()->Virtual4(((Class_10978090*)m_pAssociatedLink)->FUN_10978090(), m_pAssociatedLink->GetUnknown08(), m_LinkFlavor, &Found);
        for (int i = 0; i < Found.Unknown00; i++)
        {
            if (Found.Unknown08[i] == m_pAssociatedLink)
            {
                GetUObjectLinkManager()->Virtual6((Class_10AA82D0*)Found.Unknown08[i]);
                break;
            }
        }
        m_pAssociatedLink = 0;
    }
    UObject::Destroy();
}
