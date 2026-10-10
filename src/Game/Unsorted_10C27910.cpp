// Game/Unsorted_10C27910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C05610;

struct Struct_10C27CB0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

void FUN_10c05610(Struct_10C05610* A, Struct_10C27CB0* B, Struct_10C27CB0* C, bool* D);

class Class_10C27CB0
{
public:
    void FUN_10c27a20(Struct_10C27CB0 A, Struct_10C27CB0 B, int C, int D, int E, int F, int G, int H);
    void FUN_10c27cb0(Struct_10C05610* A, int B, int C, int D, int E, int F, int G);
};

// FUNCTION: 0x10C27CB0 ?FUN_10c27cb0@Class_10C27CB0@@QAEXPAUStruct_10C05610@@HHHHHH@Z
void Class_10C27CB0::FUN_10c27cb0(Struct_10C05610* A, int B, int C, int D, int E, int F, int G)
{
    bool Flag = false;
    Struct_10C27CB0 First;
    Struct_10C27CB0 Second;
    FUN_10c05610(A, &First, &Second, &Flag);
    FUN_10c27a20(First, Second, B, C, D, E, F, G);
}
