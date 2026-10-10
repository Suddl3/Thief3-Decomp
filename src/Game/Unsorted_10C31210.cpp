// Game/Unsorted_10C31210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

struct Entry_10C32C30;

class Class_10C49740
{
public:
    bool FUN_10c49740(int* Key, Entry_10C32C30** Out);
};

struct Struct_10C32330
{
    int Unknown00;
    int* Unknown04;
    int* Unknown08;
};

class Class_10C32330 : public Class_10C49740
{
public:
    float FUN_10c32330(Struct_10C32330* Arg);
};

// FUNCTION: 0x10C32330 ?FUN_10c32330@Class_10C32330@@QAEMPAUStruct_10C32330@@@Z
float Class_10C32330::FUN_10c32330(Struct_10C32330* Arg)
{
    float Sum = 0.0f;
    for (int* P = Arg->Unknown04; P != Arg->Unknown08; P++)
    {
        float Value = 0.0f;
        float Item = !FUN_10c49740(P, (Entry_10C32C30**)&Value) ? DAT_10eafbdc : Value;
        Sum = Item + Sum;
    }
    return Sum;
}
