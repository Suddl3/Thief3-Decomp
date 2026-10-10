// Game/Unsorted_10BAA930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109BC840
{
public:
    int FUN_109b5860(int A);
};

class Class_10BAA580
{
public:
    Class_109BC840* FUN_10baa580();
    int* FUN_10babdd0(int* Out);
    int FUN_10babe80();

    char Unknown00[0x8C];
    int Unknown8C;
    char Unknown90[0x24];
    bool UnknownB4;
};

// FUNCTION: 0x10BABE80 ?FUN_10babe80@Class_10BAA580@@QAEHXZ
int Class_10BAA580::FUN_10babe80()
{
    Class_109BC840* Obj = FUN_10baa580();
    if (!Obj)
        return -1;
    if (!UnknownB4)
    {
        int Value;
        int* Ptr = FUN_10babdd0(&Value);
        Unknown8C = Obj->FUN_109b5860(*Ptr);
        UnknownB4 = true;
    }
    return Unknown8C;
}
