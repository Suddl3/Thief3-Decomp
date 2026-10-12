// Game/Class_10E4B180_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10D9B090.h"

class Class_10B8AC90;

class Class_10D9D740;

class Class_10E4B180_Unknown4C;

class Class_10E4B180_Unknown70;

class Class_10E4B180_Unknown7C;

class FVector;

struct Struct_10B7C030_Param;

struct Struct_10C08690;

class Class_10B7DC60_Param0;

class cUObjectLinkManager;

class cIntArray;

UClass* FUN_109015c0();

cUObjectLinkManager* GetUObjectLinkManager();

Class_10D9B090* FUN_10d9dcb0();

Class_10905A90_Member* GetAllocator();

// The header's copy of cIntArray, with the destructor out of line: the game calls it (0x109ED5E0) here.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}
    cIntArray(const cIntArray& Other)
    {
        Unknown00 = m_CapacityBytes = 0;
        Unknown08 = 0;
        CopyFrom(Other);
    }
    ~cIntArray();

    void AppendAll(const cIntArray& Other);
    void SetCount(int Count);
    void RemoveAt(int Index);
    int FindIndex(int Item)
    {
        for (int i = 0; i < Count; i++)
        {
            if (Data[i] == Item)
                return i;
        }
        return -1;
    }
    int FindOrAdd(const int* Item);
    void Clear();
    void CopyFrom(const cIntArray& Other);
    void InsertAt(int Index, int* Value);
    cIntArray& operator=(const cIntArray& Other)
    {
        Unknown00 = 0;
        AppendAll(Other);
        return *this;
    }
    int FUN_10b9fa20(int* Item);
    void DeleteAll();
    void PushFront(const int* Item);
    void AddUnique(int Item);
    void Remove(int Item);
    void FUN_10c08690(Struct_10C08690* Item);

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

// The object the target takes: a UObject, a Class_10971570, with a pointer at +0xB0.
class Class_10B7DC60_Param0
{
public:
    char Pad00[0xB0];
    Struct_10D9E5E0_Param* UnknownB0;
};

// The game's class at vtable 0x10E4B180: the header's copy, with slots 40 and 41 taking the object.
class Class_10E4B180
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
    virtual void FUN_10b7e660(int p1);
    virtual void Shutdown();
    virtual void FUN_10b7c670(int Param);
    virtual void FUN_10b7c6a0(int A);
    virtual void Virtual36();
    virtual void FUN_10b7c6d0(int A, Class_10B8AC90* B, int C);
    virtual void FUN_10b7c720(Class_10B8AC90* A, int B);
    virtual void Virtual39();
    virtual void Virtual40(Class_10B7DC60_Param0* A);
    virtual void FUN_10b7dc60(Class_10B7DC60_Param0* Obj);
    virtual void DestroyPhysicsObject(Struct_10B7C030_Param* A);
    virtual int Trace(int A, int B, FVector* Out);

    Class_10E4B180();

    void AddToMaskedLists(int Mask, Class_10E4B180_Unknown70* Obj);

    char Unknown04[0x28];
    void** Unknown2C;
    char Pad30[0x4];
    Class_10D9D740* Unknown34;
    char m_MaskLists[0xC];
    int Unknown44;
    char Unknown48[4];
    Class_10E4B180_Unknown4C** Unknown4C;
    char Pad50[0x18];
    int Unknown68;
    char Unknown6C[4];
    Class_10E4B180_Unknown70** Unknown70;
    int Unknown74;
    char Unknown78[4];
    Class_10E4B180_Unknown7C** Unknown7C;
    int Unknown80;
    char Unknown84[4];
    Class_10E4B180_Unknown70** Unknown88;
    int Unknown8C;
    char Unknown90[4];
    Class_10E4B180_Unknown70** Unknown94;
};

// The header's copy of cUObjectLinkManager, with Virtual4 taking the arguments and the result.
class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray& Found);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

// FUNCTION: 0x10B7DC60 ?FUN_10b7dc60@Class_10E4B180@@UAEXPAVClass_10B7DC60_Param0@@@Z
void Class_10E4B180::FUN_10b7dc60(Class_10B7DC60_Param0* Obj)
{
    if (!Obj)
        return;
    char Result = 0;
    ((Class_10971570*)Obj)->FUN_10971570(0x2000533, (bool*)&Result);
    if (Result != 0xe)
        return;
    bool Flag = false;
    if (Obj->UnknownB0 == 0)
    {
        UClass* Type = FUN_109015c0();
        ((UObject*)Obj)->IsA(Type);
        GetAllocator()->Virtual8(0, 0);
        this->Virtual40(Obj);
        GetAllocator()->Virtual9();
        Flag = true;
        if (Obj->UnknownB0 == 0)
            return;
    }
    cIntArray Found;
    GetUObjectLinkManager()->Virtual4(0, (int)Obj, 0x281B9D0, Found);
    if (Found.Count == 0)
    {
        Struct_10D9E5E0_Param* Param = Obj->UnknownB0;
        FUN_10d9dcb0()->FUN_10d9e490(Param);
    }
    else if (Flag)
    {
        Struct_10D9E5E0_Param* Param = Obj->UnknownB0;
        FUN_10d9dcb0()->FUN_10d9e5e0(Param);
    }
}
