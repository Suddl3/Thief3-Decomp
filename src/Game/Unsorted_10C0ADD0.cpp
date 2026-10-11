// Game/Unsorted_10C0ADD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// The header's Class_10BFBD70, copied whole with its inline FUN_10bfbd70 added (the header only declares it).
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
            Unknown08 = (int*)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
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
                Unknown08 = (int*)FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        FUN_10905aa0()->Virtual9();
        Unknown00 = NewCount;
    }

    union
    {
        int Unknown00;
        int Count;
    };
    int Unknown04;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

// The pointee of Data's entries: the value is stored in its first field.
class Class_10C0ADD0_Data
{
public:
    int Unknown00;
};

class Class_10E97BEC : public Class_10BFBD70
{
public:
    virtual ~Class_10E97BEC();
    virtual void Virtual1();
    virtual void FUN_10c0add0(int Value);
};

// FUNCTION: 0x10C0ADD0 ?FUN_10c0add0@Class_10E97BEC@@UAEXH@Z
void Class_10E97BEC::FUN_10c0add0(int Value)
{
    for (int i = 0; i < Count; i++)
        ((Class_10C0ADD0_Data*)Data[i])->Unknown00 = Value;
    FUN_10bfbd70(0);
}
