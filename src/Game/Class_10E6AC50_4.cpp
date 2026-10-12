// Game/Class_10E6AC50_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6AC50;

class Object_10A632E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6AC50* Owner);
};

class cIntArray
{
public:
    void SetCount(int NewCount);

    int Count;
    int m_CapacityBytes;
    Object_10A632E0** Data;
};

class Class_10E6AC50
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
    virtual void AddItem(Object_10A632E0* Obj);

    char Unknown04[0x10];
    cIntArray m_Count;
};

// FUNCTION: 0x10A632E0 ?AddItem@Class_10E6AC50@@UAEXPAVObject_10A632E0@@@Z
void Class_10E6AC50::AddItem(Object_10A632E0* Obj)
{
    cIntArray* Array = &m_Count;
    int Index = Array->Count;
    Array->SetCount(Index + 1);
    Array->Data[Index] = Obj;
    Obj->Virtual1(this);
}
