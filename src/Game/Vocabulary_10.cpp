// Game/Vocabulary_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10928760.h"

class Vocabulary : public Class_10928760
{
public:
    virtual ~Vocabulary();

    bool FUN_10925190(int A);
};

class cD3DStateCache
{
public:
    void FUN_10938fe0(int A);
};

extern cD3DStateCache* DAT_10f31be0;

__declspec(noinline) bool __stdcall FUN_10924d50(int A)
{
    return A > 0;
}

// FUNCTION: 0x10925190 ?FUN_10925190@Vocabulary@@QAE_NH@Z
bool Vocabulary::FUN_10925190(int A)
{
    if (FUN_10924d50(A))
    {
        DAT_10f31be0->FUN_10938fe0(A);
        return true;
    }
    return false;
}
