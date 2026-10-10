// Game/Unsorted_10BA47C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C7F4
{
public:
    Class_10E8C7F4* FUN_10ba4800();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C6AC
{
public:
    virtual Class_10E8C7F4* FUN_10ba47c0();
};

// FUNCTION: 0x10BA47C0 ?FUN_10ba47c0@Class_10E8C6AC@@UAEPAVClass_10E8C7F4@@XZ
Class_10E8C7F4* Class_10E8C6AC::FUN_10ba47c0()
{
    Class_10E8C7F4* Object = (Class_10E8C7F4*)operator new(sizeof(Class_10E8C7F4), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4800();
    return 0;
}
