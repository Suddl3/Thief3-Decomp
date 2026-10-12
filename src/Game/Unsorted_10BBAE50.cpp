// Game/Unsorted_10BBAE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10978090.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10BFF280.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_1098E330.h"

class Class_10DBBAE0;

class FVector;

// Game/Class_10BFF460.h has no destructor; delete calls FUN_10bb7bf0 before operator delete.
class Class_10BFF460 : public Class_10BFF240
{
public:
    ~Class_10BFF460();
    bool FUN_10bff460();
    bool FUN_10bff330();
    FVector FUN_10bff360();
    void MeasureDistance();
    void* FUN_10bff2a0();

    char Pad01[0x3];
    Class_10DBBAE0* Unknown04;
    Class_10978090 m_Pawn;
    char Pad09[0x3];
};

// Game/Class_10BB9FC0.h has padding where the fields at 0x210 and 0x220 are; this copy names them.
class Class_10BB9FC0
{
public:
    void FUN_10bb9e90();
    void FUN_10bb9fc0();
    void FUN_10bb9ff0();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x204];
    Class_10BFF460* Unknown210;
    char Unknown214[0xc];
    cIntArray Unknown220;
    char Unknown22C[0x58];
    int Unknown284;
};

// Game/Class_10BBB410.h copied whole, with the field at 0x2cc past the base.
class Class_10BBB410 : public Class_10BB9FC0
{
public:
    void FUN_10bb9f60(int A, int B);
    Class_10BFF460* GetCurrent();
    void CancelCurrent();
    void RemoveItem(int Item);
    int FUN_10bbb730();

    char Unknown288[0x44];
    int Unknown2cc;
};

// FUNCTION: 0x10BBB330 ?CancelCurrent@Class_10BBB410@@QAEXXZ
void Class_10BBB410::CancelCurrent()
{
    if (Unknown210 != 0)
    {
        if (!Unknown210->FUN_10bff460())
        {
            if (((Class_10BFF280*)Unknown210)->FUN_10bff280() != 0)
            {
                if (((Class_10BFF280*)Unknown210)->FUN_10bff280() == Unknown2cc)
                    Unknown2cc = 0;
                int Key = 0;
                if (((Class_1098E330*)((Class_10BFF280*)Unknown210)->FUN_10bff280())->FUN_1098e330(0x2047b, &Key) && Key != 0)
                {
                    if (Key == (int)Unknown08->FUN_10c7d570())
                    {
                        int Value = (int)Unknown210->FUN_10bff2a0();
                        Unknown220.Add(&Value);
                        Unknown210 = 0;
                    }
                }
            }
        }
    }
    if (Unknown210 != 0)
    {
        delete Unknown210;
        Unknown210 = 0;
    }
}
