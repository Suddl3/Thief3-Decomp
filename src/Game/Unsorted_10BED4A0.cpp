// Game/Unsorted_10BED4A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10BC4160.h"
#include "Game/Struct_10FF66B0.h"
#include "Game/Class_10BED900.h"

extern Struct_10FF66B0 DAT_10ff66b0[];

extern cString DAT_10ff7060;

bool FUN_1090f010(const int* A, const int* B);

class Class_10BF79D0
{
public:
    int FUN_10bf79d0();
};

// FUNCTION: 0x10BED900 ?FUN_10bed900@Class_10BED900@@QAEHPBVcString@@@Z
int Class_10BED900::FUN_10bed900(const cString* Name)
{
    if (Name->IsEmpty())
    {
        Class_10BF79D0* Obj = (Class_10BF79D0*)FUN_10bc4160();
        return Obj->FUN_10bf79d0();
    }
    int Index = 0;
    Struct_10FF66B0* Entry = DAT_10ff66b0;
    do
    {
        if (FUN_1090f010((const int*)Entry, (const int*)Name))
            return Index;
        Entry++;
        Index++;
    } while ((int)Entry < (int)&DAT_10ff7060);
    Class_10BF79D0* Obj = (Class_10BF79D0*)FUN_10bc4160();
    return Obj->FUN_10bf79d0();
}
