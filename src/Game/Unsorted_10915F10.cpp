// Game/Unsorted_10915F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C49740.h"

class Class_109169E0
{
public:
    int FUN_109169e0(const Class_1090A780& Name);
    void FUN_109172f0(int B);
    void FUN_10916c00();

    char Pad00[0x1];
    char Pad01[0x7];
    Class_10C49740 Unknown08;
};

extern "C" char* _strupr(char* String);

// FUNCTION: 0x109169E0 ?FUN_109169e0@Class_109169E0@@QAEHABVClass_1090A780@@@Z
int Class_109169E0::FUN_109169e0(const Class_1090A780& Name)
{
    int Found = 0;
    {
        cString Local(*(const cString*)&Name);
        if (Local.Unknown00)
        {
            _strupr(Local.Unknown00);
        }
        Unknown08.FUN_10c49740((int*)&Local, (Entry_10C32C30**)&Found);
    }
    return Found;
}
