// Game/Unsorted_10BBB8D0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E9925C.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10905A90_Member.h"

class Class_109BC840;

class Class_10BAA580;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Copied whole from include/Game/Class_10BAA580.h, with FUN_10babab0 added.
class Class_10BAA580 : public Class_10C7D570
{
public:
    int GetCachedValue();
    Class_109BC840* FUN_10baa580();
    int* GetCachedIndex(int* Out);
    int* FUN_10babab0(int* Out, Class_109081E0* Name);

    char Pad01[0x8b];
    int m_CachedValue;
    char Unknown90[0x24];
    bool m_CacheValid;
    char PadB5[0x3];
};

// Copied whole from include/Game/Class_10E992D4.h, with its constructor (0x10C27050) added.
class Class_10E992D4 : public Class_10E9925C
{
public:
    Class_10E992D4(int A, Class_10BAA580* B, int* C, int D);
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10c262b0(int p1, int p2, int p3, int p4);
    virtual void SyncRegistration();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual9();
    virtual float FUN_10c26200();
    virtual void Virtual10();

    unsigned char FUN_10c270b0();
    void Register();
    void Unregister();

    int Unknown38;
    char Pad3C[0x8];
    unsigned char Field44;
    char Pad45[0x3];
};

class Class_10BBB440
{
public:
    int FUN_10bbb440(int Key);

    char Pad00[0x8];
    Class_10BAA580* Unknown08;
    Class_10AAF570* Unknown0C;
    char Pad10[0x4];
    cIntArray Unknown14;
};

// FUNCTION: 0x10BBC190 ?FUN_10bbc190@@YAHPAVClass_10BBB440@@HPAVClass_109081E0@@@Z
int FUN_10bbc190(Class_10BBB440* Self, int Key, Class_109081E0* Name)
{
    int Found = Self->FUN_10bbb440(Key);
    if (Found)
        return Found;
    int Info;
    Class_10BAA580* Table = Self->Unknown08;
    Table->FUN_10babab0(&Info, Name);
    if (Info == 0)
        return 0;
    GetAllocator()->Virtual8(0, 0);
    Class_10E992D4* Obj = new(0, 0, 0, 0, 0) Class_10E992D4(Self->Unknown0C->FUN_10aaf570(), Self->Unknown08, &Info, Key);
    GetAllocator()->Virtual9();
    int Index = Self->Unknown14.Count;
    cIntArray* List = &Self->Unknown14;
    List->SetCount(Index + 1);
    List->Data[Index] = (int)Obj;
    return (int)Obj;
}
