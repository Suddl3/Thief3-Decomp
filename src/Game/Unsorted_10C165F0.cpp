// Game/Unsorted_10C165F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E98C8C;

void FUN_10c164c0(Class_10E98C8C* A);

class Class_10E98C8C
{
public:
    Class_10E98C8C(int A)
    {
        Unknown04 = A;
        FUN_10c164c0(this);
    }

    virtual void Virtual0();

    int Unknown04;
};

struct Struct_10BA91E0
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

class Class_10978090
{
public:
    int FUN_10978090();
};

class Class_10BBDB40 : public Class_10978090
{
};

class Class_10DBD510
{
public:
    Class_10BBDB40* FUN_10dbd510();
};

class Class_10BA9EF0 : public Class_10DBD510
{
public:
    Struct_10BA91E0 FUN_10ba9ef0();
};

float FUN_10a4aa80(int A, int B, float C, float D);

struct Struct_10C16680
{
    char Unknown00[0x2C];
    Struct_10BA91E0 Unknown2C;
};

class Class_10C16680
{
public:
    bool FUN_10c16680(Struct_10C16680* A, float B, float C);

    char Unknown00[4];
    Class_10BA9EF0* Unknown04;
};

// FUNCTION: 0x10C165F0 ?FUN_10c165f0@@YAPAVClass_10E98C8C@@H@Z
Class_10E98C8C* FUN_10c165f0(int Value)
{
    const int& Tag = 0;
    return new(Tag, 0, 0, 0, 0) Class_10E98C8C(Value);
}

// FUNCTION: 0x10C16680 ?FUN_10c16680@Class_10C16680@@QAE_NPAUStruct_10C16680@@MM@Z
bool Class_10C16680::FUN_10c16680(Struct_10C16680* A, float B, float C)
{
    float Dist = FUN_10ba91e0(&A->Unknown2C, &Unknown04->FUN_10ba9ef0());
    if (B * C > FUN_10a4aa80(Unknown04->FUN_10dbd510()->FUN_10978090(), 0x400054b, Dist, 16.0f))
        return true;
    return false;
}
