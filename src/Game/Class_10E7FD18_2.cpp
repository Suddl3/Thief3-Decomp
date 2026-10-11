// Game/Class_10E7FD18_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10BFBD70.h"

// Game/Class_10E67FD0.h makes the base 0x150 bytes, past this class's fields at 0x128: the base is declared here by its vtable only.
class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

struct Struct_10C08690;

class Class_10E7FD18 : public Class_10E67FD0
{
public:
    virtual ~Class_10E7FD18();
    void FUN_10b550c0();

    char Unknown04[0x124];
    Class_109081E0 Unknown128;
    Class_10BFBD70 Unknown12C;
};

// FUNCTION: 0x10B55110 ??1Class_10E7FD18@@UAE@XZ
Class_10E7FD18::~Class_10E7FD18()
{
    FUN_10b550c0();
}
