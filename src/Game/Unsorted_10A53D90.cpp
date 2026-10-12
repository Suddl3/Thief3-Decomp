// Game/Unsorted_10A53D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"
#include "Game/Class_10950230.h"
#include "Game/Class_10AF7F80.h"
#include "Game/Config.h"
#include "Game/Window.h"

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

// FUNCTION: 0x109E49A0 ??_GClass_10E5B588@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A54860's definition in this unit.

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
