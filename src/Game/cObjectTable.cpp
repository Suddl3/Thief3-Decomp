// Game/cObjectTable.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class cObjectTable
{
public:
    virtual ~cObjectTable();
    void FUN_10ba04c0();

    int Unknown04;
    int Unknown08;
    cIntArray Unknown0C;
    cIntArray Unknown18;
    cIntArray Unknown24;
};

// FUNCTION: 0x10BA0790 ??1cObjectTable@@UAE@XZ
cObjectTable::~cObjectTable()
{
    Unknown04 = 0;
    Unknown08 = 0;
    FUN_10ba04c0();
}
