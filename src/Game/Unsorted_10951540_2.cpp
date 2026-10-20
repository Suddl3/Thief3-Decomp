// Game/Unsorted_10951540_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The filter a cFilteredList keeps: every item of the list is compared against it.
#include "Game/Struct_10951A40.h"

// The items of a cFilteredList: each carries the filter it was built with.
class Class_10951540 : public Struct_10951A40
{
public:
    bool MatchesFilter(void* Filter);
};

// FUNCTION: 0x10951540 ?MatchesFilter@Class_10951540@@QAE_NPAX@Z
bool Class_10951540::MatchesFilter(void* Filter)
{
    Struct_10951A40* Other = (Struct_10951A40*)Filter;
    return Other->Unknown00 == Unknown00
        && Other->Unknown04 == Unknown04
        && Other->Unknown08 == Unknown08
        && Other->Unknown0C == Unknown0C
        && Other->Unknown10 == Unknown10
        && Other->Unknown14 == Unknown14
        && Other->Unknown18 == Unknown18
        && Other->Unknown1C == Unknown1C
        && Other->Unknown20 == Unknown20
        && Other->Unknown24 == Unknown24
        && Other->Unknown28 == Unknown28
        && Other->Unknown2C == Unknown2C
        && Other->Unknown38 == Unknown38
        && Other->Unknown3C == Unknown3C;
}
