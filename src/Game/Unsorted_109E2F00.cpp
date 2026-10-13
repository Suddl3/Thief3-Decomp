// Game/Unsorted_109E2F00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Game/cIntArray.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_109E2E70.h"
#include "Game/Struct_109E2E70_Entry.h"
#include "Game/Struct_109E2E70_Node.h"

class Class_10970890;

class Class_1098E330 : public AActor
{
public:
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual int Virtual105();

    int FUN_1098e330(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();
    int FUN_109766a0(int A, int B);

    char Pad04[0x20];
    int Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    char Pad30[0x94];
    unsigned int m_Flags;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
};

struct Struct_109E2E70_Node;

// FUNCTION: 0x109E2F00 ?FUN_109e2f00@Class_109E2E70@@QAE_NHHPAVcIntArray@@_N@Z
bool Class_109E2E70::FUN_109e2f00(int Index, int Param3, cIntArray* Out, bool Flag)
{
    if (Index < 0 || Index >= Unknown04.Count)
        return false;
    Struct_109E2E70_Entry* Entry = (Struct_109E2E70_Entry*)Unknown04.Data[Index];
    if (!Entry)
        return false;
    Struct_109E2E70_Node* Node = Entry->Unknown04;
    while (Node)
    {
        bool Take = true;
        if (!Flag)
        {
            int Key;
            if (!Node->Unknown08->FUN_1098e330(0x8004ef, &Key))
                Take = false;
            else
                Take = Key == 1;
        }
        if (Node->Unknown08->FUN_109766a0(Param3, 0) && Take)
        {
            int Slot = Out->Count;
            Out->SetCount(Slot + 1);
            Out->Data[Slot] = (int)Node->Unknown08;
        }
        Node = Node->Next;
    }
    return true;
}
