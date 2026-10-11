// Game/Class_10E6AC50_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6AC50;

class Object_10A632E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6AC50* Owner);
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    int Count;
    int Unknown04;
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
    Class_10BFBD70 m_Count;
};

// FUNCTION: 0x10A632E0 ?AddItem@Class_10E6AC50@@UAEXPAVObject_10A632E0@@@Z
void Class_10E6AC50::AddItem(Object_10A632E0* Obj)
{
    Class_10BFBD70* Array = &m_Count;
    int Index = Array->Count;
    Array->FUN_10bfbd70(Index + 1);
    Array->Data[Index] = Obj;
    Obj->Virtual1(this);
}
