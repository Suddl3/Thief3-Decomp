// Game/Unsorted_10B42370.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's memory manager (0x10905AA0).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void* Virtual3(void* Block, int Size, int A, int B, int C, int D);
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        FUN_10905aa0()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                FUN_10905aa0()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        FUN_10905aa0()->Virtual9();
        Unknown00 = NewCount;
    }

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

// Each element is freed with operator delete alone, so it has no destructor.
struct Struct_10B42370 {};

class Class_10B42370
{
public:
    void FUN_10b42370();

    int Unknown00;
    int Unknown04;
    Class_10BFBD70 Unknown08;
};

// FUNCTION: 0x10B42370 ?FUN_10b42370@Class_10B42370@@QAEXXZ
void Class_10B42370::FUN_10b42370()
{
    for (int i = 0; i < Unknown08.Unknown00; i++)
    {
        delete (Struct_10B42370*)Unknown08.Unknown08[i];
        Unknown08.Unknown08[i] = 0;
    }
    Unknown08.~Class_10BFBD70();
}
