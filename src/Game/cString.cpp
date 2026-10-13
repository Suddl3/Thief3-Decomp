// Game/cString.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

class cString
{
public:
    cString(const char* In);

    void FUN_10907870(int Length, int Flag);

    char* Unknown00;
};

// FUNCTION: 0x109081E0 ??0cString@@QAE@PBD@Z
cString::cString(const char* In)
{
    Unknown00 = 0;
    if (In)
    {
        int Length = strlen(In);
        if (Length)
        {
            FUN_10907870(Length, 0);
            strcpy(Unknown00, In);
        }
    }
}
