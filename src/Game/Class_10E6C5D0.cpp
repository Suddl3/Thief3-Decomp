// Game/Class_10E6C5D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BF84.h"
#include "Game/Class_10E6C5D0.h"
#include "Game/cTriggerSoundSchemaParam.h"
#include "Game/cString.h"

class Class_10E6C5D0_Unknown04
{
public:
    virtual ~Class_10E6C5D0_Unknown04();
};

extern const char DAT_10e6c608[];

extern const char DAT_10e6c100[];

// FUNCTION: 0x10A8A4C0 ??1Class_10E6C5D0@@UAE@XZ
Class_10E6C5D0::~Class_10E6C5D0()
{
    delete m_Next;
}

// FUNCTION: 0x10A8A510 ?FUN_10a8a510@Class_10E6C5D0@@UAEHHPAV1@@Z
int Class_10E6C5D0::FUN_10a8a510(int p1, Class_10E6C5D0* p2)
{
    if (!m_Next)
        return 0;
    return m_Next->FUN_10a8a510(p1, p2->m_Next);
}

// FUNCTION: 0x10A8A530 ?FUN_10a8a530@Class_10E6C5D0@@UAEHH@Z
int Class_10E6C5D0::FUN_10a8a530(int p1)
{
    if (!m_Next)
        return 0;
    return m_Next->FUN_10a8a530(p1);
}

// FUNCTION: 0x10A8A550 ?FUN_10a8a550@Class_10E6C5D0@@UAEXXZ
void Class_10E6C5D0::FUN_10a8a550()
{
    if (m_Next)
        m_Next->FUN_10a8a550();
}

// FUNCTION: 0x10A8A560 ?FUN_10a8a560@Class_10E6C5D0@@UAEXXZ
void Class_10E6C5D0::FUN_10a8a560()
{
    if (m_Next)
        m_Next->FUN_10a8a560();
}

// FUNCTION: 0x10A8A570 ?FUN_10a8a570@Class_10E6C5D0@@UAEHXZ
int Class_10E6C5D0::FUN_10a8a570()
{
    if (!m_Next)
        return 1;
    return m_Next->FUN_10a8a570();
}

// FUNCTION: 0x10A8A590 ?FUN_10a8a590@Class_10E6C5D0@@UAEHXZ
int Class_10E6C5D0::FUN_10a8a590()
{
    if (!m_Next)
        return 0;
    return m_Next->FUN_10a8a590();
}

// FUNCTION: 0x10A8A670 ?FUN_10a8a670@Class_10E6C5D0@@UAE?AVcString@@XZ
cString Class_10E6C5D0::FUN_10a8a670()
{
    if (!m_Next)
        return cString(DAT_10e6c608);
    return m_Next->FUN_10a8a670();
}

// FUNCTION: 0x10A8A6B0 ?FUN_10a8a6b0@Class_10E6C5D0@@UAE?AVcString@@XZ
cString Class_10E6C5D0::FUN_10a8a6b0()
{
    if (!m_Next)
        return cString(DAT_10e6c100);
    return m_Next->FUN_10a8a6b0();
}
