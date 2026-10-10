// Game/Unsorted_10BA5000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E8C8FC
{
public:
    Class_10E8C8FC* FUN_10ba5040();

    void** Unknown00;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E8C704
{
public:
    virtual Class_10E8C8FC* FUN_10ba5000();
};

// FUNCTION: 0x10BA5000 ?FUN_10ba5000@Class_10E8C704@@UAEPAVClass_10E8C8FC@@XZ
Class_10E8C8FC* Class_10E8C704::FUN_10ba5000()
{
    Class_10E8C8FC* Object = (Class_10E8C8FC*)operator new(sizeof(Class_10E8C8FC), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba5040();
    return 0;
}
