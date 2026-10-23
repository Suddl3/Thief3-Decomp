// Game/Unsorted_10B1B660_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10B1B8A0_List.h"
#include "Game/Class_10B12D80.h"
#include "Game/Class_10B25010_Member.h"
#include "Game/cString.h"

class FArchive;

class Class_10B1B8A0_Arg;

class FString
{
public:
    FString(const char* In);
    ~FString();

    int FUN_10d52630();

    char Unknown00[0xc];
};

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

class Class_1098E330
{
public:
    int GetPropertyValue(int Id, int* Out);

    void** Unknown00;
    char Pad04[0x20];
    int Unknown24;
};

class Class_10B12120
{
public:
    FString Unknown00;
    FString Unknown0C;
    int Unknown18;
};

class Class_10B21560
{
public:
    char Unknown00[0x484];
    Class_10B12D80 Unknown484;
};

struct Struct_10B1B8A0_Item
{
    Class_1098E330* Unknown00;
    int Unknown04;
    int Unknown08;
};

// Game/Class_10B1B8A0.h copied whole, with the list at +0x28 and the methods this function calls.
class Class_10B1B8A0
{
public:
    Class_10B1B8A0();
    ~Class_10B1B8A0();

    void FUN_10b1a400(FArchive& Ar);
    void FUN_10b1a840();
    void EmptyArrays();
    void FUN_10b1b220(int p1, int p2);
    void FUN_10b1b8a0(Class_10B1B8A0_Arg* p1);
    void FUN_10b1abd0(int A);
    void FUN_10b1ac30();
    void FUN_10b1b310();
    void FUN_10b1b8a0(int A);
    bool FUN_10b1b7f0(int A);
    int FUN_10b19760(FString* Name);
    bool FUN_10b1b660(FString* Text, int p1);

    char Unknown00[4];
    Struct_10B1B8A0_List ListA;
    Struct_10B1B8A0_List ListB;
    Class_10B25010_Member Unknown1C;
    Struct_10B1B8A0_List ListC;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, void* D);
};

struct Struct_10B1B8A0_Event
{
    int Unknown00;
    int Unknown04;
};

extern Class_10F46DA0* DAT_10f46da0;

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B1B660 ?FUN_10b1b660@Class_10B1B8A0@@QAE_NPAVFString@@H@Z
bool Class_10B1B8A0::FUN_10b1b660(FString* Text, int p1)
{
    Class_10B21560* World = DAT_10f35dec->Unknown08;
    int Index = FUN_10b19760(Text);
    int Value = 0;
    FName Name;
    bool Equal = false;
    if (Index != -1)
    {
        Value = ((Class_10B12120*)DAT_10f35dec->Unknown08->Unknown484.Unknown00)[Index].Unknown18;
        World->Unknown484.Remove(Index, 1);
        for (int i = 0; i < ListC.Count; i++)
        {
            Struct_10B1B8A0_Item* Entry = &ListC.Data[i];
            if (Entry->Unknown00)
            {
                if (Entry->Unknown00->GetPropertyValue(0x10000b0, (int*)&Name) != 0)
                {
                    Equal = ((*Name.FUN_10af9730())[0] == Text->FUN_10d52630());
                    if (Equal)
                        FUN_10b1b220(Entry->Unknown00->Unknown24, Entry->Unknown04);
                }
            }
        }
        if (p1)
        {
            Struct_10B1B8A0_Event Event;
            Event.Unknown00 = p1;
            Event.Unknown04 = Value;
            DAT_10f46da0->Virtual5(0x1d, 0, 0, &Event);
        }
        return true;
    }
    return false;
}
