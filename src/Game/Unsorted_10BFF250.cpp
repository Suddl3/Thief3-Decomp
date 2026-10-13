// Game/Unsorted_10BFF250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFF600.h"
#include "Game/Class_10C16580.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10DBBAE0.h"
#include "Game/FArchive.h"
#include "Game/Class_10BAA9D0.h"
#include "Game/Class_10E97AD4.h"

class Class_10978090
{
public:
    int FUN_10978090();
};

class Class_10BFF280
{
public:
    int FUN_10bff280();

    char Unknown00[8];
    Class_10978090 Unknown08;
};

// FUNCTION: 0x10BFF280 ?FUN_10bff280@Class_10BFF280@@QAEHXZ
int Class_10BFF280::FUN_10bff280()
{
    int Result = Unknown08.FUN_10978090();
    if (!Result)
        return Result;
    return Unknown08.FUN_10978090();
}
