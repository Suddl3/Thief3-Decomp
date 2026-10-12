// Game/Class_10E69BA0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1096A960.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Class_10E69BA0.h"

class Class_10A5F040_Arg;

struct List_10A5E900;

class Class_10A5F040_Arg
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual Class_10AF7F80* Virtual5();

    char Unknown04[0x14];
    Class_10AF7F80 Unknown18;
    Class_10AF7F80 Unknown24;
    int Unknown30;
    int Unknown34;
    Class_1096A960* Unknown38;
};

// FUNCTION: 0x10A5F040 ?FUN_10a5f040@Class_10E69BA0@@UAEXPAVClass_1096A960@@PAVClass_10A5F040_Arg@@H@Z
void Class_10E69BA0::FUN_10a5f040(Class_1096A960* A, Class_10A5F040_Arg* B, int C)
{
    if (B->Virtual5())
        B->Virtual5()->FUN_10af7f80();
    if (B->Unknown30)
    {
        Class_10AF7F80* Name = &B->Unknown18;
        if (Name)
            Name->FUN_10af7f80();
    }
    if (B->Unknown34)
    {
        Class_10AF7F80* Name = &B->Unknown24;
        if (Name)
            Name->FUN_10af7f80();
    }
    Class_1096A960* Owner = B->Unknown38;
    Class_109081E0 Text = A->FUN_1096a960();
    Class_109081E0 Other = Owner->FUN_1096a960();
}
