// Game/Unsorted_10A1E620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

void FUN_10a1e620(void* Object);

void FUN_10a1eaa0(void* Object);

class Class_10A1ED10
{
public:
    char Unknown00[0x288];
    void* Unknown288;
};

class Class_10963CE0
{
public:
    void FUN_10963ce0(FRotator R);

    FLOAT M[4][4];
};

struct Struct_10A1E690
{
    FLOAT M[3][3];
};

// An item of the container: its virtual slot 5 takes a flag (1 deletes it).
class Class_10A1E620_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Flag);
};

// The container at the object's field B4: an item array and its count.
class Class_10A1E620_Inner
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Flag);

    char Unknown04[0x110];
    Class_10A1E620_Item** Items;
    int Count;
};

// The object passed in: the container pointer is at B4.
class Class_10A1E620
{
public:
    char Unknown00[0xB4];
    Class_10A1E620_Inner* UnknownB4;
};

class Class_10924100
{
public:
    void FUN_10920a30(Class_10A1E620_Inner* Inner);
};

extern Class_10924100* DAT_10f2c740;

// FUNCTION: 0x10A1E620 ?FUN_10a1e620@@YAXPAX@Z
void FUN_10a1e620(void* Ptr)
{
    Class_10A1E620* Obj = (Class_10A1E620*)Ptr;
    Class_10A1E620_Inner* Inner = Obj->UnknownB4;
    Obj->UnknownB4 = 0;
    if (Inner)
    {
        DAT_10f2c740->FUN_10920a30(Inner);
        for (int i = 0; i < Inner->Count; i++)
        {
            Class_10A1E620_Item* Item = Inner->Items[i];
            if (Item)
                Item->Virtual5(1);
        }
        ::operator delete(Inner->Items);
        Inner->Virtual5(1);
    }
}

// FUNCTION: 0x10A1E690 ?FUN_10a1e690@@YAXPAUStruct_10A1E690@@PBVFRotator@@@Z
void FUN_10a1e690(Struct_10A1E690* Out, const FRotator* R)
{
    Class_10963CE0 Matrix;
    Matrix.FUN_10963ce0(*R);
    Out->M[0][0] = Matrix.M[0][0];
    Out->M[0][1] = Matrix.M[0][1];
    Out->M[0][2] = Matrix.M[0][2];
    Out->M[1][0] = Matrix.M[1][0];
    Out->M[1][1] = Matrix.M[1][1];
    Out->M[1][2] = Matrix.M[1][2];
    Out->M[2][0] = Matrix.M[2][0];
    Out->M[2][1] = Matrix.M[2][1];
    Out->M[2][2] = Matrix.M[2][2];
}

// FUNCTION: 0x10A1ED10 ?FUN_10a1ed10@@YAXPAVClass_10A1ED10@@@Z
void FUN_10a1ed10(Class_10A1ED10* Owner)
{
    void* Object = Owner->Unknown288;
    if (Object)
    {
        FUN_10a1e620(Object);
        FUN_10a1eaa0(Object);
    }
}
