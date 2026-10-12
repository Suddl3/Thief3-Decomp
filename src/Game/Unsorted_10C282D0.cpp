// Game/Unsorted_10C282D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C28570.h"
#include "Game/Class_10E98C8C.h"

class Class_10C28B70
{
public:
    ~Class_10C28B70();

    Class_10E98C8C Unknown00;
    Class_10E98C8C Unknown08;
};

extern float DAT_10eafbdc;

double GetTimeSeconds();

// FUNCTION: 0x10C28570 ?Update@Class_10C28570@@QAEXXZ
void Class_10C28570::Update()
{
    if (m_StartTime != DAT_10eafbdc)
    {
        double EndTime = m_StartTime + m_Duration;
        if (GetTimeSeconds() > EndTime)
        {
            FUN_10c283f0();
            m_StartTime = 0;
        }
    }
}

// FUNCTION: 0x10C28B70 ??1Class_10C28B70@@QAE@XZ
Class_10C28B70::~Class_10C28B70()
{
}
