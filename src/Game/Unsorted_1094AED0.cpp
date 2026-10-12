// Game/Unsorted_1094AED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094AED0.h"
#include "Game/Class_1094B600.h"

struct Item_1094B600
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x1094AED0 ?ContainsAny@Class_1094AED0@@QAE_NPAHH@Z
bool Class_1094AED0::ContainsAny(int* A, int B)
{
    if (B)
    {
        for (int i = 0; i < m_Count; i++)
        {
            int Value = m_Items[i];
            for (int j = 0; j < B; j++)
            {
                if (Value == A[j])
                    return true;
            }
        }
    }
    return false;
}

// FUNCTION: 0x1094B600 ?SwapItems@Class_1094B600@@QAEXHH@Z
void Class_1094B600::SwapItems(int A, int B)
{
    Item_1094B600 Temp = m_Items[A];
    m_Items[A] = m_Items[B];
    m_Items[B] = Temp;
}
