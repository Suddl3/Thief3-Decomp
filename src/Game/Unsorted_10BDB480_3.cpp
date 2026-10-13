// Game/Unsorted_10BDB480_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e94218[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class Class_10E94218 : public Class_10E90D70
{
public:
    Class_10E94218* Construct(int A, int B, int C);

    int Unknown40;
    int Unknown44[3];
    float Unknown50;
};

extern void* DAT_10e94338[];

class Class_10E94338 : public Class_10E90D70
{
public:
    Class_10E94338* Construct(int A, int B, int C);

    int Unknown40;
    int Unknown44[3];
    float Unknown50;
};

extern void* DAT_10e94578[];

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class FVector
{
public:
    float X, Y, Z;
};

class cTacticMoveToPoint : public Class_10E90D70
{
public:
    cTacticMoveToPoint* Construct(int A, int B, int C, const FVector& D, int E);

    int Unknown40;
    FArray Unknown44;
    float Unknown50;
    FVector Unknown54;
    int Unknown60;
};

extern void* DAT_10e94698[];

class Class_10E94698 : public Class_10E90D70
{
public:
    Class_10E94698* Construct(int A, int B, int C, int D);

    int Unknown40;
    int Unknown44[3];
    float Unknown50;
    int Unknown54;
    bool Unknown58;
    int Unknown5C;
    char Unknown60[0xC];
    int Unknown6C;
};

extern void* DAT_10e947b8[];

class cMeleeStrafeTarget : public Class_10E90D70
{
public:
    cMeleeStrafeTarget* Construct(int A, int B, int C, int D);

    int Unknown40;
    FArray Unknown44;
    float Unknown50;
    int Unknown54;
    float Unknown58;
    int Unknown5C;
    bool Unknown60;
    int m_WaitCount;
    int Unknown68;
    bool Unknown6C;
    int Unknown70;
};

// FUNCTION: 0x10BDB480 ?Construct@Class_10E94218@@QAEPAV1@HHH@Z
Class_10E94218* Class_10E94218::Construct(int A, int B, int C)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = C;
    for (int i = 0; i < 3; i++)
        Unknown44[i] = 0;
    Unknown50 = -1.0f;
    Unknown00 = DAT_10e94218;
    return this;
}

// FUNCTION: 0x10BDB4C0 ?Construct@Class_10E94338@@QAEPAV1@HHH@Z
Class_10E94338* Class_10E94338::Construct(int A, int B, int C)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = C;
    for (int i = 0; i < 3; i++)
        Unknown44[i] = 0;
    Unknown50 = -1.0f;
    Unknown00 = DAT_10e94338;
    return this;
}

// FUNCTION: 0x10BDB590 ?Construct@cTacticMoveToPoint@@QAEPAV1@HHHABVFVector@@H@Z
cTacticMoveToPoint* cTacticMoveToPoint::Construct(int A, int B, int C, const FVector& D, int E)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = C;
    Unknown44.FArray::FArray();
    Unknown50 = -1.0f;
    Unknown00 = DAT_10e94578;
    Unknown54 = D;
    Unknown60 = E;
    return this;
}

// FUNCTION: 0x10BDB620 ?Construct@Class_10E94698@@QAEPAV1@HHHH@Z
Class_10E94698* Class_10E94698::Construct(int A, int B, int C, int D)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = C;
    for (int i = 0; i < 3; i++)
        Unknown44[i] = 0;
    Unknown58 = false;
    Unknown5C = 0;
    Unknown50 = -1.0f;
    Unknown00 = DAT_10e94698;
    Unknown54 = D;
    Unknown6C = 0;
    return this;
}

// FUNCTION: 0x10BDB6C0 ?Construct@cMeleeStrafeTarget@@QAEPAV1@HHHH@Z
cMeleeStrafeTarget* cMeleeStrafeTarget::Construct(int A, int B, int C, int D)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = C;
    Unknown44.FArray::FArray();
    Unknown50 = -1.0f;
    Unknown00 = DAT_10e947b8;
    Unknown54 = D;
    Unknown58 = 0.5f;
    Unknown5C = 0;
    Unknown60 = false;
    m_WaitCount = 0;
    Unknown68 = 0;
    Unknown6C = false;
    Unknown70 = 0;
    return this;
}
