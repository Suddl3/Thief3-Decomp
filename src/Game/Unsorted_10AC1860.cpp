// Game/Unsorted_10AC1860.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49684;

typedef float FLOAT;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

class Class_10AC1CF0
{
public:
    Class_10AC1CF0* Init(FVector A, FVector B, FVector C, float D, bool E);

    float m_Mass;
    float m_InverseMass;
    FVector m_Position;
    FVector m_Velocity;
    FVector m_Acceleration;
    FVector m_Force;
    bool Unknown38;
};

// FUNCTION: 0x10AC1CF0 ?Init@Class_10AC1CF0@@QAEPAV1@VFVector@@00M_N@Z
Class_10AC1CF0* Class_10AC1CF0::Init(FVector A, FVector B, FVector C, float D, bool E)
{
    m_InverseMass = DAT_10e49684 / D;
    m_Mass = D;
    m_Position = A;
    m_Velocity = B;
    A.X = 0.0f;
    A.Y = 0.0f;
    A.Z = 0.0f;
    m_Acceleration = A;
    m_Force = C;
    Unknown38 = E;
    return this;
}
