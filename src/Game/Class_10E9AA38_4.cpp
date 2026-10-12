// Game/Class_10E9AA38_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10E93B5C.h"
#include "Game/Class_10C37960.h"

double GetTimeSeconds();

bool FUN_10c37920(Class_10C37960* A, int B, int C, int D, int E, int F);

class MoveCommand
{
public:
    MoveCommand(int A, const Class_10E93B5C& B, int C);
    virtual bool IsFinished();

    ~MoveCommand();

    MoveCommand* Init(int A, const Class_10E93B5C& B, int C);

    int Unknown04;
    Class_10E93B5C Unknown08;
    int Unknown3C;
    int Unknown40;
    bool m_Active;
    bool m_Finished;
    char Pad46[0x2];
    int Unknown48;
};

class Class_10E9AA38 : public MoveCommand
{
public:
    Class_10E9AA38(Class_10C37960* A, const Class_10E93B5C& B, int C, const cString& E, int F, int G, int H, int I);
    virtual bool IsFinished();
    virtual cString GetDescription();
    virtual ~Class_10E9AA38();

    bool Unknown4C;
    char Pad4D[0x3];
    int Unknown50;
    char Unknown54;
    char Pad55[0x3];
    int Unknown58;
    float Unknown5C;
    float Unknown60;
    cString Unknown64;
};

// FUNCTION: 0x10C2E800 ??0Class_10E9AA38@@QAE@PAVClass_10C37960@@ABVClass_10E93B5C@@HABVcString@@HHHH@Z
Class_10E9AA38::Class_10E9AA38(Class_10C37960* A, const Class_10E93B5C& B, int C, const cString& E, int F, int G, int H, int I)
    : MoveCommand((int)A, B, C), Unknown4C(false), Unknown50(0), Unknown54((char)F), Unknown58(G), Unknown5C(0.0f), Unknown64(E)
{
    Unknown60 = (float)GetTimeSeconds();
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
