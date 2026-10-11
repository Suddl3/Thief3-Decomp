// Game/Unsorted_10B16780_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_1093BCB0.h"

class Class_10953590;

class Class_10939570 : public Class_1093BCB0
{
public:
    char FUN_10939570();
    void FUN_1093bce0(Class_10953590* Param);
    void* FUN_1093bd40(int* A, int B, int C);
    void FUN_1093b5e0();

    char Pad00[0x1];
};

extern Class_10939570* DAT_10f323fc;

class Class_10B16B30_Result
{
public:
    char Pad00[0x18];
    int Unknown18;
    int Unknown1C;
};

struct Struct_1093BCB0
{
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10B16B30_Result* Virtual4(int A);
};

struct Struct_10B16B30
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

void FUN_10a23fb0(Class_10B16B30_Result* A, Struct_10B16B30* B, char* C, char* D);

class Class_10E79228
{
public:
    void FUN_10b16b30();
};

// FUNCTION: 0x10B16B30 ?FUN_10b16b30@Class_10E79228@@QAEXXZ
void Class_10E79228::FUN_10b16b30()
{
    Struct_1093BCB0* Info = 0;
    bool Found;
    {
        Class_109081E0 Name("META_TabScreenTitleBar");
        Found = DAT_10f323fc->FUN_1093b260(Name, &Info);
    }
    if (Found)
    {
        Class_10B16B30_Result* Obj = Info->Virtual4(0);
        if (Obj)
        {
            Struct_10B16B30 Rect;
            Rect.Unknown08 = Obj->Unknown18;
            Rect.Unknown0C = Obj->Unknown1C;
            Rect.Unknown04 = 0;
            Rect.Unknown00 = 0;
            char Bytes[4] = {0, 0, 0, 0};
            char Other[4] = {0, 0, 0, 0};
            FUN_10a23fb0(Obj, &Rect, Other, Bytes);
        }
    }
}
