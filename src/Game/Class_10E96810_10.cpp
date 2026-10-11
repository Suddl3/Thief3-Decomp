// Game/Class_10E96810_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10BFF460.h"
#include "Game/Object_10BE58C0.h"

class Class_10E960D8
{
public:
    virtual void Virtual0();

    void FUN_10be4ef0(Object_10BE58C0* Ar);

    Class_10BBB410* Unknown04;
    char Unknown08[0x60];
    int m_Interval;
};

class Class_10E96810 : public Class_10E960D8
{
public:
    virtual void FUN_10be4a20();
    virtual void Serialize(Object_10BE58C0* Ar);

    bool Unknown6C;
};

// FUNCTION: 0x10BE69A0 ?Serialize@Class_10E96810@@UAEXPAVObject_10BE58C0@@@Z
void Class_10E96810::Serialize(Object_10BE58C0* Ar)
{
    FUN_10be4ef0(Ar);
    if (Ar->Unknown0C >= 0x45)
    {
        Ar->Virtual1(&Unknown6C, 1);
        Ar->Virtual1(&m_Interval, 4);
    }
}
