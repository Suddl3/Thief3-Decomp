// Game/Unsorted_109E5000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109E5180_Item
{
public:
    virtual bool Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int Param);
};

class Class_109E5180
{
public:
    void FUN_109e5180(int Param);

    char Unknown00[0x1E8];
    int Unknown1E8;
    char Unknown1EC[4];
    Class_109E5180_Item** Unknown1F0;
};

// FUNCTION: 0x109E5180 ?FUN_109e5180@Class_109E5180@@QAEXH@Z
void Class_109E5180::FUN_109e5180(int Param)
{
    for (int i = 0; i < Unknown1E8; i++)
    {
        Class_109E5180_Item* Child = Unknown1F0[i];
        if (Child)
        {
            Child->Virtual2(Param);
            if (Unknown1F0[i]->Virtual0())
            {
                delete Unknown1F0[i];
                Unknown1F0[i] = 0;
            }
        }
    }
}
