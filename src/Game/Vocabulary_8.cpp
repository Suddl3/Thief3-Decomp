// Game/Vocabulary_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10928760.h"
#include "Game/cIntArray.h"
#include "Game/Vocabulary.h"

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
