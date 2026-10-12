// Game/cTriggerLinkParam_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E6BF84.h"

void WriteString(void* Stream, int* Value);

void FUN_10d3d230(void* Stream, unsigned char Value);

class cTriggerLinkParam : public Class_10E6BF84
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int IsLoaded();
    virtual void Virtual7();
    virtual void Save(int A, void* Stream);
    virtual void Virtual9();

    cString FUN_10a801e0();

    char Pad04;
    unsigned char Unknown05;
    unsigned char Unknown06;
    unsigned char Unknown07;
    cString m_Flavor;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A805C0 ?Save@cTriggerLinkParam@@UAEXHPAX@Z
void cTriggerLinkParam::Save(int A, void* Stream)
{
    WriteString(Stream, (int*)&FUN_10a801e0());
    FUN_10d3d230(Stream, Unknown05);
    FUN_10d3d230(Stream, Unknown07);
    WriteString(Stream, &Unknown10);
    FUN_10d3d230(Stream, Unknown06);
}
