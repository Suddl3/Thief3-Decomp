// Game/Class_10E4AC6C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_One2.h"
#include "Game/Struct_One4.h"
#include "Game/Struct_Pair0.h"
#include "Game/Struct_Zero4.h"
#include "Game/Struct_Zero5.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E4AC64.h"

class Class_10E4AC6C : public Class_10E4AC64
{
public:
    Class_10E4AC6C();

    virtual ~Class_10E4AC6C();

    int Unknown04;
    int Unknown08;
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
    float Unknown1C;
    Struct_Pair0 Unknown20;
    int Unknown28;
    float Unknown2C;
    float Unknown30;
    float Unknown34;
    float Unknown38;
    int Unknown3C;
    Struct_Zero5 Unknown40;
    Struct_One4 Unknown54;
    Struct_Zero4 Unknown64;
    Struct_One2 Unknown74;
    Struct_Zero4 Unknown7C;
};

struct Struct_10951800 {};

// FUNCTION: 0x10951800 ??1Class_10E4AC6C@@UAE@XZ
Class_10E4AC6C::~Class_10E4AC6C()
{
    for (int i = 0; i < Unknown40.m_Count; i++)
    {
        if (Unknown40.m_Items[i])
            delete (Struct_10951800*)Unknown40.m_Items[i];
    }
    Unknown40.Free();
}
