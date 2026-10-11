// Game/Unsorted_10AB0420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include <string>
#include "Game/Class_10E77978.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10AB0420_Field
{
public:
    Class_10AB0420_Field() : Unknown00(0) {}

    int Unknown00;
};

class Class_10AB0420_Unknown18
{
public:
    Class_10AB0420_Unknown18() : Unknown00(0), Unknown04(0), Unknown08(0), Unknown0C(0) {}

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10AB0420_Unknown14
{
public:
    Class_10AB0420_Unknown14() : Unknown04() {}
    ~Class_10AB0420_Unknown14();

    int Unknown00;
    Class_10AB0420_Unknown18 Unknown04;
};

class Class_10AB0420
{
public:
    Class_10AB0420(int A, int B);
    void FUN_10aea1e0(int A);

    int Unknown00;
    char Pad04[0x4];
    int Unknown08;
    Class_10AB0420_Field Unknown0C;
    Class_10AB0420_Field Unknown10;
    Class_10AB0420_Unknown14 Unknown14;
};

class Class_10AB04A0 : public Class_10E77978
{
public:
    Class_10AB04A0(std::string A);
};

// FUNCTION: 0x10AB0420 ??0Class_10AB0420@@QAE@HH@Z
Class_10AB0420::Class_10AB0420(int A, int B)
    : Unknown00(A), Unknown08(-1), Unknown0C(), Unknown10(), Unknown14()
{
    FUN_10905aa0()->Virtual8(0, 0);
    FUN_10aea1e0(B);
    FUN_10905aa0()->Virtual9();
}

// FUNCTION: 0x10AB04A0 ??0Class_10AB04A0@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
Class_10AB04A0::Class_10AB04A0(std::string A) : Class_10E77978(A)
{
}
