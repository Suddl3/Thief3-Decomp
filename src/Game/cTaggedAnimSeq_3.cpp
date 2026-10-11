// Game/cTaggedAnimSeq_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

class Class_10A1F4D0
{
public:
    void FUN_10a1f4d0(int A);
    void FUN_109f36e0();
};

Class_10A1F4D0* FUN_109f5f80(void* A, const char* S);

class cTaggedAnimSeq
{
public:
    virtual void Virtual0();
    virtual Class_1090A780 GetName();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Play(void* A);

    Class_1090A780 m_Name;
};

// FUNCTION: 0x10A1F840 ?Play@cTaggedAnimSeq@@UAEXPAX@Z
void cTaggedAnimSeq::Play(void* A)
{
    const char* S = m_Name.Unknown00;
    if (!S)
        S = DAT_10e47660;
    Class_10A1F4D0* Obj = FUN_109f5f80(A, S);
    Obj->FUN_10a1f4d0(10);
    Obj->FUN_109f36e0();
}
