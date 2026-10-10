// Game/Unsorted_10BA4700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C7DC
{
public:
    Class_10E8C7DC* FUN_10ba4740();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6A4
{
public:
    virtual Class_10E8C7DC* FUN_10ba4700();
};

// FUNCTION: 0x10BA4700 ?FUN_10ba4700@Class_10E8C6A4@@UAEPAVClass_10E8C7DC@@XZ
Class_10E8C7DC* Class_10E8C6A4::FUN_10ba4700()
{
    Class_10E8C7DC* Object = (Class_10E8C7DC*)operator new(sizeof(Class_10E8C7DC), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4740();
    return 0;
}
