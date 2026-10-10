// Game/Unsorted_10B8B700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class FCoords
{
public:
    FCoords() {}

    FVector Origin;
    FVector XAxis;
    FVector YAxis;
    FVector ZAxis;
};

class Object_10B8B6A0
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
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual FCoords Virtual44();
};

// FUNCTION: 0x10B8B700 ?FUN_10b8b700@@YA?AVFVector@@PAVObject_10B8B6A0@@@Z
FVector FUN_10b8b700(Object_10B8B6A0* A)
{
    FCoords Coords = A->Virtual44();
    FVector Offset;
    Offset.X = Coords.XAxis.X * 60.0f;
    Offset.Y = Coords.XAxis.Y * 60.0f;
    Offset.Z = Coords.XAxis.Z * 60.0f;
    return Coords.Origin + Offset;
}
