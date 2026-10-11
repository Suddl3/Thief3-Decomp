// Game/Unsorted_10BA31E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c1b4[];

extern void* DAT_10e8c1b0[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E8C1B4 : public Class_10E6DC88
{
public:
    Class_10E8C1B4() : Class_10E6DC88(0x23)
    {
        Unknown00 = DAT_10e8c1b4;
        Unknown0C = DAT_10e8c1b0;
    }

    void* Unknown0C;
    int Unknown10;
};

class Class_10E8C62C
{
public:
    virtual Class_10E8C1B4* FUN_10ba3200();
};

// FUNCTION: 0x10BA3200 ?FUN_10ba3200@Class_10E8C62C@@UAEPAVClass_10E8C1B4@@XZ
Class_10E8C1B4* Class_10E8C62C::FUN_10ba3200()
{
    return new(0, 0, 0, 0, 0) Class_10E8C1B4;
}
