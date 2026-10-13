// Game/Unsorted_10A5DB30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

Class_10905A90_Member* GetAllocator();

// cString as the game declares it, with the destructor's body inline.
class cString
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// The element: 40 bytes, a string at +0x24.
class Class_10A5DC90_Unknown08
{
public:
    int Unknown00[9];
    cString Unknown24;
};

class Class_10A5DC90
{
public:
    void SetCount(int NewCount);

    int Unknown00;
    int Unknown04;
    Class_10A5DC90_Unknown08* Unknown08;
};

// FUNCTION: 0x10A5DC90 ?SetCount@Class_10A5DC90@@QAEXH@Z
void Class_10A5DC90::SetCount(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10A5DC90_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_10A5DC90_Unknown08* Element = Unknown08 + i;
        Element->Unknown24.~cString();
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10A5DC90_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10A5DC90_Unknown08);
        Unknown08 = (Class_10A5DC90_Unknown08*)Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10A5DC90_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10A5DC90_Unknown08);
            Unknown08 = (Class_10A5DC90_Unknown08*)Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10A5DC90_Unknown08* Element = Unknown08 + j;
        if (Element)
        {
            Element->Unknown24.Unknown00 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
