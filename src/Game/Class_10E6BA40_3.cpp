// Game/Class_10E6BA40_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <hash_map>

struct Struct_10E6BA40_Value
{
    float Unknown00;
    int Unknown04;
};

class Class_10E50610
{
public:
    virtual ~Class_10E50610() {}
};

class Class_10E6D208 : public Class_10E50610
{
public:
    Class_10E6D208() : Unknown04(0) {}

    int Unknown04;
};

class Class_10E66500 : public Class_10E6D208
{
public:
    Class_10E66500() : Unknown08(0) {}

    char Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E50610* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6BA40
{
public:
    virtual void Virtual0();
    virtual int FUN_10a6f160(int Key, float Value);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void RemoveEntry(int A, int Key);

    stdext::hash_map<int, Struct_10E6BA40_Value> m_Entries;
};

// FUNCTION: 0x10A6FD60 ?RemoveEntry@Class_10E6BA40@@UAEXHH@Z
void Class_10E6BA40::RemoveEntry(int A, int Key)
{
    stdext::hash_map<int, Struct_10E6BA40_Value>::iterator It = m_Entries.find(Key);
    if (It == m_Entries.end())
        return;
    if (It->second.Unknown04)
    {
        It->second.Unknown04 = 0;
        Class_10E66500 Event;
        Event.Unknown04 = A;
        DAT_10f46da0->Virtual5(0x29, Key, &Event, 0);
    }
    m_Entries.erase(Key);
}
