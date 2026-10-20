// Game/Unsorted_10A63500.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A63500.h"
#include "Game/Class_1091CB20.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

class Class_10919C40;

bool FUN_1094c430(const cString& A, const cString& B);

// FUNCTION: 0x10A63500 ?FUN_10a63500@Class_10A63500@@QAEXABVcString@@PAVClass_10919C40@@@Z
void Class_10A63500::FUN_10a63500(const cString& Name, Class_10919C40* Value)
{
    GetAllocator()->Virtual8(0, 0);
    if (Unknown0C == 0)
    {
        Unknown0C = new(0, 0, 0, 0, 0) Class_1091CB20(Value, Name, -1.0f, -1.0f, true, 8);
    }
    else
    {
        Class_1091CB20* Obj = Unknown0C;
        if (Value != Obj->m_Owner)
        {
            Obj->m_Owner = Value;
            Obj->Unknown0C = false;
        }
        Obj = Unknown0C;
        if (FUN_1094c430(Name, Obj->m_Name))
        {
            Obj->m_Name = Name;
            Obj->Unknown0C = false;
        }
    }
    GetAllocator()->Virtual9();
}
