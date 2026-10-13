// Game/Unsorted_109E6240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <list>
#include "Game/Class_109E6520_Field18.h"
#include "Game/Class_10E5B7C8.h"
#include "Game/cStringIntHashTable.h"
#include "Game/TimeManager.h"
#include "Game/Class_109E6410.h"
#include "Game/cString.h"
#include "Game/Class_109E6520_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

class Class_109E6410_Unknown8C
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
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual bool Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual bool Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual bool Virtual61();
};

struct Struct_109E6410_Node
{
    Struct_109E6410_Node* Next;
    char Pad04[0x4];
    Class_109E6410_Unknown8C* Value;
};

extern bool DAT_10f31a60;

// FUNCTION: 0x109E6410 ?UpdatePause@Class_109E6410@@QAEXXZ
void Class_109E6410::UpdatePause()
{
    m_PauseRequested = 0;
    UnknownA4 = 0;
    for (Struct_109E6410_Node* Node = m_Head->Next; Node != m_Head; Node = Node->Next)
    {
        if (m_PauseRequested && UnknownA4)
            break;
        Class_109E6410_Unknown8C* Object = Node->Value;
        if (Object->Virtual53())
        {
            if (Object->Virtual61())
                UnknownA4 = 1;
            if (Object->Virtual58())
                m_PauseRequested = 1;
        }
    }
    UnknownAC = 1;
    TimeManager::Instance()->SetPaused(m_PauseRequested == 1);
    UnknownAC = 0;
    if (m_PauseRequested == 1)
    {
        DAT_10f31a60 = UnknownA4 == 1;
        return;
    }
    DAT_10f31a60 = 0;
}

// FUNCTION: 0x109E6520 ?Insert@cStringIntHashTable@@QAEIABVcString@@ABH@Z
unsigned int cStringIntHashTable::Insert(const cString& Key, const int& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_109E6520_Node* Node = new(0, 0, 0, 0, 0) Class_109E6520_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x109E6600 ?Rehash@cStringIntHashTable@@QAEXH@Z
void cStringIntHashTable::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_109E6520_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_109E6520_Node*[Size];
    m_BucketCount = Size;
    m_BucketBits = 0;
    while (Size >>= 1)
        m_BucketBits++;
    m_Count = 0;
    m_Collisions = 0;
    for (int i = 0; i < m_BucketCount; i++)
        m_Buckets[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_109E6520_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_109E6520_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
