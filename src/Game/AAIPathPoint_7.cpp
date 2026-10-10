// Game/AAIPathPoint_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Engine/EngineClasses.h"
#include "Game/Class_10BC0F30.h"

class Class_10BBFF10;

class AAIPathPoint : public AMarker
{
    DECLARE_CLASS(AAIPathPoint, AMarker, 0x0, AICore)

public:
    virtual void Destroy();
    virtual ~AAIPathPoint();
    virtual void Modify();
    virtual void PostLoad();
    virtual void Serialize(FArchive& Ar);

public:
    Class_10BC0F30 Unknown0C0;
};

// FUNCTION: 0x10B937D0 ??1AAIPathPoint@@UAE@XZ
AAIPathPoint::~AAIPathPoint()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10B93830 ??_GAAIPathPoint@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B937D0's definition in this unit.
