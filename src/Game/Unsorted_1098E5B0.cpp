// Game/Unsorted_1098E5B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10993EC0.h"
#include "Game/Class_10E70A50.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

class AMissingArch : public Class_10993EC0
{
public:
    AMissingArch();
};

class AObjSysTest : public Class_10993EC0
{
public:
    AObjSysTest();
};

class AObjSysTestChild : public Class_10993EC0
{
public:
    AObjSysTestChild();
};

// FUNCTION: 0x1098E5B0 ?ConstructAMissingArch@@YAXPAX@Z
void ConstructAMissingArch(void* Memory)
{
    new ((EInternal*)Memory) AMissingArch();
}

// FUNCTION: 0x1098E5C0 ?ConstructAObjSysTest@@YAXPAX@Z
void ConstructAObjSysTest(void* Memory)
{
    new ((EInternal*)Memory) AObjSysTest();
}

// FUNCTION: 0x1098E5D0 ?ConstructAObjSysTestChild@@YAXPAX@Z
void ConstructAObjSysTestChild(void* Memory)
{
    new ((EInternal*)Memory) AObjSysTestChild();
}
