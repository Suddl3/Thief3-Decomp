// Game/Unsorted_10BA3550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c248[];

extern void* DAT_10e70820[];

class Class_10E6DC88
{
public:
    Class_10E6DC88(int A);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E8C248 : public Class_10E6DC88
{
public:
    Class_10E8C248() : Class_10E6DC88(0x1E)
    {
        Unknown00 = DAT_10e8c248;
        Unknown0C = DAT_10e70820;
    }

    void* Unknown0C;
    int Unknown10;
};

class Class_10E8C640
{
public:
    virtual Class_10E8C248* FUN_10ba3550();
};

// FUNCTION: 0x10BA3550 ?FUN_10ba3550@Class_10E8C640@@UAEPAVClass_10E8C248@@XZ
Class_10E8C248* Class_10E8C640::FUN_10ba3550()
{
    const int& Tag = 0;
    return new(Tag, 0, 0, 0, 0) Class_10E8C248;
}
