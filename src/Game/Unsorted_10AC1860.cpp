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
    Class_10AC1CF0* FUN_10ac1cf0(FVector A, FVector B, FVector C, float D, bool E);

    float Unknown00;
    float Unknown04;
    FVector Unknown08;
    FVector Unknown14;
    FVector Unknown20;
    FVector Unknown2C;
    bool Unknown38;
};

// FUNCTION: 0x10AC1CF0 ?FUN_10ac1cf0@Class_10AC1CF0@@QAEPAV1@VFVector@@00M_N@Z
Class_10AC1CF0* Class_10AC1CF0::FUN_10ac1cf0(FVector A, FVector B, FVector C, float D, bool E)
{
    Unknown04 = DAT_10e49684 / D;
    Unknown00 = D;
    Unknown08 = A;
    Unknown14 = B;
    A.X = 0.0f;
    A.Y = 0.0f;
    A.Z = 0.0f;
    Unknown20 = A;
    Unknown2C = C;
    Unknown38 = E;
    return this;
}
