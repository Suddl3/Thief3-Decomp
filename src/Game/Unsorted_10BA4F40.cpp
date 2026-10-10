// Game/Unsorted_10BA4F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C8E4
{
public:
    Class_10E8C8E4* FUN_10ba4f80();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6FC
{
public:
    virtual Class_10E8C8E4* FUN_10ba4f40();
};

// FUNCTION: 0x10BA4F40 ?FUN_10ba4f40@Class_10E8C6FC@@UAEPAVClass_10E8C8E4@@XZ
Class_10E8C8E4* Class_10E8C6FC::FUN_10ba4f40()
{
    Class_10E8C8E4* Object = (Class_10E8C8E4*)operator new(sizeof(Class_10E8C8E4), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4f80();
    return 0;
}
