// Game/SoundSchema_16.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include <vector>
#include "Game/Class_10C4CD50.h"

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

// Copied from include/Game/Class_1090A780.h without its destructor: the base's destructor is trivial here.
class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);
    Class_1090A780() : Unknown00(0) {}

    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }

    char* Unknown00;
};

// Copied from include/Game/cString.h (its destructor kept).
class cString : public Class_1090A780
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

class Class_10C66790_Result
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
    virtual char Virtual17(cString* A, int B, int C);
};

Class_10C4CD50* FUN_10c4cd50();

// Copied whole from include/Game/SoundSchema.h; slot 17 is FUN_10c66790 (bool, int), not Virtual17().
class SoundSchema
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
    virtual int GetMetaSoundCount();
    virtual int GetMetaSound(int param);
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual bool FUN_10c66790(int A);
    virtual void FUN_10c665c0(int param);
    virtual void FUN_10c663f0(int p1);
    virtual void FUN_10c66420(int p1, int p2);
    virtual void FUN_10c66400(int p1);
    virtual void FUN_10c66440(int p1, int p2);
    virtual void FUN_10c66410(int p1);
    virtual void FUN_10c66460(int p1, int p2);
    virtual void FUN_10c66480(int* OutA, int* OutB);
    virtual void FUN_10c664a0(int* OutA, int* OutB);
    virtual void FUN_10c664c0(int* OutA, int* OutB);
    virtual void FUN_10c664e0(int param);
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void FUN_10c66520(int p1, int p2);
    virtual void FUN_10c66540(int* OutA, int* OutB);
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void FUN_10c66570(int Value);

    void FUN_10ba9f90(int param);

    char Unknown04[4];
    std::vector<int> m_MetaSounds;
    char Pad18[0x20];
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    int Unknown48;
    union
    {
        int Unknown4c;
        int Unknown4C;
    };
    int Unknown50;
    char Pad54[0xc];
    int Unknown60;
    int Unknown64;
    int Unknown68;
    int Unknown6C;
    char Pad70[0x18];
    int Unknown88;
};

// FUNCTION: 0x10C66790 ?FUN_10c66790@SoundSchema@@UAE_NH@Z
bool SoundSchema::FUN_10c66790(int A)
{
    static cString NoiseType("+noisetype");
    Class_10C4CD50* Manager = FUN_10c4cd50();
    Class_10C66790_Result* Found = Manager->Virtual14();
    if (Found)
        return Found->Virtual17(&NoiseType, Unknown88, A) != 0;
    return false;
}
