// Game/cPositionList_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10C37D30.h"
#include "Game/Struct_10C39220.h"

class Class_10C39D90_Unknown48;

void FUN_10c37cb0(void* A, Struct_10C05A80* B, int C, int D, int E, bool F);

bool FUN_10c37d30(void* A, int B, int C, float D, float E, int F, int G, Struct_10C37D30 H);

// Game/cPositionList.h copied whole, with FUN_10c39920 added.
class cPositionList
{
public:
    virtual ~cPositionList();

    bool GetCurrent(int A);
    int FUN_10c3c2c0(int A);
    bool FUN_10c38810();
    void MoveToCurrent();
    void FUN_10c39920(bool A, bool B);

    char Pad04[0x24];
    Struct_10C39220 m_FixedEntry;
    char Unknown34[0x14];
    Class_10C39D90_Unknown48* m_Mover;
    char Unknown4C[0x1C];
    bool Unknown68;
    char Unknown69[0x17];
    int Unknown80;
    int Unknown84;
    char Unknown88[0x18];
    int m_Count;
    char UnknownA4[4];
    Struct_10C39220* m_Entries;
    int m_Index;
    char UnknownB0[0x4C];
    int m_Mode;
};

// FUNCTION: 0x10C39920 ?FUN_10c39920@cPositionList@@QAEX_N0@Z
void cPositionList::FUN_10c39920(bool A, bool B)
{
    Struct_10C05A80 Pos;
    if (!GetCurrent((int)&Pos))
    {
        FUN_10c37d30(m_Mover, Unknown84, 1, -1.0f, 1.0f, 1, 1, Struct_10C37D30());
        return;
    }
    if (B)
        B = true;
    else if (A && (Unknown68 || FUN_10c38810()))
        B = true;
    else
        B = false;
    FUN_10c37cb0(m_Mover, &Pos, 0x15, Unknown80, 1, B);
}
