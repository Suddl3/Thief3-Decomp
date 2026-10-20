// Game/Unsorted_10A25290.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include <string.h>

class Class_1092AC20_Unknown30;

class Class_1090B040
{
public:
    cString FUN_1090b040(int A);
    cString FUN_10915c70(int Count);

    cString Unknown00;
    char Pad04[0x14];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    Class_1092AC20_Unknown30* Unknown30;
    char Pad34[0x8];
    unsigned char Unknown3C;
    char Pad3D[0x3];
};

// FUNCTION: 0x10A25580 ?FUN_10a25580@@YA?AVcString@@PAVClass_1090B040@@@Z
cString FUN_10a25580(Class_1090B040* In)
{
    int Open;
    if (In->Unknown00.Unknown00)
    {
        const char* Found = strchr(In->Unknown00.Unknown00, '<');
        Open = Found ? (int)(Found - In->Unknown00.Unknown00) : -1;
    }
    else
        Open = -1;

    int Close;
    if (In->Unknown00.Unknown00)
    {
        const char* Found = strchr(In->Unknown00.Unknown00, '>');
        Close = Found ? (int)(Found - In->Unknown00.Unknown00) : -1;
    }
    else
        Close = -1;

    int End = Close + 1;
    if (Open == -1)
        return cString(DAT_10e47660);

    if (End == 0 && In->Unknown00.Unknown00)
        End = ((int*)In->Unknown00.Unknown00)[-1];

    cString Head = In->FUN_1090b040(End);

    int Length = (int)In->Unknown00.Unknown00;
    if (In->Unknown00.Unknown00)
        Length = ((int*)In->Unknown00.Unknown00)[-1];
    In->Unknown00.operator=(In->FUN_10915c70(Length - End));

    return cString((const Class_1090A780&)Head);
}
