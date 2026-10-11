// Game/cT3InventoryWindow_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B78780.h"

extern void* DAT_10e84088[];

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class cT3InventoryWindow : public Class_10B78780
{
public:
    cT3InventoryWindow* Initialize();

    FArray Unknown190;
    FArray Unknown19C;
    FArray Unknown1A8;
    FArray Unknown1B4;
    FArray Unknown1C0;
    FArray Unknown1CC;
    bool Unknown1D8;
    int Unknown1DC;
};

// FUNCTION: 0x10B61E10 ?Initialize@cT3InventoryWindow@@QAEPAV1@XZ
cT3InventoryWindow* cT3InventoryWindow::Initialize()
{
    FUN_10b78780();
    Unknown00 = DAT_10e84088;
    Unknown190.FArray::FArray();
    Unknown19C.FArray::FArray();
    Unknown1A8.FArray::FArray();
    Unknown1B4.FArray::FArray();
    Unknown1C0.FArray::FArray();
    Unknown1CC.FArray::FArray();
    Unknown1D8 = false;
    Unknown1DC = 0;
    return this;
}
