// Game/Unsorted_10BA5170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C92C
{
public:
    Class_10E8C92C* FUN_10ba51b0();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C714
{
public:
    virtual Class_10E8C92C* FUN_10ba5170();
};

// FUNCTION: 0x10BA5170 ?FUN_10ba5170@Class_10E8C714@@UAEPAVClass_10E8C92C@@XZ
Class_10E8C92C* Class_10E8C714::FUN_10ba5170()
{
    Class_10E8C92C* Object = (Class_10E8C92C*)operator new(sizeof(Class_10E8C92C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba51b0();
    return 0;
}
