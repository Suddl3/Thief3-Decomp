// Game/Class_10E6BD68_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10A79C30_Unknown04
{
public:
    virtual void Virtual0(int A);
    char Pad04[4];
    int Unknown08;
};

class Class_10E6BD68
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Key);

    cIntArray Unknown04;
    cIntArray Unknown10;
    cIntArray Unknown1C;
};

// FUNCTION: 0x10A79C30 ?Virtual5@Class_10E6BD68@@UAEXH@Z
void Class_10E6BD68::Virtual5(int Key)
{
    cIntArray* Arr = &Unknown04;
    int i = 0;
    if (0 < Unknown04.Count)
    {
        do
        {
            Class_10A79C30_Unknown04* Elem = (Class_10A79C30_Unknown04*)Unknown04.Data[i];
            if (Elem->Unknown08 == Key)
            {
                Elem->Virtual0(1);
                int Last = Arr->Count - 1;
                int Tmp = Arr->Data[i];
                Arr->Data[i] = Arr->Data[Last];
                Arr->Data[Last] = Tmp;
                Arr->SetCount(Arr->Count - 1);
                i--;
            }
            i++;
        } while (i < Arr->Count);
    }
    Arr = &Unknown10;
    i = 0;
    if (0 < Unknown10.Count)
    {
        do
        {
            Class_10A79C30_Unknown04* Elem = (Class_10A79C30_Unknown04*)Unknown10.Data[i];
            if (Elem->Unknown08 == Key)
            {
                Elem->Virtual0(1);
                int Last = Arr->Count - 1;
                int Tmp = Arr->Data[i];
                Arr->Data[i] = Arr->Data[Last];
                Arr->Data[Last] = Tmp;
                Arr->SetCount(Arr->Count - 1);
                i--;
            }
            i++;
        } while (i < Arr->Count);
    }
    Arr = &Unknown1C;
    i = 0;
    if (0 < Unknown1C.Count)
    {
        do
        {
            Class_10A79C30_Unknown04* Elem = (Class_10A79C30_Unknown04*)Unknown1C.Data[i];
            if (Elem->Unknown08 == Key)
            {
                Elem->Virtual0(1);
                int Last = Arr->Count - 1;
                int Tmp = Arr->Data[i];
                Arr->Data[i] = Arr->Data[Last];
                Arr->Data[Last] = Tmp;
                Arr->SetCount(Arr->Count - 1);
                i--;
            }
            i++;
        } while (i < Arr->Count);
    }
}
