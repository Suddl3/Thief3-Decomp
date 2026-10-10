// Game/Unsorted_10BA4EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C8D8
{
public:
    Class_10E8C8D8* FUN_10ba4f20();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6F8
{
public:
    virtual Class_10E8C8D8* FUN_10ba4ee0();
};

// FUNCTION: 0x10BA4EE0 ?FUN_10ba4ee0@Class_10E8C6F8@@UAEPAVClass_10E8C8D8@@XZ
Class_10E8C8D8* Class_10E8C6F8::FUN_10ba4ee0()
{
    Class_10E8C8D8* Object = (Class_10E8C8D8*)operator new(sizeof(Class_10E8C8D8), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4f20();
    return 0;
}
