// Game/cTagVocabulary_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>

extern const char DAT_10e5d21c[];

std::string FUN_10ab0af0(const std::string& Left, const char* Right);

std::string FUN_10ab0ba0(const std::string& Left, const std::string& Right);

class cTagVocabulary
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual const std::string& Virtual7();
    virtual std::string FUN_10c635c0();

    const std::string& FUN_10c62dc0();
};

// FUNCTION: 0x10C635C0 ?FUN_10c635c0@cTagVocabulary@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
std::string cTagVocabulary::FUN_10c635c0()
{
    return FUN_10ab0ba0(FUN_10ab0af0(FUN_10c62dc0(), DAT_10e5d21c), Virtual7());
}
