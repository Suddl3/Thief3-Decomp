// Game/Unsorted_10ABF220_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

bool __stdcall FUN_10abf300(int A, int B);

class Class_10ABFA30_Unknown14
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual float Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(float A);

    float Unknown04;
    float Unknown08;
};

class Class_10ABFB00_Member
{
public:
    virtual void Virtual0(float* A, float* B, float C);
};

class Class_10ABFB00
{
public:
    void FUN_10abf660(int A);
    void FUN_10abf7c0(int A);
    void FUN_10abfb00(int A, bool State);
    void FUN_10abfb50(int A, int B);
    void FUN_10abfa30(int A, int B, float C);

    bool Unknown00;
    char Unknown01[0xB];
    float Unknown0C;
    char Unknown10[0x4];
    Class_10ABFA30_Unknown14 Unknown14;
    Class_10ABFB00_Member Unknown20;
};

// FUNCTION: 0x10ABFA30 ?FUN_10abfa30@Class_10ABFB00@@QAEXHHM@Z
void Class_10ABFB00::FUN_10abfa30(int A, int B, float C)
{
    bool State = FUN_10abf300(A, B);
    if (State)
    {
        if (!Unknown00)
        {
            Unknown00 = true;
            float Value = 1.0f;
            Unknown20.Virtual0(&Unknown0C, &Value, 0.25f);
        }
    }
    else
    {
        if (Unknown00)
        {
            Unknown00 = false;
            float Value = 0.0f;
            Unknown20.Virtual0(&Unknown0C, &Value, 0.25f);
        }
    }
    Class_10ABFA30_Unknown14* Obj = &Unknown14;
    if (!Obj->Virtual1())
    {
        if (!(Obj->Unknown08 <= DAT_10eafbdc))
            Obj->Unknown08 -= C;
        else
            Obj->Virtual5(C * Obj->Unknown04);
        float V = Obj->Virtual3();
        if (Unknown0C != V)
        {
            Unknown0C = V;
            FUN_10abf660(A);
            FUN_10abf7c0(A);
        }
    }
}
