// Game/Unsorted_10B93F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e8b640[];

class Class_10E70A50
{
public:
    void** Unknown00;
};

class AActor : public Class_10E70A50
{
public:
    AActor* FUN_1098cf10();
};

class Class_10E8B640 : public AActor
{
public:
    Class_10E8B640* Construct();
};

extern void* DAT_10e8b7b8[];

class Class_10E8B7B8 : public AActor
{
public:
    Class_10E8B7B8* Construct();
};

extern void* DAT_10e8b930[];

class Class_10E8B930 : public AActor
{
public:
    Class_10E8B930* Construct();
};

// FUNCTION: 0x10B93F90 ?Construct@Class_10E8B640@@QAEPAV1@XZ
Class_10E8B640* Class_10E8B640::Construct()
{
    FUN_1098cf10();
    Unknown00 = DAT_10e8b640;
    return this;
}

// FUNCTION: 0x10B94030 ?Construct@Class_10E8B7B8@@QAEPAV1@XZ
Class_10E8B7B8* Class_10E8B7B8::Construct()
{
    FUN_1098cf10();
    Unknown00 = DAT_10e8b7b8;
    return this;
}

// FUNCTION: 0x10B940D0 ?Construct@Class_10E8B930@@QAEPAV1@XZ
Class_10E8B930* Class_10E8B930::Construct()
{
    FUN_1098cf10();
    Unknown00 = DAT_10e8b930;
    return this;
}
