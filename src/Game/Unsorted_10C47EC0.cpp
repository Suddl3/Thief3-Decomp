// Game/Unsorted_10C47EC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9BB5C.h"
#include "Game/Config.h"

class Class_10C47FA0_Field04
{
public:
    virtual void Virtual0(int B);
};

extern void* DAT_10e9bb4c[];

class cCadenceFactory
{
public:
    cCadenceFactory* Initialize(bool A);

    void** Unknown00;
    bool m_bUseLoader;
    int MaxLoadedSchemas;
    int m_NumLoadedSchemas;
};

class Class_10C47F80
{
public:
    virtual ~Class_10C47F80();
};

extern Class_10C47F80* DAT_10ff70b8;

// FUNCTION: 0x10C47F30 ?Initialize@cCadenceFactory@@QAEPAV1@_N@Z
cCadenceFactory* cCadenceFactory::Initialize(bool A)
{
    Unknown00 = DAT_10e9bb4c;
    m_bUseLoader = A;
    m_NumLoadedSchemas = 0;
    if (A)
    {
        MaxLoadedSchemas = 500;
        Config::Instance()->FUN_10910a20("Cadence", "MaxLoadedSchemas", &MaxLoadedSchemas, 0);
    }
    else
    {
        MaxLoadedSchemas = -1;
    }
    return this;
}

// FUNCTION: 0x10C47F80 ?FUN_10c47f80@@YAXXZ
void FUN_10c47f80()
{
    delete DAT_10ff70b8;
    DAT_10ff70b8 = 0;
}

// FUNCTION: 0x10C47FA0 ?FUN_10c47fa0@Class_10E9BB5C@@UAE_NHH@Z
bool Class_10E9BB5C::FUN_10c47fa0(int A, int B)
{
    Unknown04->Virtual0(B);
    return true;
}
