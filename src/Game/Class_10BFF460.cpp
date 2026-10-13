// Game/Class_10BFF460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFF600.h"
#include "Game/Class_10C16580.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10DBBAE0.h"
#include "Game/FArchive.h"
#include "Game/Class_10BAA9D0.h"
#include "Game/Class_10E97AD4.h"

class Class_10978090
{
public:
    int FUN_10978090();
};

struct Struct_10BFF250_A
{
    char Unknown00[0x2C];
    int Unknown2C;
};

struct Struct_10BFF250_B
{
    char Unknown00[0x2C];
    int Unknown2C;
};

void Distance(int* A, int* B);

class Class_10BFF460
{
public:
    void MeasureDistance();

    char Unknown00[4];
    Class_10DBBAE0* Unknown04;
    Class_10978090 m_Pawn;
};

// FUNCTION: 0x10BFF250 ?MeasureDistance@Class_10BFF460@@QAEXXZ
void Class_10BFF460::MeasureDistance()
{
    Class_10BAA9D0* P = Unknown04->FUN_10dbbae0();
    Distance(&((Struct_10BFF250_A*)P->FUN_10c7d570())->Unknown2C,
                 &((Struct_10BFF250_B*)m_Pawn.FUN_10978090())->Unknown2C);
}
