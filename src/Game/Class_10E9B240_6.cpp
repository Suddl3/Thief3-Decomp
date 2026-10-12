// Game/Class_10E9B240_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

typedef float FLOAT;

typedef int INT;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FVector FUN_10967580() const;

    FLOAT X, Y, Z;
};

class FRotator
{
public:
    FVector Vector() const;

    INT Pitch, Yaw, Roll;
};

class FCoords
{
public:
    FCoords() {}

    FCoords& FUN_10961af0(const FRotator& Rot);
    FCoords operator/(const FRotator& Rot) const { return FCoords(*this).FUN_10961af0(Rot); }

    FVector Origin;
    FVector XAxis;
    FVector YAxis;
    FVector ZAxis;
};

extern FCoords DAT_10f46de8;

inline FVector FRotator::Vector() const
{
    return (DAT_10f46de8 / *this).XAxis;
}

static inline FVector Flatten(const FVector& V)
{
    return FVector(V.X, V.Y, V.Z * 0.0f);
}

class cLocomotionCommand
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void SetFlatDirection(const FRotator& Rot);

    char Unknown04[0x18];
    FVector Unknown1C;
    FVector m_FlatDirection;
    char Unknown34[5];
    unsigned char Unknown39;
};

// FUNCTION: 0x10C3D6F0 ?SetFlatDirection@cLocomotionCommand@@UAEXABVFRotator@@@Z
void cLocomotionCommand::SetFlatDirection(const FRotator& Rot)
{
    Unknown1C = FVector(0.0f, 0.0f, 0.0f);
    m_FlatDirection = Flatten(Rot.Vector()).FUN_10967580();
    Unknown39 = 0;
}
