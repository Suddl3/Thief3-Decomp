// Game/cBoneAimController_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_109B28E0.h"

extern const char DAT_10e47660[];

class Class_10B21820;

struct Struct_10B21820_Data;

struct Struct_10A2C2F0_Unknown10;

struct Struct_10A2DA00;

class Class_109700E0;

struct Struct_10B21820_Object : public Class_109B28E0
{
    char Unknown00[0x3a4];
    Struct_10B21820_Data* Unknown3A4;
    char Pad3A8[0x6c];
    char Unknown414[0x90];
    FVector Unknown4A4;
    char Pad4B0[0x70];
    int Unknown520;
    char Pad524[0x4];
};

class FCoords
{
public:
    FCoords(const FVector& InOrigin) : Origin(InOrigin), XAxis(1, 0, 0), YAxis(0, 1, 0), ZAxis(0, 0, 1) {}
    FCoords() {}

    FRotator OrthoRotation() const;
    FCoords& FUN_10961af0(const FRotator& Rot);
    FCoords* FUN_10961e00(void* A);

    FVector Origin;
    FVector XAxis;
    FVector YAxis;
    FVector ZAxis;
};

struct Struct_10A2DA00
{
    Class_10B21820* Unknown00;
    char Unknown04[4];
    int Unknown08;
    char Unknown0C[0xC];
    Struct_10B21820_Object* Unknown18;
    char Unknown1C[4];
    FCoords Unknown20;
    char Unknown50[0x2A];
    bool Unknown7A;
    char Unknown7B;
    bool Unknown7C;
    bool Unknown7D;
    char Unknown7E[0x32];
};

class Class_109700E0
{
public:
    FCoords* FUN_109700e0(FCoords* A);
};

class cBoneAimController
{
public:
    cBoneAimController();

    int FindEntry(void* A, void* B);
    bool FUN_10a2c500(void* A, void* B);
    void FUN_10a2c200(void* A, int* B);
    void FUN_10a2c250(void* A, int* B);
    void FUN_10a2c2a0(void* A, int* B);
    bool FUN_10a2c580(void* A, void* B, void* C);
    bool IsAngleBelow(void* A, int* B, float C);
    Struct_10A2DA00* FindOrAddEntry(Class_10B21820* A, void* B);
    bool IsAngleBelow(void* A, int* B, int C);
    void FUN_10a2daa0(void* A, int B, int* C, int D);
    void FUN_10a2c470(Class_10B21820* A, FString* B, Class_109700E0* C);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    Struct_10A2C2F0_Unknown10* m_Entries;
};

// FUNCTION: 0x10A2C470 ?FUN_10a2c470@cBoneAimController@@QAEXPAVClass_10B21820@@PAVFString@@PAVClass_109700E0@@@Z
void cBoneAimController::FUN_10a2c470(Class_10B21820* A, FString* B, Class_109700E0* C)
{
    const TCHAR* Text = (const TCHAR*)B->Data;
    if (!Text)
        Text = DAT_10e47660;
    FName Key(Text, FNAME_Add);
    Struct_10A2DA00* Entry = (Struct_10A2DA00*)FindEntry(A, &Key);
    if (Entry)
    {
        void* Sub = &Entry->Unknown18->Unknown414;
        FCoords Buf;
        FCoords Local = *C->FUN_109700e0(&Buf);
        Entry->Unknown20 = *Local.FUN_10961e00(Sub);
        Entry->Unknown7A = true;
    }
}
