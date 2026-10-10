// Game/Unsorted_10C29020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10C29410
{
public:
    void FUN_10c29410(int Value);
    void FUN_10c29380(int Value);

    char Unknown00[4];
    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10C29410 ?FUN_10c29410@Class_10C29410@@QAEXH@Z
void Class_10C29410::FUN_10c29410(int Value)
{
    Class_10BFBD70* Member = &Unknown04;
    int Count = Member->Unknown00;
    Member->FUN_10bfbd70(Count + 1);
    ((int*)Member->Unknown08)[Count] = Value;
    for (int i = 0; i < Member->Unknown00; i++)
    {
        if (((int*)Member->Unknown08)[i] == Value)
        {
            if (i == 0)
                FUN_10c29380(Value);
            return;
        }
    }
}
