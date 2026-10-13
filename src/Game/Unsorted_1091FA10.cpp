// Game/Unsorted_1091FA10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109200A0_Unknown00;

class Class_1094B570;

struct Struct_1094B570_Unknown128;

struct Struct_109200A0;

class Class_109200A0_Unknown00
{
public:
    char Unknown00[0x49];
    bool Unknown49;
    char Unknown4A[0xE];
    unsigned char Unknown58;
};

struct Struct_1094B570_Unknown128
{
    Class_109200A0_Unknown00* Unknown00;
    bool Unknown04;
    char Unknown05[3];
};

class Class_1094B570
{
public:
    bool FUN_1094b570(Class_109200A0_Unknown00* Obj);

    char Unknown00[0x58];
    unsigned char Unknown58;
    char Unknown59[0xC7];
    int Unknown120;
    char Unknown124[4];
    Struct_1094B570_Unknown128* Unknown128;
};

struct Struct_109200A0
{
    char Unknown00[0x74];
    int Unknown74;
    char Unknown78[4];
    Class_1094B570** Unknown7C;
};

// FUNCTION: 0x109200A0 ?FUN_109200a0@@YGXPAUStruct_109200A0@@H@Z
void __stdcall FUN_109200a0(Struct_109200A0* Param, int Param2)
{
    for (int i = 0; i < Param->Unknown74; i++)
    {
        Class_1094B570* Item = Param->Unknown7C[i];
        if (Item->Unknown58 & 0x10)
        {
            for (int j = 0; j < Item->Unknown120; j++)
            {
                Class_109200A0_Unknown00* Obj = Item->Unknown128[j].Unknown00;
                if (Obj->Unknown58 & 0x10)
                {
                    if (Item->FUN_1094b570(Obj))
                    {
                        Item->Unknown128[j].Unknown04 = true;
                        Obj->Unknown49 = true;
                    }
                }
            }
        }
    }
}
