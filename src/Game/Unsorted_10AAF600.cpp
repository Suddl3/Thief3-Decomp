// Game/Unsorted_10AAF600.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>

class Class_10E6D4F0
{
public:
    virtual ~Class_10E6D4F0() = 0;
};

inline Class_10E6D4F0::~Class_10E6D4F0() {}

class Class_10E77978 : public Class_10E6D4F0
{
public:
    Class_10E77978(std::string Name);
    virtual ~Class_10E77978();

    std::string Unknown04;
};

inline Class_10E77978::~Class_10E77978() {}

// FUNCTION: 0x10AAF830 ??0Class_10E77978@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
Class_10E77978::Class_10E77978(std::string Name) : Unknown04(Name)
{
}
