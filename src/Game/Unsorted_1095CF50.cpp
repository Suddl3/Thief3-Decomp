// Game/Unsorted_1095CF50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_1095CAA0
{
    char Unknown00[0xC];
    int Unknown0C;
    int Unknown10;
};

struct Struct_1095CEC0
{
    int Unknown00;
    Struct_1095CAA0* Unknown04;
    Struct_1095CAA0* Unknown08;
};

// include/Game/Class_1095CAA0.h, copied whole with FUN_1095d210 added.
class Class_1095CAA0
{
public:
    bool FUN_1095caa0(Struct_1095CAA0* Other);
    bool FUN_1095d210(int* Key, void* Set);

    char Unknown00[0x20];
    int Unknown20;
    int Unknown24;
};

Struct_1095CEC0* FUN_1095cec0(void* Set, int A, int B);

// FUNCTION: 0x1095D210 ?FUN_1095d210@Class_1095CAA0@@QAE_NPAHPAX@Z
bool Class_1095CAA0::FUN_1095d210(int* Key, void* Set)
{
    bool Match;
    int B = Key[1];
    int A = Key[0];
    Struct_1095CEC0* Node = FUN_1095cec0(Set, A, B);
    Struct_1095CEC0* Node2;
    Struct_1095CEC0* Node3;
    int C;
    if ((Node->Unknown04 && (Match = Unknown24 >= 0 ? Node->Unknown04->Unknown10 == Unknown20 : Node->Unknown04->Unknown0C == Unknown20))
        || (Node->Unknown08 && (Match = Unknown24 >= 0 ? Node->Unknown08->Unknown10 == Unknown20 : Node->Unknown08->Unknown0C == Unknown20))
        || ((Node2 = FUN_1095cec0(Set, B, C = Key[2]))->Unknown04 && (Match = Unknown24 >= 0 ? Node2->Unknown04->Unknown10 == Unknown20 : Node2->Unknown04->Unknown0C == Unknown20))
        || FUN_1095caa0(Node2->Unknown08)
        || FUN_1095caa0((Node3 = FUN_1095cec0(Set, C, A))->Unknown04)
        || FUN_1095caa0(Node3->Unknown08))
        return true;
    return false;
}
