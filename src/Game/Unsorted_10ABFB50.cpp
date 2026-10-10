// Game/Unsorted_10ABFB50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49684;

extern float DAT_10eafbdc;

class Class_10ABFB00_Member
{
public:
    virtual void Virtual0(float* A, float* B, int C);
};

class Class_10ABFB00
{
public:
    void FUN_10abf660(int A);
    void FUN_10abf7c0(int A);
    void FUN_10abfb50(int A, int B);

    bool Unknown00;
    char Unknown01[0xB];
    float Unknown0C;
    char Unknown10[0x10];
    Class_10ABFB00_Member Unknown20;
};

bool __stdcall FUN_10abf300(int A, int B);

// FUNCTION: 0x10ABFB50 ?FUN_10abfb50@Class_10ABFB00@@QAEXHH@Z
void Class_10ABFB00::FUN_10abfb50(int A, int B)
{
    bool State = FUN_10abf300(A, B);
    float Level = State ? DAT_10e49684 : DAT_10eafbdc;
    float* Value = &Unknown0C;
    *Value = Level;
    Unknown00 = State;
    Class_10ABFB00_Member* Member = &Unknown20;
    Member->Virtual0(Value, Value, 0);
    Unknown00 = State;
    FUN_10abf660(A);
    FUN_10abf7c0(A);
}
