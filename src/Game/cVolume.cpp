// Game/cVolume.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B06220.h"
#include "Game/Class_10A671D0.h"
#include "Core/Core.h"
#include "Game/Class_1098CB90.h"
#include "Game/cVolume.h"

class cVolume;

class Class_10A67000_Result
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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual int Virtual31(Class_1098CB90* A, cVolume* B, FVector C, FVector D, int E);
};

// FUNCTION: 0x10A67000 ?ContainsPoint@cVolume@@QAEHVFVector@@@Z
int cVolume::ContainsPoint(FVector Param)
{
    if (!m_Enabled || Param.X < m_Min.X || Param.X > m_Max.X || Param.Y < m_Min.Y || Param.Y > m_Max.Y || Param.Z < m_Min.Z || Param.Z > m_Max.Z)
        return 0;
    Class_10A67000_Result* Result = FUN_10991ef0();
    if (Result == 0)
        return 0;
    Class_1098CB90 Buf;
    Buf.FUN_1098cb90(0x3f800000, 0);
    return Result->Virtual31(&Buf, this, Param, FVector(0, 0, 0), 0) == 0;
}
