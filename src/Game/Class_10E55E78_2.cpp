// Game/Class_10E55E78_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AF8A50.h"

class Class_10E70A50
{
public:
    Class_10E70A50();
    ~Class_10E70A50();

    virtual void Virtual0();

    char Unknown04[0x28];
};

class Class_10E55E78 : public Class_10E70A50
{
public:
    Class_10E55E78();

    virtual void Virtual0();

    INT m_LinkFlavor;
    INT m_pAssociatedLink;
    Class_10AF8A50 m_LinkComment;
    Class_10AF8A50 m_name;
    FName m_GroupName;
};

// FUNCTION: 0x1099F220 ??0Class_10E55E78@@QAE@XZ
Class_10E55E78::Class_10E55E78()
    : m_LinkFlavor(0), m_pAssociatedLink(0)
{
}
