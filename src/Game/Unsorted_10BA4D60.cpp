// Game/Unsorted_10BA4D60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C8A8
{
public:
    Class_10E8C8A8* FUN_10ba4da0();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6E8
{
public:
    virtual Class_10E8C8A8* FUN_10ba4d60();
};

// FUNCTION: 0x10BA4D60 ?FUN_10ba4d60@Class_10E8C6E8@@UAEPAVClass_10E8C8A8@@XZ
Class_10E8C8A8* Class_10E8C6E8::FUN_10ba4d60()
{
    Class_10E8C8A8* Object = (Class_10E8C8A8*)operator new(sizeof(Class_10E8C8A8), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4da0();
    return 0;
}
