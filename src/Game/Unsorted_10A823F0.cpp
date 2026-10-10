// Game/Unsorted_10A823F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_10a81b10(int Index, int* Value);

    int Count;
    int Unknown04;
    int* Data;
};

class Class_10E6C1F0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
    virtual void FUN_10a823f0(int Item, int Param3);

    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10A823F0 ?FUN_10a823f0@Class_10E6C1F0@@UAEXHH@Z
void Class_10E6C1F0::FUN_10a823f0(int Item, int Param3)
{
    if (!Item)
    {
        Virtual2(Param3);
        return;
    }
    for (int i = 0; i < Unknown04.Count; i++)
    {
        if (Item == Unknown04.Data[i])
        {
            Unknown04.FUN_10a81b10(i, &Param3);
            return;
        }
    }
}
