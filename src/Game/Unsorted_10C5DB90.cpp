// Game/Unsorted_10C5DB90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

extern const char DAT_10e47660[];

class Class_10C5E1F0_Unknown48
{
public:
    const char* Unknown00;
    char Unknown04[0x70];
};

class Class_10C5E1F0
{
public:
    int FUN_10c5e1f0(const char** Name);

    char Unknown00[0x40];
    int Unknown40;
    char Unknown44[0x4];
    Class_10C5E1F0_Unknown48* Unknown48;
};

// FUNCTION: 0x10C5E1F0 ?FUN_10c5e1f0@Class_10C5E1F0@@QAEHPAPBD@Z
int Class_10C5E1F0::FUN_10c5e1f0(const char** Name)
{
    for (int i = 0; i < Unknown40; i++)
    {
        const char* Raw = *Name;
        const char* Want = Raw ? Raw : DAT_10e47660;
        const char* Have = Unknown48[i].Unknown00;
        if (!Have)
            Have = DAT_10e47660;
        if (strcmp(Have, Want) == 0)
            return i;
    }
    return -1;
}
