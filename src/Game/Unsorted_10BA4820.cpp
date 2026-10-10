// Game/Unsorted_10BA4820.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C800
{
public:
    Class_10E8C800* FUN_10ba4860();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6B0
{
public:
    virtual Class_10E8C800* FUN_10ba4820();
};

// FUNCTION: 0x10BA4820 ?FUN_10ba4820@Class_10E8C6B0@@UAEPAVClass_10E8C800@@XZ
Class_10E8C800* Class_10E8C6B0::FUN_10ba4820()
{
    Class_10E8C800* Object = (Class_10E8C800*)operator new(sizeof(Class_10E8C800), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4860();
    return 0;
}
