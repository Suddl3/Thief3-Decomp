// Game/Unsorted_10B68110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B68170 {
public:
    void FUN_10b68170();
};

class Class_10ABF100;

Class_10ABF100* FUN_10abf0d0();

struct Struct_10ABF1F0_Item
{
    char Unknown00[4];
    int Unknown04;
    char Unknown08[0x18];
    bool Unknown20;
    char Unknown21[7];
    bool Unknown28;
    char Unknown29[0xB];
};

struct Struct_10ABF1F0
{
    Struct_10ABF1F0_Item* Data;
    int Count;
};

class Class_10ABF100
{
public:
    Struct_10ABF1F0* FUN_10abf1f0();
    void FUN_10abf200(int A, char B);
};

struct Struct_10B68360
{
    char Unknown00[0x1C];
    bool Unknown1C;
    char Unknown1D[0x13];
};

class APlayerPawn
{
public:
    char Unknown00[0x208];
    Struct_10B68360* Unknown208;
    int Unknown20C;
};

struct Struct_10AA3520
{
    char Unknown00[8];
    APlayerPawn* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

APlayerPawn* FUN_10983ca0(APlayerPawn* A);

// FUNCTION: 0x10B68110 ?FUN_10b68110@@YAXXZ
void FUN_10b68110()
{
    Struct_10ABF1F0* List = FUN_10abf0d0()->FUN_10abf1f0();
    for (int i = 0; i < List->Count; i++)
    {
        if (!List->Data[i].Unknown28 && List->Data[i].Unknown20)
            FUN_10abf0d0()->FUN_10abf200(List->Data[i].Unknown04, 4);
    }
}

// FUNCTION: 0x10B68360 ?FUN_10b68360@@YAXXZ
void FUN_10b68360()
{
    if (DAT_10f35dec && DAT_10f35dec->Unknown08)
    {
        APlayerPawn* Pawn = FUN_10983ca0(DAT_10f35dec->Unknown08);
        if (Pawn)
        {
            for (int i = 0; i < Pawn->Unknown20C; i++)
            {
                if (!Pawn->Unknown208[i].Unknown1C)
                    Pawn->Unknown208[i].Unknown1C = true;
            }
        }
    }
}

// FUNCTION: 0x10B68E60 ?FUN_10b68e60@@YAXPAVClass_10B68170@@@Z
void FUN_10b68e60(Class_10B68170* p1)
{
    p1->FUN_10b68170();
}
