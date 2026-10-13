// Game/Vocabulary_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10928760.h"
#include "Game/cIntArray.h"

class Class_109301D0_Unknown58;

class Class_1094B030;

extern bool DAT_10f2c756;

extern bool DAT_10f2c730;

extern bool DAT_10f2c72d;

extern bool DAT_10f2c8d9;

extern bool DAT_10f2c72f;

extern cIntArray DAT_10f31ba8;

class Class_1094B030
{
public:
    int FUN_1094d020(cIntArray& A, int B);

    char Pad00[0x64];
    int Unknown64;
};

class Vocabulary : public Class_10928760
{
public:
    virtual ~Vocabulary();

    Vocabulary();

    void FUN_1092ff00(int A, int B);
    bool FUN_10925130(int A);
    void FUN_1092fae0(int A, int B, void* C);
    void FUN_10925190(int A);
    void FUN_10930110(int Param1, int Param2);
    bool FUN_10925160(int A);
    void FUN_10930170(int A, int B);
    void FUN_1092ff60(int A, int B);
    void FUN_1092fcb0(int A, int B, int C);
    void FUN_109301d0();
    void FUN_10930070(int A, int B);
    void FUN_1092fde0(Class_1094B030* A);

    int Unknown04;
    char Pad08[0x48];
    int m_ItemCount;
    int Unknown54;
    Class_109301D0_Unknown58** m_Items;
    char Pad5C[0x18];
    int Unknown74;
    char Pad78[0x4];
    Class_1094B030** Unknown7C;
};

// FUNCTION: 0x10930070 ?FUN_10930070@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_10930070(int A, int B)
{
    if (!DAT_10f2c756 && ((!DAT_10f2c730 && (!DAT_10f2c72d || DAT_10f2c8d9)) || DAT_10f2c72f) && FUN_10925160(B))
    {
        for (int i = 0; i < Unknown74; i++)
        {
            Class_1094B030* Item = Unknown7C[i];
            if ((Item->Unknown64 == 3 || Item->Unknown64 == 4 || Item->Unknown64 == 5) && Item->FUN_1094d020(DAT_10f31ba8, Unknown04) > 0)
                FUN_1092fde0(Item);
        }
        FUN_10925190(3);
    }
}
