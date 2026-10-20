// Game/Class_10B9CAC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9CB80.h"
#include "Game/Class_10B9CBE0.h"
#include "Game/Class_10B9CCD0.h"
#include "Game/Class_10B9CCF0.h"
#include "Game/Class_10B9CD10.h"
#include "Game/Class_10B9CD30.h"
#include "Game/Class_10B9CDA0.h"
#include "Game/Class_10B9CDC0.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7580.h"
#include "Game/Object_10B9CAC0.h"

class Class_10B9CAC0
{
public:
    int FUN_10b9d040(int A, int B);

    char Unknown00[0x10];
    int m_Count;
    char Unknown14[4];
    Object_10B9CAC0** m_Stack;
};

class Class_10BA9FD0;

class Class_10BB7580;

// FUNCTION: 0x10B9D040 ?FUN_10b9d040@Class_10B9CAC0@@QAEHHH@Z
int Class_10B9CAC0::FUN_10b9d040(int A, int B)
{
    if (m_Count)
    {
        Object_10B9CAC0* Obj = m_Stack[m_Count - 1];
        if (Obj)
            return Obj->Virtual35(*(const cString*)A, B); // A holds the cString pointer
    }
    return 0;
}
