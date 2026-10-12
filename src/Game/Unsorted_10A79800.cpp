// Game/Unsorted_10A79800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6BD68_Unknown0C.h"
#include "Game/Class_10E6BD68_Unknown18.h"
#include "Game/cRigidAttachmentManager.h"
#include "Game/cUObjectLinkManager.h"

cUObjectLinkManager* GetUObjectLinkManager();

class cIntArray
{
public:
    void SetCount(int NewCount);

    int FindIndex(int Item)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            if (Unknown08[i] == Item)
                return i;
        }
        return -1;
    }

    void Append(int Item)
    {
        int Index = Unknown00;
        SetCount(Index + 1);
        Unknown08[Index] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10E6BD68
{
public:
    virtual void FUN_10a795d0();
    virtual void FUN_10a79610();
    virtual void Virtual2();
    virtual void AddItem(int Item);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10a7a340(void* A, int B);

    int Unknown04;
    int Unknown08;
    Class_10E6BD68_Unknown0C** Unknown0C;
    int Unknown10;
    int Unknown14;
    Class_10E6BD68_Unknown18** Unknown18;
    char Unknown1C[0xC];
    cIntArray m_Items;
};

// FUNCTION: 0x10A79D30 ?AddItem@Class_10E6BD68@@UAEXH@Z
void Class_10E6BD68::AddItem(int Item)
{
    if (m_Items.FindIndex(Item) < 0)
        m_Items.Append(Item);
}

// FUNCTION: 0x10A7A390 ?Attach@cRigidAttachmentManager@@UAEXHH@Z
void cRigidAttachmentManager::Attach(int A, int B)
{
    GetUObjectLinkManager()->Virtual5(A, 0, 0x281b9d0, B, 3);
}
