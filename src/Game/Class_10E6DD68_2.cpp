// Game/Class_10E6DD68_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string>
#include "Game/Class_10E6D4F0.h"

inline Class_10E6D4F0::~Class_10E6D4F0() {}

class Class_10E77978 : public Class_10E6D4F0
{
public:
    virtual ~Class_10E77978();

    std::string m_Name;
};

inline Class_10E77978::~Class_10E77978() {}

template <class T>
class Owner
{
public:
    ~Owner() { delete P; }

    T* P;
};

class Class_10E6DD68 : public Class_10E77978
{
public:
    Class_10E6DD68();

    int Unknown20;
    Owner<Class_10E77978> Unknown24;
};

// FUNCTION: 0x10AB0160 ??_GClass_10E6DD68@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AB0180's definition in this unit.

// FUNCTION: 0x10AB0180 ??1Class_10E6DD68@@UAE@XZ
Class_10E6DD68::Class_10E6DD68()
{
}
