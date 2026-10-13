// Game/Unsorted_1090F160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* GetAllocator();

class Class_1090FD40
{
public:
    int Add(const cString& Item);
    void SetCount(int Count);
    void FUN_1090fd00();
    void MoveItems(int A, int B, int C);
    void RemoveAt(int Index);
    void Insert(int Index, const cString& Value);
    void FUN_10a5b5b0(int A, int B);
    void RemoveUnordered(int Index);
    int FUN_1090f160(const cString& Name);
    void Empty()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
    }

    int m_Count;
    int m_CapacityBytes;
    cString* m_Items;
};

// FUNCTION: 0x1090F160 ?FUN_1090f160@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::FUN_1090f160(const cString& Name)
{
    for (int i = 0; i < m_Count; i++)
    {
        const char* Want = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
        const char* Have = m_Items[i].Unknown00 ? m_Items[i].Unknown00 : DAT_10e47660;
        if (strcmp(Have, Want) == 0)
            return i;
    }
    return -1;
}
