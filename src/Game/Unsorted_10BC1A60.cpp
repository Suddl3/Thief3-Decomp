// Game/Unsorted_10BC1A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10943600.h"

class FArchive;

class Class_10BBFD80
{
public:
    char Unknown00[0xc];
};

void SaveItemList(Class_10BBFD80* Items, FArchive& Ar);

void LoadItemList(int* Items, Class_10943600* Array, FArchive& Ar);

struct Struct_10BBEFD0
{
    char Pad00[0xc];
    int Unknown0C;
    char Pad10[0x4];
    int Unknown14;
    int Unknown18;
};

struct Struct_10BC1A60_Block
{
    Class_10BBFD80 Unknown00;
    Class_10BBFD80 Unknown0C;
    Class_10BBFD80 Unknown18;
    Class_10BBFD80 Unknown24;
    Class_10943600 Unknown30;
    Class_10943600 Unknown3C;
    Class_10943600 Unknown48;
    Class_10943600 Unknown54;
};

class Class_10BC1A60
{
public:
    void FUN_10bc1a60(Struct_10BBEFD0* A);

    Struct_10BC1A60_Block* Unknown00;
};

// FUNCTION: 0x10BC1A60 ?FUN_10bc1a60@Class_10BC1A60@@QAEXPAUStruct_10BBEFD0@@@Z
void Class_10BC1A60::FUN_10bc1a60(Struct_10BBEFD0* A)
{
    if (A->Unknown18 == 1)
    {
        SaveItemList(&Unknown00->Unknown00, *(FArchive*)A);
        SaveItemList(&Unknown00->Unknown0C, *(FArchive*)A);
        SaveItemList(&Unknown00->Unknown18, *(FArchive*)A);
        if (A->Unknown0C >= 0xd)
            SaveItemList(&Unknown00->Unknown24, *(FArchive*)A);
    }
    if (A->Unknown14 == 1)
    {
        LoadItemList((int*)&Unknown00->Unknown00, &Unknown00->Unknown30, *(FArchive*)A);
        LoadItemList((int*)&Unknown00->Unknown0C, &Unknown00->Unknown3C, *(FArchive*)A);
        LoadItemList((int*)&Unknown00->Unknown18, &Unknown00->Unknown48, *(FArchive*)A);
        if (A->Unknown0C >= 0xd)
            LoadItemList((int*)&Unknown00->Unknown24, &Unknown00->Unknown54, *(FArchive*)A);
    }
}
