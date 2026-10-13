// Game/Unsorted_109396D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_109396D0.h"

int __stricmp(const char* Str1, const char* Str2);

class Class_109396D0_Unknown04
{
public:
    Class_109396D0_Unknown04* Unknown00;
    Class_109396D0_Unknown04* Unknown04;
    Class_109396D0_Unknown04* Unknown08;
    cString Unknown0C;
    char Unknown10;
    bool Unknown11;
};

// FUNCTION: 0x109396D0 ?FindInsertParent@Class_109396D0@@QAEPAVClass_109396D0_Unknown04@@ABVcString@@@Z
Class_109396D0_Unknown04* Class_109396D0::FindInsertParent(const cString& Key)
{
    Class_109396D0_Unknown04* Head = Unknown1C;
    Class_109396D0_Unknown04* Node = Head->Unknown04;
    Class_109396D0_Unknown04* Parent = Head;
    while (!Node->Unknown11)
    {
        const char* Name = Node->Unknown0C.Unknown00;
        bool GoRight;
        if (Name == 0 || ((int*)Name)[-1] == 0)
            GoRight = true;
        else if (Key.Unknown00 == 0 || 0 >= ((int*)Key.Unknown00)[-1])
            GoRight = false;
        else
            GoRight = __stricmp(Name, Key.Unknown00) < 0;
        if (GoRight)
        {
            Node = Node->Unknown08;
        }
        else
        {
            Parent = Node;
            Node = Node->Unknown00;
        }
    }
    return Parent;
}
