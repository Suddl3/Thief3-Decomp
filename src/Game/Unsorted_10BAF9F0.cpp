// Game/Unsorted_10BAF9F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e47660[];

extern char DAT_10e8db9c[];

extern char DAT_10e8db94[];

extern char DAT_10e8db90[];

extern char DAT_10e8db88[];

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

cString __cdecl GetLineName();

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

// The object the line is reported to.
class Class_10BAF9F0_Target
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

// include/Game/Class_10E8D7B0.h, copied whole with this method added.
class Class_10A68D20;

class Class_10E8D7B0
{
public:
    virtual void FUN_10bad950(Class_10A68D20* Owner);
    virtual void FUN_10baf9f0(Class_10BAF9F0_Target* Target, cString* Name1, cString* Name2);

    int Unknown04;
    Struct_10BAEAB0 Unknown08;
    Struct_10BAEAB0 Unknown14;
    Struct_10BAEA60 Unknown20;
};

// FUNCTION: 0x10BAF9F0 ?FUN_10baf9f0@Class_10E8D7B0@@UAEXPAVClass_10BAF9F0_Target@@PAVcString@@1@Z
void Class_10E8D7B0::FUN_10baf9f0(Class_10BAF9F0_Target* Target, cString* Name1, cString* Name2)
{
    Target->Virtual12(**Name2, DAT_10e8db9c, GetLineName().Str(), **Name1);
    Target->Virtual12(**Name2, DAT_10e8db94, VectorToString(&Unknown08).Str(), **Name1);
    Target->Virtual12(**Name2, DAT_10e8db90, VectorToString(&Unknown14).Str(), **Name1);
    Target->Virtual12(**Name2, DAT_10e8db88, ColorToString(&Unknown20).Str(), **Name1);
}
