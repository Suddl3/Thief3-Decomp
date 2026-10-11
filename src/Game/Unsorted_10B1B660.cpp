// Game/Unsorted_10B1B660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B25010_Member.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10B1B8A0_List.h"

class Class_10B1B8A0_Arg;

class FArchive;

// Game/Class_10971570.h copied whole, with the field the function reads at 0x24 added.
class Class_10971570
{
public:
    int FUN_10971570(int Id, bool* Out);

    char Pad00[0x1];
    char Pad01[0x23];
    int Unknown24;
};

class Class_109E3D60_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
};

// Game/Class_10B1B8A0.h copied whole, with the four methods this function calls added.
class Class_10B1B8A0
{
public:
    Class_10B1B8A0();
    ~Class_10B1B8A0();

    void FUN_10b1a400(FArchive& Ar);
    void FUN_10b1a840();
    void FUN_10b1aba0();
    void FUN_10b1b220(int p1, int p2);
    void FUN_10b1b8a0(Class_10B1B8A0_Arg* p1);
    void FUN_10b1abd0(int A);
    void FUN_10b1ac30();
    void FUN_10b1b310();
    void FUN_10b1b8a0(int A);
    bool FUN_10b1b7f0(int A);
    bool FUN_10b1a920(int A);
    void FUN_10b1afd0(int A, int B);
    void FUN_10b19e30(unsigned char A, int B);
    void FUN_10b1a5c0(unsigned char A, int B);

    char Unknown00[4];
    Struct_10B1B8A0_List ListA;
    Struct_10B1B8A0_List ListB;
    Class_10B25010_Member Unknown1C;
    char Pad28[0x3c];
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B1B7F0 ?FUN_10b1b7f0@Class_10B1B8A0@@QAE_NH@Z
bool Class_10B1B8A0::FUN_10b1b7f0(int A)
{
    unsigned char Kind = 0;
    ((Class_10971570*)A)->FUN_10971570(0x20000b5, (bool*)&Kind);
    if (Kind == 6)
    {
        if (!FUN_10b1a920(A))
            return false;
    }
    else
    {
        if (Kind != 4 && Kind != 7 && Kind != 3)
        {
            FUN_10b1afd0(((Class_10971570*)A)->Unknown24, 1);
            DAT_10f35dec->Unknown28->Virtual2(A);
            return true;
        }
        switch (Kind)
        {
        case 3:
            FUN_10b1a5c0(Kind, A);
            break;
        case 4:
        case 7:
            FUN_10b19e30(Kind, A);
            break;
        }
        DAT_10f35dec->Unknown28->Virtual2(A);
    }
    return true;
}
