// Game/Class_10ABFB00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    void SetState(int A, bool State);
    void FUN_10abfb50(int A, int B);
    void Update(int A, int B, float C);

    bool m_State;
    char Unknown01[0xB];
    float m_Level;
    char Unknown10[0x4];
    Class_10ABFA30_Unknown14 Unknown14;
    Class_10ABFB00_Member m_Interpolator;
};

// FUNCTION: 0x10ABFA30 ?Update@Class_10ABFB00@@QAEXHHM@Z
void Class_10ABFB00::Update(int A, int B, float C)
{
    bool State = FUN_10abf300(A, B);
    if (State)
    {
        if (!m_State)
        {
            m_State = true;
            float Value = 1.0f;
            m_Interpolator.Virtual0(&m_Level, &Value, 0.25f);
        }
    }
    else
    {
        if (m_State)
        {
            m_State = false;
            float Value = 0.0f;
            m_Interpolator.Virtual0(&m_Level, &Value, 0.25f);
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
        if (m_Level != V)
        {
            m_Level = V;
            FUN_10abf660(A);
            FUN_10abf7c0(A);
        }
    }
}
