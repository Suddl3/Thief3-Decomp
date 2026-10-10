// Game/Unsorted_10BA4D00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C89C
{
public:
    Class_10E8C89C* FUN_10ba4d40();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6E4
{
public:
    virtual Class_10E8C89C* FUN_10ba4d00();
};

// FUNCTION: 0x10BA4D00 ?FUN_10ba4d00@Class_10E8C6E4@@UAEPAVClass_10E8C89C@@XZ
Class_10E8C89C* Class_10E8C6E4::FUN_10ba4d00()
{
    Class_10E8C89C* Object = (Class_10E8C89C*)operator new(sizeof(Class_10E8C89C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4d40();
    return 0;
}
