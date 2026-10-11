// Game/Unsorted_10B9D3C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Item);
};

Class_10905A90_Member* GetAllocator();

class Class_10B9D450
{
public:
    int Unknown00;
    int Unknown04;
    int** Unknown08;
};

// FUNCTION: 0x10B9D450 ?FUN_10b9d450@@YAXPAVClass_10B9D450@@@Z
void FUN_10b9d450(Class_10B9D450* Array)
{
    for (int i = 0; i < Array->Unknown00; i++)
    {
        int* Item = Array->Unknown08[i];
        if (Item)
        {
            if (*Item)
            {
                int Key = *Item - 4;
                GetAllocator()->Virtual5(Key);
                *Item = 0;
            }
            ::operator delete(Item);
        }
    }
    Array->Unknown00 = 0;
}
