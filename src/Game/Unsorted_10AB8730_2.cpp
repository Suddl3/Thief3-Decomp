// Game/Unsorted_10AB8730_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int A);

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

class Class_10AB8D30
{
public:
    void FUN_10ab8d30(int A, int B, int C, int D);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    char Unknown14[4];
    Class_10BFBD70 Unknown18;
    Class_10BFBD70 Unknown24;
};

// FUNCTION: 0x10AB8D30 ?FUN_10ab8d30@Class_10AB8D30@@QAEXHHHH@Z
void Class_10AB8D30::FUN_10ab8d30(int A, int B, int C, int D)
{
    Unknown00 = A;
    Unknown04 = B;
    Unknown08 = 0;
    Unknown0C = C;
    Unknown10 = 0;
    Class_10BFBD70* Arr = &Unknown18;
    Arr->FUN_10bfbd70(0);
    int Index = Arr->Unknown00;
    Arr->FUN_10bfbd70(Index + 1);
    Arr->Unknown08[Index] = D;
    Arr = &Unknown24;
    Arr->FUN_10bfbd70(0);
    int Index2 = Arr->Unknown00;
    Arr->FUN_10bfbd70(Index2 + 1);
    Arr->Unknown08[Index2] = Unknown0C;
}
