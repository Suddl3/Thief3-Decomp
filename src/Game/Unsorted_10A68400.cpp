// Game/Unsorted_10A68400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Item_10943600
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10943600
{
public:
    void FUN_10da4f50(int NewCount);

    int Unknown00;
    int Unknown04;
    Item_10943600* Unknown08;
};

class Class_10A68AE0 : public Class_10943600
{
public:
    void FUN_10a68ae0(const Class_10A68AE0& Other);
};

// FUNCTION: 0x10A68AE0 ?FUN_10a68ae0@Class_10A68AE0@@QAEXABV1@@Z
void Class_10A68AE0::FUN_10a68ae0(const Class_10A68AE0& Other)
{
    FUN_10da4f50(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}
