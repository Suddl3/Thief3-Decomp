// Game/Unsorted_10923700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A0C5F0.h"

class Class_10E4AA80;

struct Struct_109236B0;

// The item DAT_10f31988 points at: the field at 0x30 is passed on.
class Class_10923F30_Element
{
public:
    char Pad00[0x30];
    int Unknown30;
};

extern int DAT_10f31974;

extern int DAT_10f31980;

extern int* DAT_10f3197c;

extern Class_10923F30_Element** DAT_10f31988;

// Game/Class_10E4AA80.h's copy: Unknown94 is the pointer this function reads.
class Class_10E4AA80
{
public:
    virtual void Update(int A);

    void FUN_1094ca70(int A);
    float FUN_1094c700();
    void FUN_1094b730();
    void FUN_10948e80();
    void IntegrateOffsets(int A);
    void AddUniqueItem(int A);
    void FUN_1094d500(int A);

    char Unknown04[0x58];
    int m_PendingFlags;
    int Unknown60;
    char Pad64[0x14];
    float Field78;
    char Pad7C[0x18];
    Struct_109236B0* Unknown94;
};

// Game/Class_10920A90.h's copy: the padding holds Unknown0C, and FUN_10923f30 is a member.
class Class_10920A90
{
public:
    void VisitTree(Struct_109236B0* A, int B, int C);
    void FUN_10920fa0(Struct_109236B0* A, int B, int C);
    void FUN_00000000(int Child, int B, int C);
    void RemoveItem(Class_10E4AA80* Item);
    void FUN_10923f30(Class_10E4AA80* Obj);
    void FUN_10923490(Class_10E4AA80* Item);
    void FUN_1091f850();

    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[0x2C];
    Class_10A0C5F0 m_Items;
};

// FUNCTION: 0x10923F30 ?FUN_10923f30@Class_10920A90@@QAEXPAVClass_10E4AA80@@@Z
void Class_10920A90::FUN_10923f30(Class_10E4AA80* Obj)
{
    if (Unknown0C)
    {
        if (Obj->Unknown60 & 0x40)
            Obj->FUN_1094ca70(0);
        if (Obj->Unknown60 & 0x20)
            FUN_10923490(Obj);
        FUN_1091f850();
        if (Obj->Unknown94)
            VisitTree(Obj->Unknown94, (int)&DAT_10f31974, (int)&DAT_10f31980);
        for (int i = 0; i < DAT_10f31974; i++)
            Obj->FUN_1094d500(DAT_10f3197c[i]);
        for (int i = 0; i < DAT_10f31980; i++)
            Obj->AddUniqueItem(DAT_10f31988[i]->Unknown30);
        Obj->Unknown60 &= ~0x40;
    }
}
