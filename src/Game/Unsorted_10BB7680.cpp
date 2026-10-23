// Game/Unsorted_10BB7680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10BAA580.h"
#include "Game/Class_10BA9EE0.h"
#include "Game/Class_10BAA6F0.h"
#include "Game/Class_10BB89D0.h"
#include "Game/Class_10C7D570.h"

extern float DAT_10eafbdc;

// Class_1098E330 copied whole from Game/Class_1098E330.h, with the three floats
// the code reads that the header does not have. The base is left out: the game lays
// the class out from offset 4 (the header's padding names say so).
class Class_10970890;

class Class_1098E330
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

    int GetPropertyValue(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();

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
    char Pad10C[0xCC];
    float Unknown1D8;
    float Unknown1DC;
    float Unknown1E0;
};

class Class_109B2980
{
public:
    int FUN_109b2980();
};

class Class_10BE3FF0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

// Class_10E9092C copied whole from Game/Class_10E9092C.h, with the method the
// code defines added and Unknown08 given the float type the code uses.
class Class_10E9092C
{
public:
    virtual void Virtual0();

    Class_10E9092C(void* p1);

    bool FUN_10bb7500(int p1, bool p2);
    void FUN_10bb7680();

    int Unknown04;
    float Unknown08;
    Class_10C7D570* Unknown0C;
};

// FUNCTION: 0x10BB7680 ?FUN_10bb7680@Class_10E9092C@@QAEXXZ
void Class_10E9092C::FUN_10bb7680()
{
    if (Unknown0C == 0)
        return;
    if (Unknown0C->Unknown64)
        return;

    int Key = 0;
    if (((Class_1098E330*)Unknown0C->FUN_10c7d570())->GetPropertyValue(0x40800056, &Key) != 0)
    {
        if (Key != 0)
        {
            FUN_10bb7500(3, Key == 1);
            return;
        }
    }

    Class_10BAA580* Object = (Class_10BAA580*)Unknown0C;
    if (((Class_10BAA580*)Unknown0C)->FUN_10baa580() != 0)
    {
        if (((Class_109B2980*)((Class_10BAA580*)Unknown0C)->FUN_10baa580())->FUN_109b2980() != 0)
        {
            if (Unknown04 != 0)
                FUN_10bb7500(0, false);
            return;
        }
    }

    Class_10BE3FF0* Target = ((Class_10BB89D0*)((Class_10BAA6F0*)Unknown0C)->FUN_10baa6f0())->FUN_10bb89d0();
    if (Target != 0)
    {
        if (Target->Virtual3() == 4)
        {
            if (Unknown04 == 0)
                return;
            if (((Class_1098E330*)Unknown0C->FUN_10c7d570())->m_Flags & 0x10000000)
                return;
            FUN_10bb7500(0, false);
            return;
        }
    }

    float A = ((Class_1098E330*)Unknown0C->FUN_10c7d570())->Unknown1D8 * 16.0f;
    float B = ((Class_1098E330*)Unknown0C->FUN_10c7d570())->Unknown1DC * 16.0f;
    float C = ((Class_1098E330*)Unknown0C->FUN_10c7d570())->Unknown1E0 * 16.0f;
    if (((Class_10BA9EE0*)Unknown0C)->FUN_10ba9ee0() == 0)
        return;
    if (A > DAT_10eafbdc && Unknown08 > A)
    {
        if (Unknown04 == 3)
            return;
        FUN_10bb7500(3, false);
        return;
    }
    if (B > DAT_10eafbdc && Unknown08 > B)
    {
        if (Unknown04 == 2)
            return;
        FUN_10bb7500(2, false);
        return;
    }
    if (C > DAT_10eafbdc && Unknown08 > C)
    {
        if (Unknown04 == 1)
            return;
        FUN_10bb7500(1, false);
        return;
    }

    if (Unknown04 != 0)
        FUN_10bb7500(0, false);
}
