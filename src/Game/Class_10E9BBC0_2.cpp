// Game/Class_10E9BBC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <list>
#include "Game/Class_10E9BB80.h"

class Class_10C48260_Node;

class Class_10E9BBC0_Unknown3C;

class Class_10C48260
{
public:
    Class_10C48260() : m_Collisions(0), m_Count(0), m_BucketCount(0), m_FixedSize(false), m_Buckets(0)
    {
        Rehash(64);
    }
    unsigned int Insert(const int& Key, const int& Value);
    void Rehash(int Size);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_10C48260_Node** m_Buckets;
    Class_10E9BB80 m_KeyTraits;
};

class Class_10C49200 : public Class_10C48260
{
public:
    ~Class_10C49200();
    void Reset(int A);
    void Clear();
};

class Class_10C48320_Node;

class Class_10C48320
{
public:
    Class_10C48320() : m_Collisions(0), m_Count(0), m_BucketCount(0), m_FixedSize(false), m_Buckets(0)
    {
        Rehash(64);
    }
    unsigned int Insert(const int& Key, const int& Value);
    void Rehash(int Size);
    bool Remove(const int& Key);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_10C48320_Node** m_Buckets;
    Class_10E9BB80 m_KeyTraits;
};

class Class_10C49230 : public Class_10C48320
{
public:
    ~Class_10C49230();
    void Reset(int A);
    void Clear();
};

class Class_10C4ACE0_Unknown40
{
public:
    Class_10C4ACE0_Unknown40() : Unknown0C(0) {}

    std::list<int> Unknown00;
    int Unknown0C;
};

class Class_10E9BBC0
{
public:
    Class_10E9BBC0(Class_10E9BBC0_Unknown3C* Arg);
    virtual void Virtual0();

    Class_10C49200 Unknown04;
    Class_10C49230 Unknown20;
    Class_10E9BBC0_Unknown3C* Unknown3C;
    Class_10C4ACE0_Unknown40 Unknown40;
};

// FUNCTION: 0x10C4ACE0 ??0Class_10E9BBC0@@QAE@PAVClass_10E9BBC0_Unknown3C@@@Z
Class_10E9BBC0::Class_10E9BBC0(Class_10E9BBC0_Unknown3C* Arg) : Unknown3C(Arg)
{
}
