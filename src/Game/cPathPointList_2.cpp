// Game/cPathPointList_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/cIntArray.h"
#include "AICore/AICoreClasses.h"

class Class_10BFF8C0_Param
{
public:
    char Unknown00[0x2C];
    AAIPathPoint** Unknown2C;
    int Unknown30;
};

class cPathPointList
{
public:
    virtual void Virtual0();
    virtual void AddPathPoints(Class_10BFF8C0_Param* Param);

    cIntArray Unknown04;
    cIntArray m_PathPoints;
};

// FUNCTION: 0x10BFF8C0 ?AddPathPoints@cPathPointList@@UAEXPAVClass_10BFF8C0_Param@@@Z
void cPathPointList::AddPathPoints(Class_10BFF8C0_Param* Param)
{
    if (Param)
    {
        for (int i = 0; i < Param->Unknown30; i++)
        {
            AAIPathPoint* Point = Param->Unknown2C[i];
            if (Point && Point->IsA(AAIPathPoint::StaticClass()))
            {
                cIntArray* List = &m_PathPoints;
                int Index = List->Count;
                List->SetCount(Index + 1);
                List->Data[Index] = (int)Point;
                if (Point->Virtual96() == 1)
                {
                    List = &Unknown04;
                    Index = List->Count;
                    List->SetCount(Index + 1);
                    List->Data[Index] = (int)Point;
                }
            }
        }
    }
}
