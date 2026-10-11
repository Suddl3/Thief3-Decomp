// Game/Unsorted_10BB8650_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class AAIPawn;

class Class_10B9CAC0
{
public:
    void FUN_10b9e430();
};

struct Struct_10B9BCA0
{
    char Unknown00[8];
    Class_10B9CAC0* Unknown08;
};

class Class_10B9BCA0
{
public:
    char Unknown00[0x118];
    Struct_10B9BCA0* Unknown118;
};

Class_10B9BCA0* FUN_10baa660(AAIPawn* Pawn);

class Class_10C7D570
{
public:
    void* FUN_10c7d570();
};

class Class_10BB8650
{
public:
    bool FUN_10bb8650(float Value);

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x27C];
    float Unknown288;
};

// FUNCTION: 0x10BB8650 ?FUN_10bb8650@Class_10BB8650@@QAE_NM@Z
bool Class_10BB8650::FUN_10bb8650(float Value)
{
    Unknown288 = Value;
    if (Value <= 0.0f)
    {
        Class_10B9BCA0* Controller = FUN_10baa660((AAIPawn*)Unknown08->FUN_10c7d570());
        Class_10B9CAC0* Target;
        if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
            Target = Controller->Unknown118->Unknown08;
        else
            Target = 0;
        Target->FUN_10b9e430();
        return true;
    }
    return false;
}
