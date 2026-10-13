// Game/Class_10E4CCD0_42.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Struct_10B98E00;

class Class_10BCEC00
{
public:
    Class_10BCEC00(int A, int B, int C, int D, void* E, int F, int G);

    char Unknown00[0x58];
};

class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual Class_10BCEC00* FUN_10b97ce0(Struct_10B98E00* A, int B, int C, void* D, int E, int F);
};

// FUNCTION: 0x10B97CE0 ?FUN_10b97ce0@Class_10E4CCD0@@UAEPAVClass_10BCEC00@@PAUStruct_10B98E00@@HHPAXHH@Z
Class_10BCEC00* Class_10E4CCD0::FUN_10b97ce0(Struct_10B98E00* A, int B, int C, void* D, int E, int F)
{
    return new(0, 0, 0, 0, 0) Class_10BCEC00((int)A, (int)this, B, C, D, E, F);
}
