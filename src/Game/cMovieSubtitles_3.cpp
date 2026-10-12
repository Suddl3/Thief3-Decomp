// Game/cMovieSubtitles_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10B315F0.h"

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x2C];
};

class cFMVWindow : public Class_10E67FD0
{
public:
    cFMVWindow();

    virtual ~cFMVWindow();

    int m_Stream;
    int m_MovieName;
    char Unknown120;
    char Unknown121;
};

class cMovieSubtitles : public cFMVWindow
{
public:
    cMovieSubtitles();

    virtual ~cMovieSubtitles();

    int Unknown124;
    int Unknown128;
    Struct_10B315F0 Unknown12C;
    bool Unknown130;
    bool Unknown131;
    bool Unknown132;
    int Unknown134;
    bool Unknown138;
    int Unknown13C;
    int Unknown140;
    bool Unknown144;
};

// FUNCTION: 0x10B315F0 ??0cMovieSubtitles@@QAE@XZ
cMovieSubtitles::cMovieSubtitles()
    : Unknown124(0), Unknown128(0), Unknown130(false), Unknown131(false), Unknown132(false), Unknown134(0),
      Unknown138(true), Unknown13C(0), Unknown140(0), Unknown144(true)
{
    Unknown0E8 = 6;
}

// FUNCTION: 0x10B31660 ??_GcMovieSubtitles@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B315F0's definition in this unit.
