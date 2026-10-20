// Game/Unsorted_10B8D8B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B888D0.h"
#include "Game/Class_10B888E0.h"
#include "Game/cRagdollBlockDataManager.h"

extern const char DAT_10e47660[];

extern const char DAT_10e8941c[];

extern bool DAT_10ffc855;

Class_10905A90_Member* GetAllocator();

void ReadInt(void* Archive, int* Value);

// The base the name object is passed as.
class Class_1091ABB0
{
public:
};

// Game/cString.h copied whole, with the destructor and the member's const-ness the code needs.
class cString : public Class_1091ABB0
{
public:
    cString() : Unknown00(0) {}
    cString(const char* In);
    cString(const cString& Other);

    ~cString()
    {
        if (Unknown00)
        {
            char* Block = (char*)Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    cString& operator=(const cString& Other);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }

    const char* Unknown00;
};

class Class_10B88C40 : public cRagdollBlockDataManager
{
};

Class_10B88C40* FUN_10b89170();

int FUN_10b88a00(const char** Name);

struct Entry_10C32C30;

// The serializer the code writes to and reads from.
class Class_10D3D020
{
public:
    Class_10D3D020(int A, int B);
    ~Class_10D3D020();

    char Pad00[0x10];
};

class Class_10b8db10_Unknown28
{
public:
    void FUN_10d3de40();
};

class Class_10b8db10
{
public:
    int FUN_10b8db10(int A, const char* B);

    char Pad00[0x28];
    Class_10b8db10_Unknown28 Unknown28;
};

// FUNCTION: 0x10B8DB10 ?FUN_10b8db10@Class_10b8db10@@QAEHHPBD@Z
int Class_10b8db10::FUN_10b8db10(int A, const char* B)
{
    int Local = 0;
    int Count = 0;
    int Value = 0;
    bool Found;
    {
        cString Vnum(DAT_10e8941c);
        cString Name(B);
        {
            Entry_10C32C30* Entry = FUN_10b89170()->FindOrLoad(&Name);
            if (Entry)
            {
                int Index = FUN_10b88a00(&Vnum.Unknown00);
                Count = ((Class_10B888D0*)Entry)->FUN_10b888d0(Index);
                ((Class_10B888E0*)Entry)->FUN_10b888e0(Index, &Local);
                Found = true;
            }
            else
            {
                Found = false;
            }
        }
    }
    if (Found)
    {
        int Result;
        {
            Class_10D3D020 Archive(Local, Count);
            ReadInt(&Archive, &Result);
            if (!DAT_10ffc855)
                Unknown28.FUN_10d3de40();
            Value = Result;
        }
        return Value;
    }
    return 0;
}
