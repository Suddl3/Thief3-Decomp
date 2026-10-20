// Game/Class_1091CB20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/cIntArray.h"
#include "Game/Class_1091CB20.h"

class Class_10919C40;

extern float DAT_10e499a4;

double FUN_10d20ec0(double Value);

// FUNCTION: 0x1091CA20 ??0Class_1091CB20@@QAE@PAVClass_10919C40@@ABVcString@@MM_NH@Z
Class_1091CB20::Class_1091CB20(Class_10919C40* Owner, const cString& Name, float A, float B, bool C, int D)
    : Unknown0D(C), m_Name(Name),
      Unknown14(A == DAT_10e499a4 ? DAT_10e499a4 : FUN_10d20ec0((int)(A * 100.0f) * 0.01f)),
      Unknown18(B == DAT_10e499a4 ? DAT_10e499a4 : FUN_10d20ec0((int)(B * 100.0f) * 0.01f)),
      Unknown1C(D), m_Owner(Owner)
{
    FUN_1091be70();
}
