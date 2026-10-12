// Game/Unsorted_10B3D220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e7e808[];

class Class_10E7E4E0
{
public:
    Class_10E7E4E0* FUN_10b3acb0();

    void** Unknown00;
};

class Class_10E7E808 : public Class_10E7E4E0
{
public:
    Class_10E7E808* Init();
};

extern void* DAT_10e7e850[];

class Class_10E7E850 : public Class_10E7E4E0
{
public:
    Class_10E7E850* Init();
};

// FUNCTION: 0x10B3D220 ?Init@Class_10E7E808@@QAEPAV1@XZ
Class_10E7E808* Class_10E7E808::Init()
{
    FUN_10b3acb0();
    Unknown00 = DAT_10e7e808;
    return this;
}

// FUNCTION: 0x10B3D240 ?Init@Class_10E7E850@@QAEPAV1@XZ
Class_10E7E850* Class_10E7E850::Init()
{
    FUN_10b3acb0();
    Unknown00 = DAT_10e7e850;
    return this;
}
