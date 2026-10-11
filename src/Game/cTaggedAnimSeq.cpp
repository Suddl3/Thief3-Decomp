// Game/cTaggedAnimSeq.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E65558.h"
#include "Game/Class_109081E0.h"

extern const char DAT_10e5027c[];

class cTaggedAnimSeq : public Class_10E65558
{
public:
    cTaggedAnimSeq();
    virtual ~cTaggedAnimSeq();

    Class_109081E0 m_Name;
};

// FUNCTION: 0x10A1EDE0 ??0cTaggedAnimSeq@@QAE@XZ
cTaggedAnimSeq::cTaggedAnimSeq()
{
    GetAllocator()->Virtual8(0, 0);
    m_Name.FUN_1090a590(DAT_10e5027c);
    GetAllocator()->Virtual9();
}
