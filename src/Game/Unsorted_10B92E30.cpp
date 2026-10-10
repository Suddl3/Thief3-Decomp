// Game/Unsorted_10B92E30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e89aa0[];

class Class_10DA0420
{
public:
    Class_10DA0420(int A, int C);
    ~Class_10DA0420();
};

class Class_10E89AA0 : public Class_10DA0420
{
public:
    Class_10E89AA0(int A, int B, int C, int D);

    void FUN_10b92f40(int A, int B);

    void** Unknown00;
};

// FUNCTION: 0x10B93390 ??0Class_10E89AA0@@QAE@HHHH@Z
Class_10E89AA0::Class_10E89AA0(int A, int B, int C, int D)
    : Class_10DA0420(A, C)
{
    Unknown00 = DAT_10e89aa0;
    FUN_10b92f40(B, D);
}
