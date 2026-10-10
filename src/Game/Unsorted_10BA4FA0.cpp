// Game/Unsorted_10BA4FA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C8F0
{
public:
    Class_10E8C8F0* FUN_10ba4fe0();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C700
{
public:
    virtual Class_10E8C8F0* FUN_10ba4fa0();
};

// FUNCTION: 0x10BA4FA0 ?FUN_10ba4fa0@Class_10E8C700@@UAEPAVClass_10E8C8F0@@XZ
Class_10E8C8F0* Class_10E8C700::FUN_10ba4fa0()
{
    Class_10E8C8F0* Object = (Class_10E8C8F0*)operator new(sizeof(Class_10E8C8F0), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4fe0();
    return 0;
}
