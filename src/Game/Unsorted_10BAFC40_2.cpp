// Game/Unsorted_10BAFC40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e47660[];

extern char DAT_10e8db9c[];

extern char DAT_10e8dbb8[];

extern char DAT_10e8db88[];

extern char DAT_10e8dbac[];

// Ion Storm's memory manager (0x10905AA0).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* GetAllocator();

// Game/cString.h copied without its base, with the destructor's own body: the code
// computes Unknown00 - 4 before GetAllocator().
class cString
{
public:
    cString() { Unknown00 = 0; }
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }

    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }

    const char* Str() const { return Unknown00 == 0 ? DAT_10e47660 : Unknown00; }

    char* Unknown00;
};

cString __cdecl GetVertexName();

cString __cdecl FloatToString(float Value);

cString __cdecl ColorToString(const struct Struct_10BAEA60* Color);

cString __cdecl VectorToString(const struct Struct_10BAEAB0* Vec);

struct Struct_10BAEA60
{
    char Unknown00[4];
};

struct Struct_10BAEAB0
{
    float Unknown00[3];
};

class Class_10BAFE00_Target
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
    virtual void Virtual12(const char* A, const char* B, const char* C, const char* D);
};

class Class_10E8D7B8
{
public:
    virtual void Virtual0();
    virtual void FUN_10bafe00(Class_10BAFE00_Target* Target, cString* Name1, cString* Name2);

    int Unknown04;
    Struct_10BAEAB0 Unknown08;
    Struct_10BAEA60 Unknown14;
    float Unknown18;
};

// FUNCTION: 0x10BAFE00 ?FUN_10bafe00@Class_10E8D7B8@@UAEXPAVClass_10BAFE00_Target@@PAVcString@@1@Z
void Class_10E8D7B8::FUN_10bafe00(Class_10BAFE00_Target* Target, cString* Name1, cString* Name2)
{
    Target->Virtual12(**Name2, DAT_10e8db9c, GetVertexName().Str(), **Name1);
    Target->Virtual12(**Name2, DAT_10e8dbb8, FloatToString(Unknown18).Str(), **Name1);
    Target->Virtual12(**Name2, DAT_10e8db88, ColorToString(&Unknown14).Str(), **Name1);
    Target->Virtual12(**Name2, DAT_10e8dbac, VectorToString(&Unknown08).Str(), **Name1);
}
