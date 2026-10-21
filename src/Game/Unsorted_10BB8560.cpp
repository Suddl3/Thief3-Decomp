// Game/Unsorted_10BB8560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BAC050
{
public:
    bool FUN_10bac050(int A);
};

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

double GetTimeSeconds();

class Class_10BB8560
{
public:
    bool FUN_10bb8560();

    char Unknown00[8];
    Class_10BAC050* Unknown08;
    char Unknown0C[0x2E0];
    float Unknown2EC;
};

// FUNCTION: 0x10BB8560 ?FUN_10bb8560@Class_10BB8560@@QAE_NXZ
bool Class_10BB8560::FUN_10bb8560()
{
    Class_10BAC050* Obj = Unknown08;
    if (Obj->FUN_10bac050(DAT_10f35dec->Unknown08))
        return true;
    if (GetTimeSeconds() - Unknown2EC > 0.5)
    {
        Unknown2EC = 0.0f;
        return true;
    }
    return false;
}
