// Game/cPathPointList.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

// Copied from include/Game/cPathPointList.h with the virtual destructor added
// and the three cIntArray members the destructor tears down.
class cPathPointList
{
public:
    cPathPointList* Init();
    virtual ~cPathPointList();

    cIntArray Unknown04;
    cIntArray m_PathPoints;
    cIntArray Unknown1C;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
};

// FUNCTION: 0x10BFF760 ??1cPathPointList@@UAE@XZ
cPathPointList::~cPathPointList()
{
}

// FUNCTION: 0x10BFF8A0 ??_GcPathPointList@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10BFF760's definition in this unit.
