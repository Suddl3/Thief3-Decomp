// Game/Unsorted_10B1D2C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_109A62E0;

class Class_10B48300;

class Object_10B22790;

// Copied from include/Game/Class_10E7C584.h with the constructor added.
class Class_10E7C584
{
public:
    Class_10E7C584(Class_109A62E0* A);
    virtual void FUN_10b39500(int A);

    ~Class_10E7C584();

    int Unknown04;
    Class_109A62E0* Unknown08;
    Class_10B48300* Unknown0C[8];
};

// Copied from include/Game/Class_10E7A768.h with the constructor added; the
// header's fields end at 0x98, and the object the code allocates is 0xac bytes.
class Class_10E7A768
{
public:
    Class_10E7A768(int A, int B);
    virtual ~Class_10E7A768();

    int Unknown04;
    Object_10B22790* Unknown08[34];
    int Unknown90;
    int Unknown94;
    char Pad98[0x14];
};

class Class_10B384C0
{
public:
    Class_10B384C0(Class_109A62E0* Arg, void* Other);

    char Pad00[0x18];
};

class Class_10B1D2C0
{
public:
    Class_10B1D2C0* FUN_10b1d2c0(Class_109A62E0* Arg);

    void* Unknown00;
    void* Unknown04;
    void* Unknown08;
};

// FUNCTION: 0x10B1D2C0 ?FUN_10b1d2c0@Class_10B1D2C0@@QAEPAV1@PAVClass_109A62E0@@@Z
Class_10B1D2C0* Class_10B1D2C0::FUN_10b1d2c0(Class_109A62E0* Arg)
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown00 = new(0, 0, 0, 0, 0) Class_10E7C584(Arg);
    Unknown04 = new(0, 0, 0, 0, 0) Class_10E7A768((int)Arg, (int)Unknown00);
    Unknown08 = new(0, 0, 0, 0, 0) Class_10B384C0(Arg, Unknown04);
    return this;
}
