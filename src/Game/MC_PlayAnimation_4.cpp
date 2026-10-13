// Game/MC_PlayAnimation_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E93B5C.h"
#include "Game/Class_10C37960.h"
#include "Game/MoveCommand.h"

double GetTimeSeconds();

bool FUN_10c37920(Class_10C37960* A, int B, int C, int D, int E, int F);

class MC_PlayAnimation : public MoveCommand
{
public:
    MC_PlayAnimation(Class_10C37960* A, const Class_10E93B5C& B, int C, const cString& E, int F, int G, int H, int I);
    virtual bool IsFinished();
    virtual cString GetDescription();
    virtual ~MC_PlayAnimation();

    bool m_Failed;
    char Pad4D[0x3];
    int m_AnimIndex;
    char Unknown54;
    char Pad55[0x3];
    int Unknown58;
    float m_Duration;
    float m_StartTime;
    cString m_AnimName;
};

// FUNCTION: 0x10C2E800 ??0MC_PlayAnimation@@QAE@PAVClass_10C37960@@ABVClass_10E93B5C@@HABVcString@@HHHH@Z
MC_PlayAnimation::MC_PlayAnimation(Class_10C37960* A, const Class_10E93B5C& B, int C, const cString& E, int F, int G, int H, int I)
    : MoveCommand((int)A, B, C), m_Failed(false), m_AnimIndex(0), Unknown54((char)F), Unknown58(G), m_Duration(0.0f), m_AnimName(E)
{
    m_StartTime = (float)GetTimeSeconds();
    A->Virtual54();
    if (E.Unknown00 != 0 && ((int*)E.Unknown00)[-1] > 0)
    {
        if (!FUN_10c37920(A, (int)&E, G, H, I, F))
        {
            m_Failed = true;
            return;
        }
    }
}
