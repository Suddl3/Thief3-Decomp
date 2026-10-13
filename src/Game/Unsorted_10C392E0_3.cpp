// Game/Unsorted_10C392E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C399C0.h"
#include "Game/Class_10C38D90_Unknown48.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10C05A80.h"

struct Struct_10C3D0A0
{
    char Unknown00[0x2C];
    Struct_10C05A80 Unknown2C;
};

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

// FUNCTION: 0x10C3B570 ?TrackTarget@Class_10C399C0@@QAE_NPAH@Z
bool Class_10C399C0::TrackTarget(int* Obj)
{
    float Span = (float)Unknown50 + (float)Unknown50;
    if (m_PathIndex >= m_PathCount)
        return true;
    Struct_10C3D0A0* Actor = (Struct_10C3D0A0*)Unknown48->Virtual34()->FUN_10c7d570();
    Struct_10C05A80 ActorPos = Actor->Unknown2C;
    Struct_10C05A80 Pos = m_PathPoints[m_PathIndex];
    if (*Obj == 0)
    {
        if (FUN_10c3a3f0(&Pos, Obj, 0, 0))
            return false;
        if (*Obj == 0)
            return false;
    }
    float Dist = DistanceSquared3D(&((Struct_10C3D0A0*)*Obj)->Unknown2C, &ActorPos);
    float Sum = FUN_10c38640(*Obj) + Span;
    if (Dist < Sum * Sum)
    {
        if (*Obj == m_LastTarget)
            m_SeenCount++;
        else
        {
            m_SeenCount = 0;
            m_LastTarget = *Obj;
        }
        if (m_SeenCount > 3)
            return true;
    }
    return false;
}
