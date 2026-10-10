// Game/Unsorted_10BBFBF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
};

FArchive& FUN_10b052a0(FArchive& Ar, void* A);

struct Struct_10BBFD80
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10BBFD80Element
{
public:
    char Unknown00[0x2C];
    Struct_10BBFD80 Unknown2C;
};

class Class_10BBFD80
{
public:
    int Unknown00;
    int Unknown04;
    Class_10BBFD80Element** Unknown08;
};

// FUNCTION: 0x10BBFD80 ?FUN_10bbfd80@@YAXPAVClass_10BBFD80@@AAVFArchive@@@Z
void FUN_10bbfd80(Class_10BBFD80* A, FArchive& Ar)
{
    int Count = A->Unknown00;
    Ar.Virtual1(&Count, 4);
    for (int i = 0; i < Count; i++)
    {
        Class_10BBFD80Element* Element = A->Unknown08[i];
        Struct_10BBFD80 Item = Element->Unknown2C;
        FUN_10b052a0(Ar, &Item);
    }
}
