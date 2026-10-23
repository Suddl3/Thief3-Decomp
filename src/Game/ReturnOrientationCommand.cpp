// Game/ReturnOrientationCommand.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E93B5C.h"
#include "Game/Struct_10BDF0A0.h"

class Class_10BAF8A0;

class Class_10E95170;

class FArchive;

class cString;

extern void* DAT_10e9ad9c[];

// MoveCommand's native prefix, as already used in matched MoveCommand.cpp.
// This view models the existing vtable pointer explicitly; it is not a claim
// that the original command classes were nonpolymorphic.
class MoveCommand {
public:
    MoveCommand(int LinkType, const Class_10E93B5C& Context, int Owner);
    ~MoveCommand();
    void** Unknown00;
    int Unknown04;
    Class_10E93B5C Unknown08;
    int Unknown3C;
    int Unknown40;
    bool m_Active;
    bool m_Finished;
    char Pad46[2];
    int Unknown48;
};

// Existing eight-byte registered handle; this unit calls its constructor and
// destructor out of line, as the native constructor/EH context does.
class Class_10E98C8C {
public:
    virtual void FUN_10c162e0(int p1);
    Class_10E98C8C(int A);
    ~Class_10E98C8C();
    int Unknown04;
};

class MC_Turn : public MoveCommand {
public:
    MC_Turn(int LinkType, const Class_10BAF8A0& Context, Class_10E95170* Owner,
        const Struct_10BDF0A0& Orientation, int A, float B, int C, float D);
    void FUN_10c36630();
    void Serialize(FArchive& Ar);
    void FUN_10c365d0(int A, float B);
    void FUN_10c365f0(int A, int B);
    cString GetControllerName();

    bool Unknown4C;
    char Pad4D[3];
    Struct_10BDF0A0 Unknown50;
    Class_10E98C8C Unknown5C;
    bool Unknown64;
    char Pad65[3];
    float Unknown68;
    int Unknown6C;
    unsigned char Unknown70;
    char Pad71[3];
    float Unknown74;
};

// FUNCTION: 0x10C36700 ??0MC_Turn@@QAE@HABVClass_10BAF8A0@@PAVClass_10E95170@@ABUStruct_10BDF0A0@@HMHM@Z
MC_Turn::MC_Turn(int LinkType, const Class_10BAF8A0& Context, Class_10E95170* Owner,
    const Struct_10BDF0A0& Orientation, int A, float B, int C, float D)
    : MoveCommand(LinkType, (const Class_10E93B5C&)Context, (int)Owner),
      Unknown4C((Unknown00 = DAT_10e9ad9c, false)), Unknown5C(0),
      Unknown68(D), Unknown6C(A), Unknown70((unsigned char)C), Unknown74(B)
{
    // The explicit store above represents the normal derived vtable change
    // before any registered-handle construction can throw.
    Unknown50 = Orientation;
    FUN_10c36630();
}
