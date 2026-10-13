// Game/Class_10C25EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C064D0.h"
#include "Game/Class_10C25770.h"

class Class_10C25EB0
{
public:
    FVector GetPosition();

    Class_10C064D0* m_Grid;
    int m_Row;
    int m_Column;
};

// FUNCTION: 0x10C25EB0 ?GetPosition@Class_10C25EB0@@QAE?AVFVector@@XZ
FVector Class_10C25EB0::GetPosition()
{
    if (!m_Grid)
        return FVector(0.0f, 0.0f, 0.0f);
    return m_Grid->FUN_10c064d0(m_Row, m_Column);
}
