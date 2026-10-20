// Game/Unsorted_10924FC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_1092D990;

struct Entry_10925410
{
    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[0x8];
    int Unknown1C;
    char Unknown20[0x8];
    int Unknown28;
    char Unknown2C[0x18];
};

class Class_10925410
{
public:
    int FUN_10925410(int Index);

    char Unknown00[0x8];
    int Unknown08;
    char Unknown0C[0x30];
    int Unknown3C;
    unsigned char Unknown40;
    char Pad41[0x3];
    int Unknown44;
    int Unknown48;
    char Unknown4C[0x1C];
    int Unknown68;
    char Unknown6C[0x20];
    int Unknown8C;
    char Unknown90[0x8];
    int Unknown98;
    char Unknown9C[0x40];
    int UnknownDC;
    char UnknownE0[0x4];
    Entry_10925410* UnknownE4;
};

class Class_10924E80 : public Class_10925410
{
public:
    void FUN_10925db0(int Item);
    void FUN_10924e80(int A);
    void FUN_10925060();
    void FUN_10925230();
    void FUN_10926f20(int A, int B);
    void FUN_10925290(int A, int B);
    void RemoveItem(void* Item);
    void FUN_109251c0(float Value);
    bool FUN_10925c60(void* A, bool B);

    char Pad01[0xbb];
    char Pad1A3[0x1];
    cIntArray m_Items;
    char PadC8[0x10];
    Class_1092D990* Unknown0D8;
};

// FUNCTION: 0x10925060 ?FUN_10925060@Class_10924E80@@QAEXXZ
void Class_10924E80::FUN_10925060()
{
    Unknown3C = 0;
    Unknown44 = 0;
    Unknown08 = 0;
    Unknown48 = 0;
    Unknown68 = 0;
    Unknown8C = 0;
    Unknown98 = 0;
    // the item count, taken by address so the load stays where the target has it
    int* Count = &UnknownDC;
    for (int i = 0; i < *Count; i++)
    {
        Entry_10925410* Entry = &UnknownE4[i];
        Entry->Unknown10 = 0;
        Entry->Unknown1C = 0;
        Entry->Unknown28 = 0;
    }
}
