// Game/Unsorted_10A38F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109081E0
{
public:
    Class_109081E0& operator=(const Class_109081E0& Other);

    int Unknown00;
};

class Class_1090FD40
{
public:
    void FUN_1090f2c0(int Count);
    void FUN_10a37f80(int A, int B, int C);
    void FUN_10a391a0(int Index, const Class_109081E0& Value);

    int Unknown00;
    int Unknown04;
    Class_109081E0* Unknown08;
};

// FUNCTION: 0x10A391A0 ?FUN_10a391a0@Class_1090FD40@@QAEXHABVClass_109081E0@@@Z
void Class_1090FD40::FUN_10a391a0(int Index, const Class_109081E0& Value)
{
    int Count = Unknown00;
    if (Index == Count)
    {
        FUN_1090f2c0(Count + 1);
        Unknown08[Count] = Value;
    }
    else
    {
        FUN_1090f2c0(Count + 1);
        FUN_10a37f80(Index, Index + 1, Unknown00 - Index - 1);
        Unknown08[Index] = Value;
    }
}
