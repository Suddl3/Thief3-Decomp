// Game/Unsorted_10ABE0A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AF8340
{
public:
    void FUN_10af8340(int* Other);
};

class Class_Field04
{
public:
    int FUN_1098e290(int Id, Class_10AF8340* Out);

    char Unknown00[0x10C];
    int Unknown10C;
};

// FUNCTION: 0x10ABE0A0 ?FUN_10abe0a0@@YAXPAVClass_Field04@@PAVClass_10AF8340@@@Z
void FUN_10abe0a0(Class_Field04* Obj, Class_10AF8340* Out)
{
    if (!Obj->FUN_1098e290(0x4081a, Out))
        Out->FUN_10af8340(&Obj->Unknown10C);
}
