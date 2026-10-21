// Game/Unsorted_10940E50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10DB58F0.h"

extern int DAT_10efefbc;

extern "C" void* memset(void* Ptr, int Value, unsigned int Size);

class IDirect3DDevice8;

extern IDirect3DDevice8* GDirect3DDevice8;

struct Struct_1093FFE0
{
    char Unknown00[0x10];
};

// The info the new object fills in: two sizes at the end.
struct Struct_10940E50_Info
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    unsigned int Unknown18;
    unsigned int Unknown1C;
};

// The render object the caller holds: the render call fills it in, and its
// Virtual14 fills the info struct.
class Class_10940D10_Unknown308
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14(int A, Struct_10940E50_Info* Info);
};

// The class the packet names, with the member at 0x310 and the method the
// header lacks.
class Class_10E4A538
{
public:
    virtual void FUN_109412f0();
    virtual void Virtual1();
    virtual void Virtual2();

    ~Class_10E4A538();

    char FUN_10940970();
    void Reset();
    void BuildTextureMatrix(int Width, int Height, Struct_1093FFE0* Out);
    void FUN_10940670();
    bool FUN_10940e50(const cString& Name, Class_10940D10_Unknown308** Object);

    int Unknown04;
    cString Unknown08[47];
    char UnknownC4[0xBC];
    cString Unknown180[47];
    char Pad23C[0xc0];
    int Unknown2FC;
    char Pad300[0x10];
    Struct_1093FFE0 Unknown310;
};

Class_10DB58F0* FUN_10db58f0();

int FUN_10d3b710(const char* Name, int* Out, int A, int B);

void FUN_10d3aac0(int* Out);

void FUN_10d3aa40(int* Object);

int __stdcall FUN_10d6c149(IDirect3DDevice8* Device, int Object, int Data, int C, int D,
                           int E, int F, int G, int H, int I, int J, int K, int L, int M,
                           Class_10940D10_Unknown308** Out);

// FUNCTION: 0x10940E50 ?FUN_10940e50@Class_10E4A538@@QAE_NABVcString@@PAPAVClass_10940D10_Unknown308@@@Z
bool Class_10E4A538::FUN_10940e50(const cString& Name, Class_10940D10_Unknown308** Object)
{
    cString Text;
    int Data;
    int Handle;

    if (*Object)
    {
        (*Object)->Virtual2();
        *Object = 0;
    }
    FUN_10db58f0()->Virtual24(*Name, 8, &Text, 1);
    int Found = FUN_10d3b710(*Text, &Data, 0, 0);
    if (Found)
    {
        Handle = 0;
        FUN_10d3aac0(&Handle);
        if (Handle)
        {
            GetAllocator()->Virtual8(0, 0);
            int Result = FUN_10d6c149(GDirect3DDevice8, Handle, Data, -1, -1, 1, 0, 0x15,
                                      DAT_10efefbc, 1, 1, 0, 0, 0, Object);
            GetAllocator()->Virtual9();
            FUN_10d3aa40(&Handle);
            if (!Result)
            {
                Class_10940D10_Unknown308* New = *Object;
                Struct_10940E50_Info Info;
                memset(&Info, 0, sizeof(Info));
                New->Virtual14(0, &Info);
                float Width = (float)Info.Unknown18;
                float Height = (float)Info.Unknown1C;
                BuildTextureMatrix((int)Width, (int)Height, &Unknown310);
                FUN_10940670();
                return true;
            }
        }
    }
    return false;
}
