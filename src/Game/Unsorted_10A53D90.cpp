// Game/Unsorted_10A53D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10950230.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Config.h"
#include "Game/Window.h"
#include <string.h>
#include "Game/cString.h"

class cMovieSubtitles {
public:
    char Unknown00[0x118];
    void* Unknown118;

    bool IsPlaying();
};

class cFMVWindow : public Window
{
public:
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);

    void Update(int A);

    Class_10950230* m_Stream;
    Class_1090A780 m_MovieName;
    char Unknown120;
    bool AlterGamma;
};

class Class_1094D430
{
public:
    void FUN_1094d430();
};

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class Class_10E5B588 : public Class_10E67FD0
{
public:
    ~Class_10E5B588();

    char Unknown04[0x120];
    Class_1094D430* Unknown124;
};

extern const char DAT_10e47660[];

class Class_10A53E90_UnknownC0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual cString* Virtual75();
};

class Class_10E5B2C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual Class_10A53E90_UnknownC0* FUN_10a53e90(const char** Name);

    char Unknown04[0xB4];
    int UnknownB8;
    char UnknownBC[4];
    Class_10A53E90_UnknownC0** UnknownC0;
};

// FUNCTION: 0x109E49A0 ??_GClass_10E5B588@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A54860's definition in this unit.

// FUNCTION: 0x10A53E90 ?FUN_10a53e90@Class_10E5B2C0@@UAEPAVClass_10A53E90_UnknownC0@@PAPBD@Z
Class_10A53E90_UnknownC0* Class_10E5B2C0::FUN_10a53e90(const char** Name)
{
    for (int i = 0; i < UnknownB8; i++)
    {
        Class_10A53E90_UnknownC0* Item = UnknownC0[i];
        cString* Record = Item->Virtual75();
        const char* Want = *Name ? *Name : DAT_10e47660;
        const char* Have = Record->Unknown00;
        if (!Have)
            Have = DAT_10e47660;
        if (strcmp(Have, Want) == 0)
            return Item;
    }
    return 0;
}

// FUNCTION: 0x10A54860 ??1Class_10E5B588@@UAE@XZ
Class_10E5B588::~Class_10E5B588()
{
    Class_1094D430* Object = Unknown124;
    if (Object)
    {
        Object->FUN_1094d430();
        delete Object;
    }
}

// FUNCTION: 0x10A54C20 ?LoadConfig@cFMVWindow@@UAEXPAVClass_10AF7F80@@0@Z
void cFMVWindow::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    Window::LoadConfig(File, Section);
    Config::Instance()->GetBool(Section->FUN_10af7f80(), "AlterGamma", &AlterGamma, File->FUN_10af7f80());
}

// FUNCTION: 0x10A54C70 ?Update@cFMVWindow@@QAEXH@Z
void cFMVWindow::Update(int A)
{
    FUN_10a53560(A);
    if (m_Stream)
    {
        m_Stream->DecodeFrame();
        if (m_Stream->FUN_10dbbbb0())
            Virtual109();
    }
}

// FUNCTION: 0x10A54CB0 ?IsPlaying@cMovieSubtitles@@QAE_NXZ
bool cMovieSubtitles::IsPlaying()
{
    return Unknown118 != 0;
}
