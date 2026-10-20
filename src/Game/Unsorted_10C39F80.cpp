// Game/Unsorted_10C39F80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10943600.h"
#include "Game/Class_10E98C8C.h"
#include "Game/Class_10BAF8A0.h"
#include "Game/cIntArray.h"

Class_10905A90_Member* GetAllocator();

class Class_10C24A60
{
public:
    void FUN_10c24a60();
};

class Class_10C223E0
{
public:
    void FUN_10c223e0();
};

class Class_10E9AF6C
{
public:
    virtual ~Class_10E9AF6C();
    virtual void FUN_10c39f80(void* A);
    void FUN_10c392e0();

    char Unknown04[0x48];
    Class_10BAF8A0 Unknown4C;
    char Unknown80[0x08];
    cIntArray Unknown88;
    Class_10943600 Unknown94;
    Class_10943600 UnknownA0;
    int UnknownAC;
    int UnknownB0;
    Class_10C24A60* UnknownB4;
    Class_10C223E0* UnknownB8;
    Class_10E98C8C UnknownBC;
    char UnknownC4[0x04];
    Class_10E98C8C UnknownC8;
};

// FUNCTION: 0x10C3A290 ??1Class_10E9AF6C@@UAE@XZ
Class_10E9AF6C::~Class_10E9AF6C()
{
    Class_10C24A60* Object = UnknownB4;
    if (Object)
    {
        Object->FUN_10c24a60();
        delete Object;
        UnknownB4 = 0;
    }
    Class_10C223E0* Other = UnknownB8;
    if (Other)
    {
        Other->FUN_10c223e0();
        delete Other;
        UnknownB8 = 0;
    }
    FUN_10c392e0();
}
