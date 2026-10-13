// Game/cPtrArray_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class cPtrArray
{
public:
    virtual ~cPtrArray();

    cPtrArray();

    void Clear();

    cIntArray Unknown04;
    cIntArray Unknown10;
};

// FUNCTION: 0x10A68EF0 ??1cPtrArray@@UAE@XZ
cPtrArray::~cPtrArray()
{
    Clear();
}
