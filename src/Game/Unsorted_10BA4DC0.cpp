// Game/Unsorted_10BA4DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C8B4
{
public:
    Class_10E8C8B4* FUN_10ba4e00();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6EC
{
public:
    virtual Class_10E8C8B4* FUN_10ba4dc0();
};

// FUNCTION: 0x10BA4DC0 ?FUN_10ba4dc0@Class_10E8C6EC@@UAEPAVClass_10E8C8B4@@XZ
Class_10E8C8B4* Class_10E8C6EC::FUN_10ba4dc0()
{
    Class_10E8C8B4* Object = (Class_10E8C8B4*)operator new(sizeof(Class_10E8C8B4), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4e00();
    return 0;
}
