// Game/Class_10E6BC44_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Struct_10A769A0_Param
{
    char Unknown00[0x1C];
    int Unknown1C;
    char Unknown20[0x58];
    char Unknown78;
};

struct Struct_10A769A0_Data
{
    char Unknown00[4];
    int* Unknown04;
};

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10A76830
{
public:
    Class_10A76830(Struct_10A769A0_Param* A);

    char Unknown00[0x14];
};

class Class_10E6BC44
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(Struct_10A769A0_Param* A, Class_10A76830* Result, int B, int C);
    virtual void Virtual6();
    virtual void Virtual7(Struct_10A769A0_Param* A);
    virtual void FUN_10a769a0(Struct_10A769A0_Param* A, Class_10E5D360* B, Struct_10A769A0_Data* C);
};

// FUNCTION: 0x10A769A0 ?FUN_10a769a0@Class_10E6BC44@@UAEXPAUStruct_10A769A0_Param@@PAVClass_10E5D360@@PAUStruct_10A769A0_Data@@@Z
void Class_10E6BC44::FUN_10a769a0(Struct_10A769A0_Param* A, Class_10E5D360* B, Struct_10A769A0_Data* C)
{
    if (B->Unknown04 == 0x800277)
    {
        int* Ptr = C->Unknown04;
        Virtual7(A);
        if (!(A->Unknown78 & 1) && !(A->Unknown1C & 0x800000) && Ptr && *Ptr)
        {
            Class_10A76830* Result = new(0, 0, 0, 0, 0) Class_10A76830(A);
            Virtual5(A, Result, 1, 0);
        }
    }
}
