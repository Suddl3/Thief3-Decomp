// Game/Class_10E6B610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098E330.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6B978.h"
#include "Game/Class_10E6B9F8.h"
#include "Game/Class_10E6BA00.h"
#include "Game/Class_10E6BC8C.h"

class Class_10E6B594
{
public:
    virtual ~Class_10E6B594();
};

class Class_10E6B610 : public Class_10E6B594
{
public:
    Class_10E6B610(Class_1098E330* A);

    int Unknown04;
};

class Class_10E6B978;

// FUNCTION: 0x10A6DF60 ??0Class_10E6B610@@QAE@PAVClass_1098E330@@@Z
Class_10E6B610::Class_10E6B610(Class_1098E330* A)
{
    A->GetPropertyValue(0x1003f4, &Unknown04);
}
