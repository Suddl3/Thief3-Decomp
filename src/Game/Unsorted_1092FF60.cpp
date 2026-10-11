// Game/Unsorted_1092FF60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10928760.h"

extern bool DAT_10f2c754;

extern int DAT_10f34130;

extern int DAT_10f34134;

extern int DAT_10f34138;

class Class_10E49C6C : public Class_10928760
{
public:
    virtual ~Class_10E49C6C();

    Class_10E49C6C();

    void FUN_1092ff00(int A, int B);
    void FUN_1092ff60(int A, int B);
    bool FUN_10925130(int A);
    void FUN_1092fae0(int A, int B, void* C);
    void FUN_1092fcb0(int A, int B, int C);
    void FUN_10925190(int A);
    void FUN_10930110(int Param1, int Param2);
    bool FUN_10925160(int A);
    void FUN_10930170(int A, int B);

    char Pad04[0x4c];
    int Unknown50;
    char Unknown54[4];
    void** Unknown58;
};

// FUNCTION: 0x1092FF60 ?FUN_1092ff60@Class_10E49C6C@@QAEXHH@Z
void Class_10E49C6C::FUN_1092ff60(int A, int B)
{
    if (!DAT_10f2c754 && FUN_10925130(1))
    {
        FUN_1092fcb0(DAT_10f34130, DAT_10f34134, DAT_10f34138);
        for (int i = 0; i < Unknown50; i++)
            FUN_1092fae0(A, 1, Unknown58[i]);
        FUN_10925190(1);
    }
}
