// Game/Class_10E7BF50_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

struct Item_10B34130;

class Class_10B34130
{
public:
    ~Class_10B34130()
    {
        FUN_10b330d0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }

    int AddItem(const Item_10B34130* Item);
    void FUN_10b330d0(int NewCount);

    int m_Count;
    int Unknown04;
    Item_10B34130* m_Items;
};

struct Struct_10C08690;

class Class_10E81130
{
public:
    virtual void Virtual0();
    ~Class_10E81130();
    Class_10E81130* FUN_10b46080();

    char Unknown04[0x160];
};

class Class_10E7BF50 : public Class_10E81130
{
public:
    virtual void Virtual0();
    ~Class_10E7BF50();
    Class_10E7BF50* InitDefaults();

    int Unknown164;
    int Unknown168;
    int Unknown16C;
    cIntArray Unknown170;
    float Unknown17C;
    int Unknown180;
    int Unknown184;
    int Unknown188;
    int Unknown18C;
    Class_10B34130 Unknown190;
    int Unknown19C;
    int Unknown1A0;
    bool Unknown1A4;
};

// FUNCTION: 0x10B33E20 ??1Class_10E7BF50@@QAE@XZ
Class_10E7BF50::~Class_10E7BF50()
{
}
