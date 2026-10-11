// Game/Unsorted_10A37F80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A38090.h"
#include "Game/Class_10EC1058.h"

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();

    char* Unknown00;
};

class Class_10A38340
{
public:
    Class_10A38340();

    Class_109081E0 Unknown00;
    Class_10EC1058 Unknown04;
    Class_10A38090 Unknown15C;
};

extern const char DAT_10e47660[];

int FUN_10af36e0(const char* A, const char* B);

class Class_10A382D0_Item
{
public:
    const char* Unknown00;
};

class Class_10A382D0
{
public:
    Class_10A382D0_Item* FUN_10a382d0(const char** Name);

    char Unknown00[0x590];
    int Unknown590;
    char Unknown594[4];
    Class_10A382D0_Item** Unknown598;
};

// FUNCTION: 0x10A382D0 ?FUN_10a382d0@Class_10A382D0@@QAEPAVClass_10A382D0_Item@@PAPBD@Z
Class_10A382D0_Item* Class_10A382D0::FUN_10a382d0(const char** Name)
{
    for (int i = 0; i < Unknown590; i++)
    {
        Class_10A382D0_Item* Item = Unknown598[i];
        const char* Want = *Name;
        if (!Want)
            Want = DAT_10e47660;
        const char* Have = Item->Unknown00;
        if (!Have)
            Have = DAT_10e47660;
        if (!FUN_10af36e0(Have, Want))
            return Item;
    }
    return 0;
}

// FUNCTION: 0x10A38340 ??0Class_10A38340@@QAE@XZ
Class_10A38340::Class_10A38340()
{
}
