// Game/Unsorted_10A2F270.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// Slot 0 of this vtable is the scalar deleting destructor at 0x10A15B00, which several
// vtables share; the accepted Class_10E5D5E0 (0x10A2F1D0) owns its name.
class Class_10E5D5E0
{
public:
    Class_10E5D5E0() : Unknown04(0) {}

    virtual void Virtual0();

    int Unknown04;
};

class Class_10E507E0 : public Class_10E5D5E0
{
public:
    Class_10E507E0() : Unknown08(0), Unknown0C(0) {}

    virtual Class_10E507E0* FUN_10a2f270();

    void Set(int A, int B)
    {
        Unknown08 = A;
        Unknown0C = B;
    }

    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A2F270 ?FUN_10a2f270@Class_10E507E0@@UAEPAV1@XZ
Class_10E507E0* Class_10E507E0::FUN_10a2f270()
{
    Class_10E507E0* Copy = new(0, 0, 0, 0, 0) Class_10E507E0();
    Copy->Unknown04 = Unknown04;
    Copy->Set(Unknown08, Unknown0C);
    return Copy;
}
