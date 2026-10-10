// Game/Unsorted_10BB7500.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10971570
{
public:
    int FUN_10971570(int Id, bool* Out);
};

class Class_10c7d570
{
public:
    void* FUN_10c7d570();

    char Unknown00[0x64];
    bool Unknown64;
};

class Class_10E9092C
{
public:
    bool FUN_10bb7500(int Value, bool Flag);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_10c7d570* Unknown0C;
};

// FUNCTION: 0x10BB7500 ?FUN_10bb7500@Class_10E9092C@@QAE_NH_N@Z
bool Class_10E9092C::FUN_10bb7500(int Value, bool Flag)
{
    if (Flag)
    {
        Unknown04 = 3;
        return Value == 3;
    }
    if (Unknown0C->Unknown64)
        return false;
    bool Local = false;
    int Result = ((Class_10971570*)Unknown0C->FUN_10c7d570())->FUN_10971570(0x42000543, &Local);
    if (Result != 0 && Value > Local)
    {
        Unknown04 = Local;
        return false;
    }
    Unknown04 = Value;
    return true;
}
