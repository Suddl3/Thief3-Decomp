// Game/Unsorted_10BA4250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C734
{
public:
    Class_10E8C734* FUN_10ba4290();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C66C
{
public:
    virtual Class_10E8C734* FUN_10ba4250();
};

// FUNCTION: 0x10BA4250 ?FUN_10ba4250@Class_10E8C66C@@UAEPAVClass_10E8C734@@XZ
Class_10E8C734* Class_10E8C66C::FUN_10ba4250()
{
    Class_10E8C734* Object = (Class_10E8C734*)operator new(sizeof(Class_10E8C734), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4290();
    return 0;
}
