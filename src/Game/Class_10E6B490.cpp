// Game/Class_10E6B490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/FCoords.h"

extern FCoords DAT_10f46de8;

class Class_10A66F50
{
public:
    int Unknown00[14];
    FRotator Unknown38;
};

class Class_10E6B490
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual FVector* GetXAxis();

    int Unknown04;
    Class_10A66F50* Unknown08;
    FCoords m_Coords;
};

// FUNCTION: 0x10A66F50 ?GetXAxis@Class_10E6B490@@UAEPAVFVector@@XZ
FVector* Class_10E6B490::GetXAxis()
{
    if (Unknown08)
    {
        const FRotator& Rotation = Unknown08->Unknown38;
        FCoords Coords = DAT_10f46de8;
        FCoords Result = Coords.FUN_10961af0(Rotation);
        m_Coords.XAxis = Result.XAxis;
        m_Coords.YAxis = Result.YAxis;
        m_Coords.ZAxis = Result.ZAxis;
    }
    return &m_Coords.XAxis;
}
