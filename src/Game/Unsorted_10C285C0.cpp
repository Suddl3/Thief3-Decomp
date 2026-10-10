// Game/Unsorted_10C285C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

double FUN_10c00480();

class Class_10C16580
{
public:
    Class_10C16580(int Id);
    ~Class_10C16580();

    char Unknown00[8];
};

class Class_10C28B10
{
public:
    Class_10C28B10(int A, int B);

    Class_10C16580 Unknown00;
    Class_10C16580 Unknown08;
    float Unknown10;
};

// FUNCTION: 0x10C28B10 ??0Class_10C28B10@@QAE@HH@Z
Class_10C28B10::Class_10C28B10(int A, int B) : Unknown00(A), Unknown08(B)
{
    Unknown10 = FUN_10c00480();
}
