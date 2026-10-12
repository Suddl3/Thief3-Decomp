// Game/Class_10E8C4A4_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Object_10C12B50.h"
#include "Game/Class_109081E0.h"

void WriteString(void* Stream, int* Value);

class Class_10E8C4A4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Save(int A, void* Stream);

    char Unknown04[4];
    Object_10C12B50* Unknown08;
};

// FUNCTION: 0x10C12B50 ?Save@Class_10E8C4A4@@UAEXHPAX@Z
void Class_10E8C4A4::Save(int A, void* Stream)
{
    WriteString(Stream, (int*)&Unknown08->Virtual25());
}
