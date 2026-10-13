// Game/Class_10C01CE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10C01CE0.h"
#include "Game/cString.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10C01990.h"
#include "Game/Class_10E97B00.h"

class Class_10C01C10_Unknown08_Unknown08
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
};

class Class_10C01C10_Unknown08
{
public:
    char Unknown00[8];
    Class_10C01C10_Unknown08_Unknown08* Unknown08;
};

class Class_10C00BA0
{
public:
    ~Class_10C00BA0();

    char Unknown00[8];
    Class_10C01C10_Unknown08* Unknown08;
};

class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C01C10_Unknown08_Unknown08* Object) : Unknown00(Object)
    {
        if (Object)
            Object->Virtual1();
    }
    ~Class_10C56E40()
    {
        Unknown00->Virtual2();
    }

    Class_10C01C10_Unknown08_Unknown08* Unknown00;
};

// FUNCTION: 0x10C01C10 ?RemoveEntry@Class_10C01CE0@@QAEXH@Z
void Class_10C01CE0::RemoveEntry(int A)
{
    Class_10C00BA0* Entry = (Class_10C00BA0*)Data[A];
    bool Empty = Entry->Unknown08 == 0;
    if (Empty)
    {
        RemoveAt(A);
        delete Entry;
        return;
    }
    int Saved = Count;
    Class_10C56E40 Ref(Entry->Unknown08->Unknown08);
    Ref.Unknown00->Virtual10();
    if (Count == Saved)
    {
        RemoveAt(A);
        delete Entry;
    }
}

// FUNCTION: 0x10C01CE0 ?RemoveAll@Class_10C01CE0@@QAEXXZ
void Class_10C01CE0::RemoveAll()
{
    while (Count > 0)
        RemoveEntry(0);
}
