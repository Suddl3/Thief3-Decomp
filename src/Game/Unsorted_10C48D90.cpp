// Game/Unsorted_10C48D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdio.h>
#include "Game/Class_10E9BB8C.h"
#include "Game/Struct_10C49030.h"

// FUNCTION: 0x10C48F00 ?FUN_10c48f00@Class_10E9BB8C@@UAEPAV1@PADI@Z
Class_10E9BB8C* Class_10E9BB8C::FUN_10c48f00(char* Buffer, size_t Size)
{
    if (Unknown58)
    {
        int Mode = (Buffer == 0 && Size == 0) ? _IONBF : _IOFBF;
        if (setvbuf(Unknown58, Buffer, Mode, Size) == 0)
            return this;
    }
    return 0;
}
