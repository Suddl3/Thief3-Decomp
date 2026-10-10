// Game/Unsorted_10ACC2D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1098E330
{
public:
    void FUN_1098e330(int A, int* B);
};

class Class_1098E3D0
{
public:
    void FUN_1098e3d0(int A, void* B);
};

extern float DAT_10eafbdc;

class Class_10ACC2D0
{
public:
    void FUN_10acc2d0(int A, float B);
    void FUN_10acc0f0(int A, float B);
};

// FUNCTION: 0x10ACC2D0 ?FUN_10acc2d0@Class_10ACC2D0@@QAEXHM@Z
void Class_10ACC2D0::FUN_10acc2d0(int A, float B)
{
    Class_1098E330* Obj = (Class_1098E330*)A;
    float Value = 0.0f;
    Obj->FUN_1098e330(0x1000c5, (int*)&Value);
    if (Value > DAT_10eafbdc)
    {
        Value = Value - B;
        ((Class_1098E3D0*)A)->FUN_1098e3d0(0x1000c5, &Value);
    }
    if (Value <= DAT_10eafbdc)
        FUN_10acc0f0(A, B);
}
