// Game/Unsorted_10B25F00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The cursor that cycles through a list of entries: it opens the list, scrolls
// it and hands the new entry to the window manager.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10A18FA0.h"
#include "Game/WindowManager.h"

// Ion Storm's string: a char pointer to a block allocated 4 bytes before it.
// A copy of Game/cString.h without its base class, with the destructor body
// here, so the block is freed as the game does.
class cString
{
public:
    cString(const char* In);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// The list cursors: the reverse cursor holds the entries, the cursor walks them.
class cListReverseCursor
{
public:
    int FindPrevFromListA(int* A);
    int FindPrevFromListB(int* A);
    void StepBack();

    char Unknown00[4];
    int m_Index;
    int Unknown08;
    int Unknown0C;
    int m_InListA;
};

class cListCursor : public cListReverseCursor
{
public:
    int FindNextFromListA(int* A);
    int FindNextFromListB(int* A);
    void Advance();
    void FUN_10b25e90(int A);

    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    char Unknown1D[3];
    float Unknown20;
    int Unknown24;
};

// include/Game/Class_10B16930.h, copied whole with the method this function calls added.
class cIntArray;

class Class_10B16930 : public WindowManager
{
public:
    cIntArray FUN_109e6d80(int A);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void ShowJunkItemWindow(int A);
    void FUN_10b16ef0(bool A);
    void EnterUnEquipFirst();
    void FUN_10b16300(int A, int B, bool C);
    void FUN_10b163c0(int A);
    void FUN_10b16450(int A);
    void FUN_10b164e0(int A, int B, char C);
    void FUN_10b165a0();
    bool FUN_10b169d0();

    char Pad00[0x1];
};

class Class_10DD7640
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3(int A);
};

class Object_10A18FC0;

class Class_10A4DFD0
{
public:
    void FUN_10a4f5c0(void** A);
};

Class_10DD7640* FUN_10dd7640();

Object_10A18FC0* FUN_10a18fc0();

Class_10A4DFD0* FUN_10a4f900();

void* GetWindowManager();

extern "C" const char DAT_10e7aa84[];

class Class_10b26310 : public cListCursor
{
public:
    void FUN_10b26310(int A);
    void FUN_10b257a0(int A);

    int Unknown28;
    char Unknown2C[0x10];
    bool Unknown3C;
    char Unknown3D[0x13];
    bool Unknown50;
    bool Unknown51;
};

// FUNCTION: 0x10B26310 ?FUN_10b26310@Class_10b26310@@QAEXH@Z
void Class_10b26310::FUN_10b26310(int A)
{
    Class_10DD7640* Screen = FUN_10dd7640();
    if (Screen->Virtual3(9))
    {
        Unknown18 = 1;
        Unknown20 = 0.0f;
    }
    Unknown28 = 0;
    if (((Class_10A18FA0*)FUN_10a18fc0())->FUN_10a18fa0(9) && !Unknown3C)
        FUN_10b257a0(A);
    else
    {
        cListCursor::FUN_10b25e90(A);
        if (Unknown51 && !Unknown50)
        {
            {
                cString Name(DAT_10e7aa84);
                FUN_10a4f900()->FUN_10a4f5c0((void**)&Name);
            }
            Unknown51 = false;
        }
    }
    if (Unknown0C < 0)
    {
        if (((Class_10B16930*)GetWindowManager())->FUN_10b169d0())
        {
            int Entry;
            if (m_InListA)
                Entry = FindNextFromListA(&m_InListA);
            else
                Entry = FindNextFromListB(&m_InListA);
            int NewIndex = Unknown0C + 1;
            m_Index = Entry;
            Unknown0C = NewIndex;
            ((Class_10B16930*)GetWindowManager())->FUN_10b16300(0, Unknown0C, false);
            return;
        }
    }
    else if (Unknown0C > 0)
    {
        if (((Class_10B16930*)GetWindowManager())->FUN_10b169d0())
        {
            int Entry;
            if (m_InListA)
                Entry = FindPrevFromListA(&m_InListA);
            else
                Entry = FindPrevFromListB(&m_InListA);
            int NewIndex = Unknown0C - 1;
            m_Index = Entry;
            Unknown0C = NewIndex;
            ((Class_10B16930*)GetWindowManager())->FUN_10b16300(1, Unknown0C, false);
            return;
        }
    }
    else
    {
        if (Unknown24 != 0)
        {
            ((Class_10B16930*)GetWindowManager())->FUN_10b165a0();
            if (Unknown20 < 0.0f)
            {
                m_Index = 0;
                m_InListA = 1;
                Unknown24 = 0;
            }
        }
    }
}
