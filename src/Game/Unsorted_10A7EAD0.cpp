// Game/Unsorted_10A7EAD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAF570.h"

// Core.h's FArray and FString, copied whole so that FString can carry the
// method the target calls on it.
typedef signed int INT;

typedef INT UBOOL;

typedef char ANSICHAR;

enum ENoInit { E_NoInit = 0 };

class FArray
{
public:
    INT Num() const { return ArrayNum; }

    void* Data;
    INT ArrayNum;
    INT ArrayMax;
};

class FString : public FArray
{
public:
    FString(ENoInit) {}
    FString();
    FString(const FString& Other);
    FString(const ANSICHAR* In);
    ~FString();

    FString& operator=(const ANSICHAR* Other);
    FString& operator=(const FString& Other);
    FString& operator+=(const ANSICHAR* Str);
    FString& operator+=(const FString& Other);
    INT InStr(const ANSICHAR* SubStr, UBOOL Right = 0) const;
    INT InStr(const FString& SubStr, UBOOL Right = 0) const;

    INT Len() const;
    const ANSICHAR* operator*() const;

    int FUN_10da91a0();
};

// Class_10AA82D0 copied whole from include/Game/Class_10AA82D0.h, with the
// return type the symbol has.
class Class_10B39870;

class Class_10AA82D0 : public Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();
    void FUN_10b4fbf0(int A, int B, float C, float D, int E, int F, float G);

    char Pad01[0x3];
    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

class Class_10B88900_Arg1
{
public:
    char const* Unknown00;
};

class Class_10D393D0
{
public:
    ~Class_10D393D0();
    void FUN_10d393d0(void* A, int B, char const* C);
    void FUN_10d393b0();

    char Unknown00[0xC];
};

Class_10D393D0 FUN_10d39cf0(char const* File, int Line, char const* Name, int A, Class_10B88900_Arg1* B, int C, int D, int E, int F, unsigned G);

int FUN_10a2ed30(void* A);

void __cdecl WriteInt(void* A, int B);

extern bool DAT_10ffc854;

extern char const* const DAT_10e47660;

// The object the first argument points at: the target calls its slots 18 and 34.
class Class_10A7EC70_Script;

class Class_10A7EC70_Self
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
    virtual Class_10A7EC70_Script* Virtual18(Class_10B88900_Arg1* A);
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
    virtual int Virtual34();
};

// The object slot 18 returns: the target calls its slot 16.
class Class_10A7EC70_Script
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
    virtual void Virtual16(int A, void* B);
};

// The local the target constructs in its frame.
class Class_10D3D020 : public FString
{
public:
    Class_10D3D020();
    ~Class_10D3D020();

    int Unknown0C;
};

// FUNCTION: 0x10A7EC70 ?FUN_10a7ec70@@YGXPAVClass_10A7EC70_Self@@PAVClass_10B88900_Arg1@@PAX@Z
void __stdcall FUN_10a7ec70(Class_10A7EC70_Self* Self, Class_10B88900_Arg1* A, void* B)
{
    if (DAT_10ffc854)
    {
        Class_10A7EC70_Script* Script = Self->Virtual18(A);
        if (Script)
        {
            int Count = FUN_10a2ed30(B);
            char const* Name = A->Unknown00;
            if (!Name)
                Name = (char const*)&DAT_10e47660;
            Class_10D393D0 Writer = FUN_10d39cf0(".\\TriggerScriptLoader.cpp", 200, Name, -1, A, 0x15, Count, 2, 0, 0xdeadbeef);
            Class_10D3D020 Local;
            int Value = Self->Virtual34();
            WriteInt(&Local, Value);
            Script->Virtual16(Value, &Local);
            Class_10B39870* Linked = ((Class_10AA82D0*)&Local)->GetLinkedObject();
            if (DAT_10ffc854)
            {
                Writer.FUN_10d393d0(&Linked, 4, "uint32");
            }
            int Data = ((FString*)&Local)->FUN_10da91a0();
            if (DAT_10ffc854)
            {
                Writer.FUN_10d393d0((void*)Data, (int)Linked, 0);
                if (DAT_10ffc854)
                {
                    Writer.FUN_10d393b0();
                }
            }
        }
    }
}
