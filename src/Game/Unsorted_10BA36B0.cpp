// Game/Unsorted_10BA36B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c2a4[];

extern void* DAT_10e8c2a0[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10BA3740 : public Class_10E6DC88
{
public:
    Class_10BA3740() : Class_10E6DC88(0x25)
    {
        Unknown00 = DAT_10e8c2a4;
        Unknown0C = DAT_10e8c2a0;
    }

    void* Unknown0C;
    int Unknown10;
};

class Class_10E8C64C
{
public:
    virtual Class_10BA3740* FUN_10ba3740();
};

extern void* DAT_10e8c2c4[];

extern void* DAT_10e8c2c0[];

class Class_10BA37D0 : public Class_10E6DC88
{
public:
    Class_10BA37D0() : Class_10E6DC88(0x26)
    {
        Unknown00 = DAT_10e8c2c4;
        Unknown0C = DAT_10e8c2c0;
    }

    void* Unknown0C;
    int Unknown10;
};

class Class_10E8C650
{
public:
    virtual Class_10BA37D0* FUN_10ba37d0();
};

extern void* DAT_10e8c320[];

extern void* DAT_10e8c31c[];

class Class_10E8C320 : public Class_10E6DC88
{
public:
    Class_10E8C320() : Class_10E6DC88(0x2a)
    {
        Unknown00 = DAT_10e8c320;
        Unknown0C = DAT_10e8c31c;
    }

    void* Unknown0C;
    int Unknown10;
};

class Class_10E8C65C
{
public:
    virtual Class_10E8C320* FUN_10ba39a0();
};

extern void* DAT_10e8c35c[];

extern void* DAT_10e8c358[];

class Class_10E8C35C : public Class_10E6DC88
{
public:
    Class_10E8C35C() : Class_10E6DC88(0x2C)
    {
        Unknown00 = DAT_10e8c35c;
        Unknown0C = DAT_10e8c358;
    }

    void* Unknown0C;
    int Unknown10;
    int Unknown14;
};

class Class_10E8C664
{
public:
    virtual Class_10E8C35C* FUN_10ba3ac0();
};

// FUNCTION: 0x10BA3740 ?FUN_10ba3740@Class_10E8C64C@@UAEPAVClass_10BA3740@@XZ
Class_10BA3740* Class_10E8C64C::FUN_10ba3740()
{
    return new(0, 0, 0, 0, 0) Class_10BA3740;
}

// FUNCTION: 0x10BA37D0 ?FUN_10ba37d0@Class_10E8C650@@UAEPAVClass_10BA37D0@@XZ
Class_10BA37D0* Class_10E8C650::FUN_10ba37d0()
{
    return new(0, 0, 0, 0, 0) Class_10BA37D0;
}

// FUNCTION: 0x10BA39A0 ?FUN_10ba39a0@Class_10E8C65C@@UAEPAVClass_10E8C320@@XZ
Class_10E8C320* Class_10E8C65C::FUN_10ba39a0()
{
    return new(0, 0, 0, 0, 0) Class_10E8C320;
}

// FUNCTION: 0x10BA3AC0 ?FUN_10ba3ac0@Class_10E8C664@@UAEPAVClass_10E8C35C@@XZ
Class_10E8C35C* Class_10E8C664::FUN_10ba3ac0()
{
    return new(0, 0, 0, 0, 0) Class_10E8C35C;
}
