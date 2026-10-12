// Game/cSampleStats_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10BD7F70.h"
#include "Game/Struct_10BD7FA0.h"

extern void* DAT_10e93b68[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class cSampleStats : public Class_10E90D70
{
public:
    cSampleStats* Construct(int A, int B);

    char Unknown40[0x24];
    int Unknown64;
    int Unknown68;
    int Unknown6C;
    int Unknown70;
    int Unknown74;
    int Unknown78;
    bool Unknown7C;
    Struct_10BD7FA0 EntryCount;
};

// FUNCTION: 0x10BD7FA0 ?Construct@cSampleStats@@QAEPAV1@HH@Z
cSampleStats* cSampleStats::Construct(int A, int B)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown64 = 0;
    Unknown68 = 0;
    Unknown6C = 0;
    Unknown70 = 0;
    Unknown78 = 0;
    Unknown7C = false;
    Unknown00 = DAT_10e93b68;
    EntryCount.Struct_10BD7FA0::Struct_10BD7FA0();
    return this;
}
