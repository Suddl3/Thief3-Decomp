// Game/Class_10E5D380.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D380.h"
#include "Game/Class_10F352D8.h"

extern void* DAT_10f3986c;

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    Class_109081E0(const char* In);
    Class_109081E0& operator=(const Class_109081E0& In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

extern Class_10F352D8* DAT_10f352d8;

// FUNCTION: 0x10A0E150 ?FUN_10a0e150@Class_10E5D380@@UAEXPBD@Z
void Class_10E5D380::FUN_10a0e150(const char* Name)
{
    Virtual2();
    DAT_10f352d8->Virtual15(FUN_10a0e070(Name));
}

// FUNCTION: 0x10A0E1D0 ?FUN_10a0e1d0@@YAXXZ
void FUN_10a0e1d0()
{
    delete DAT_10f3986c;
    DAT_10f3986c = 0;
}
