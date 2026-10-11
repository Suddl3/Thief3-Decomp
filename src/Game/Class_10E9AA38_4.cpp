// Game/Class_10E9AA38_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10E93B5C.h"

double FUN_10c00480();

class Class_10C37960
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void* Virtual4(int A, int B, float C);
    virtual void* Virtual5(int A, int B, int C, int D);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(void* Value);
    virtual void Virtual9(void* Value);
    virtual void Virtual10(void* Value);
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
};

bool FUN_10c37920(Class_10C37960* A, int B, int C, int D, int E, int F);

class Class_10E99314
{
public:
    Class_10E99314(int A, const Class_10E93B5C& B, int C);
    virtual bool FUN_10c2e500();

    ~Class_10E99314();

    Class_10E99314* FUN_10c27320(int A, const Class_10E93B5C& B, int C);

    int Unknown04;
    Class_10E93B5C Unknown08;
    int Unknown3C;
    int Unknown40;
    bool Unknown44;
    bool Unknown45;
    char Pad46[0x2];
    int Unknown48;
};

class Class_10E9AA38 : public Class_10E99314
{
public:
    Class_10E9AA38(Class_10C37960* A, const Class_10E93B5C& B, int C, const Class_109081E0& E, int F, int G, int H, int I);
    virtual bool FUN_10c2e500();
    virtual Class_109081E0 FUN_10c2e690();
    virtual ~Class_10E9AA38();

    bool Unknown4C;
    char Pad4D[0x3];
    int Unknown50;
    char Unknown54;
    char Pad55[0x3];
    int Unknown58;
    float Unknown5C;
    float Unknown60;
    Class_109081E0 Unknown64;
};

// FUNCTION: 0x10C2E800 ??0Class_10E9AA38@@QAE@PAVClass_10C37960@@ABVClass_10E93B5C@@HABVClass_109081E0@@HHHH@Z
Class_10E9AA38::Class_10E9AA38(Class_10C37960* A, const Class_10E93B5C& B, int C, const Class_109081E0& E, int F, int G, int H, int I)
    : Class_10E99314((int)A, B, C), Unknown4C(false), Unknown50(0), Unknown54((char)F), Unknown58(G), Unknown5C(0.0f), Unknown64(E)
{
    Unknown60 = (float)FUN_10c00480();
    A->Virtual54();
    if (E.Unknown00 != 0 && ((int*)E.Unknown00)[-1] > 0)
    {
        if (!FUN_10c37920(A, (int)&E, G, H, I, F))
        {
            Unknown4C = true;
            return;
        }
    }
}
