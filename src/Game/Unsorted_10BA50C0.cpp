// Game/Unsorted_10BA50C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C914
{
public:
    Class_10E8C914* FUN_10ba5100();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C70C
{
public:
    virtual Class_10E8C914* FUN_10ba50c0();
};

// FUNCTION: 0x10BA50C0 ?FUN_10ba50c0@Class_10E8C70C@@UAEPAVClass_10E8C914@@XZ
Class_10E8C914* Class_10E8C70C::FUN_10ba50c0()
{
    Class_10E8C914* Object = (Class_10E8C914*)operator new(sizeof(Class_10E8C914), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba5100();
    return 0;
}
