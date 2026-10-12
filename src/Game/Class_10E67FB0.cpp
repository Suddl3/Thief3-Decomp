// Game/cFloatInterpolator.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cFloatInterpolator
{
public:
    virtual void Start(const float* A, const float* B, int C);

    float m_Value;
    float m_Start;
    float m_End;
    float m_Delta;
    bool m_Finished;
    int m_Duration;
    int m_Elapsed;
};

// FUNCTION: 0x10B30150 ?Start@cFloatInterpolator@@UAEXPBM0H@Z
void cFloatInterpolator::Start(const float* A, const float* B, int C)
{
    m_Start = *A;
    m_End = *B;
    m_Delta = *B - *A;
    m_Duration = C;
    m_Elapsed = 0;
    m_Value = m_Start;
    m_Finished = false;
}
