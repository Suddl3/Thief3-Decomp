// Game/cRigidAttachmentManager_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/cIntArray.h"
#include "Game/Class_10AA82D0.h"

// cRigidAttachmentManager's header, copied whole: slot 12 takes the list the call fills
// (a cIntArray&, as the call site shows), and slot 13 is FUN_10a7d880 itself.
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Attach(int A, cIntArray& B);
    virtual void FUN_10a7d880(int A, const FString& Name, cIntArray* Out);
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17(int A, int B);
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08);
};

// FUNCTION: 0x10A7D880 ?FUN_10a7d880@cRigidAttachmentManager@@UAEXHABVFString@@PAVcIntArray@@@Z
void cRigidAttachmentManager::FUN_10a7d880(int A, const FString& Name, cIntArray* Out)
{
    if (Name.Len() != 0)
    {
        cIntArray Items;
        Attach(A, Items);
        for (int i = 0; i < Items.Count; i++)
        {
            int Item = Items.Data[i];
            ULinkDataObject* Link = (ULinkDataObject*)((Class_10AA82D0*)Item)->GetLinkedObject();
            if (!Link || !Link->IsA(URigidAttachmentLinkDataObject::StaticClass()))
            {
                Link = 0;
            }
            FString& LinkName = Link->m_name;
            if (appStricmp(*LinkName, *Name) == 0)
            {
                int Count = Out->Count;
                Out->SetCount(Count + 1);
                Out->Data[Count] = Item;
            }
        }
    }
}
