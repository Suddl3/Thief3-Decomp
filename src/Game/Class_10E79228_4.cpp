// Game/Class_10E79228_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1093BCB0.h"
#include "Game/Class_10E79228.h"
#include "Game/Struct_1093BCB0.h"
#include "Game/Struct_10B16B30.h"

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

void FUN_10a23fb0(Class_10B16B30_Result* A, Struct_10B16B30* B, char* C, char* D);

// FUNCTION: 0x10B16B30 ?LayoutTitleBar@Class_10E79228@@QAEXXZ
void Class_10E79228::LayoutTitleBar()
{
    Struct_1093BCB0* Info = 0;
    bool Found;
    {
        cString Name("META_TabScreenTitleBar");
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
