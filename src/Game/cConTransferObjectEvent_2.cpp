// Game/cConTransferObjectEvent_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class ClassArg_10AA7190
{
public:
    virtual void Virtual0(void* A);
};

class cConTransferObjectEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Serialize(ClassArg_10AA7190* A);

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10AA7190 ?Serialize@cConTransferObjectEvent@@UAEHPAVClassArg_10AA7190@@@Z
int cConTransferObjectEvent::Serialize(ClassArg_10AA7190* A)
{
    A->Virtual0(&Unknown04);
    A->Virtual0(&Unknown0C);
    A->Virtual0(&Unknown18);
    A->Virtual0(&Unknown24);
    A->Virtual0(&Unknown20);
    A->Virtual0(&Unknown10);
    A->Virtual0(&Unknown1C);
    return 1;
}
