// Game/State_PatrolLook_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10E90D70.h"

double GetTimeSeconds();

// The base whose implicit destructor (0x10BD3140, a jmp to ~Class_10E90D70) unwinds this constructor.
class Class_10BD3140 : public Class_10E90D70
{
public:
    Class_10BD3140(int A, int B) : Class_10E90D70(A, B), Unknown40(true) {}

    bool Unknown40;
};

// 0x70 bytes; the vtable 0x10E97488.
class State_PatrolLook : public Class_10BD3140
{
public:
    State_PatrolLook(int A, int B, const FVector& C, float D, const cString& E, int F, int G, int H);

    float m_EndTime;
    float Unknown48;
    FVector Unknown4C;
    int m_Limit;
    int m_Count;
    int Unknown60;
    int Unknown64;
    cString Unknown68;
    int Unknown6C;
};

// FUNCTION: 0x10BED9E0 ??0State_PatrolLook@@QAE@HHABVFVector@@MABVcString@@HHH@Z
State_PatrolLook::State_PatrolLook(int A, int B, const FVector& C, float D, const cString& E, int F, int G, int H)
    : Class_10BD3140(A, B), m_EndTime(GetTimeSeconds() + D), Unknown48(D), Unknown4C(C), m_Limit(F), m_Count(0),
      Unknown60(0), Unknown64(G), Unknown68(E), Unknown6C(H)
{
}
