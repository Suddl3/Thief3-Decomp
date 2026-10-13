// Game/Unsorted_10B4C320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"
#include "Game/Class_10A18E80.h"
#include "Game/Class_10EB79F4.h"
#include "Game/Class_10AA9D90.h"

class FArchive;

class Object_10A18FC0;

extern float DAT_10eafbdc;

Object_10A18FC0* FUN_10a18fc0();

// Copied whole from include/Game/Class_10B255F0.h, with the member the target
// calls on GetSelection()'s result (FUN_10b261e0) added.
class Class_10B255F0 : public Class_10AA9D90
{
public:
    virtual int Virtual0();

    Class_10B255F0();

    void FUN_10b24dd0(FArchive& Ar);
    void* FUN_10b24f70();
    int GetEntryValue();
    int GetSelectedValue();
    int FUN_10b25030();
    int GetEntryCount();
    int FUN_10dc1760();
    void FUN_10b25700(int p1);
    void FUN_10b25dc0(int p1);
    int GetItemCount();
    void FUN_10b261e0();

    int Unknown30;
    union
    {
        int m_ItemIndex;
        int Unknown34;
    };
    union
    {
        int Unknown08;
        int Unknown38;
    };
    int Unknown0C;
    union
    {
        int m_UseListA;
        float Unknown40;
    };
    union
    {
        int Unknown14;
        int Unknown44;
    };
    union
    {
        int Unknown18;
        int Unknown48;
    };
    bool Unknown1C;
    char Pad4D[0x3];
    float Unknown20;
    int Unknown24;
    int Unknown28;
    int m_EntryIndex;
    char Pad60[0xc];
    bool Unknown3C;
    char Pad3D[0x3];
    char Pad70[0xc];
    int Unknown4C;
    bool Unknown50;
    bool Unknown51;
    bool Unknown52;
    char Pad53[0x1];
};

Class_10B255F0* GetSelection();

class Class_1098E330
{
public:
    char Unknown00[0x440];
    Class_10971570* Unknown440;
};

class Class_10B4C620
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();

    int FUN_10b3add0(unsigned char Value);
    void FUN_10b4c620(Class_1098E330* A);
};

// FUNCTION: 0x10B4C620 ?FUN_10b4c620@Class_10B4C620@@QAEXPAVClass_1098E330@@@Z
void Class_10B4C620::FUN_10b4c620(Class_1098E330* A)
{
    if (((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(6) > DAT_10eafbdc)
    {
        if (A->Unknown440)
        {
            bool Out = false;
            A->Unknown440->FUN_10971570(0x20000bd, &Out);
            FUN_10b3add0(Out);
            return;
        }
        if (!((Class_10EB79F4*)GetSelection())->FUN_10b24d60())
        {
            if (!GetSelection()->FUN_10b24f70())
                GetSelection()->FUN_10b261e0();
        }
    }
    Virtual4();
}
