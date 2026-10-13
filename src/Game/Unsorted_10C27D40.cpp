// Game/Unsorted_10C27D40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

extern void* DAT_10e99368[];

class Class_10E99368
{
public:
    ~Class_10E99368();

    void* Unknown00;
    int Count;
    cIntArray*** Unknown08;
};

// FUNCTION: 0x10C27D40 ??1Class_10E99368@@QAE@XZ
Class_10E99368::~Class_10E99368()
{
    Unknown00 = DAT_10e99368;
    if (Unknown08)
    {
        for (int i = 0; i < Count; i++)
        {
            for (int j = 0; j < Count; j++)
            {
                cIntArray* Item = Unknown08[i][j];
                if (Item)
                    delete[] Item;
            }
            delete Unknown08[i];
        }
        delete Unknown08;
    }
}
