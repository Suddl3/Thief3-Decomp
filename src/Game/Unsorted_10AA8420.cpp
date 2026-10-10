// Game/Unsorted_10AA8420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

typedef struct _iobuf FILE;

extern char DAT_10e6c0f0[];

extern "C" int fprintf(FILE* File, const char* Format, ...);

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_1090A780
{
public:
    ~Class_1090A780()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10AA83E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();

    Class_1090A780 FUN_10aa83e0();
};

class Class_10E6D990 : public Class_10AA83E0
{
public:
    virtual int FUN_10aa8490(FILE* File, int Param);

    char Unknown04[4];
    char* Unknown08;
};

class Class_10A80CB0
{
public:
    ~Class_10A80CB0();

    int Unknown00;
    int Unknown04;
};

class Class_10AA8420_Unknown08_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10AA8420_Unknown08_Unknown00** A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Class_10AA8420_Unknown08_Unknown00** A);
};

class Class_10AA8420_Unknown08
{
public:
    Class_10AA8420_Unknown08_Unknown00* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10AA8420 : public Class_10A80CB0
{
public:
    ~Class_10AA8420();

    Class_10AA8420_Unknown08 Unknown08;
};

// FUNCTION: 0x10AA8420 ??1Class_10AA8420@@QAE@XZ
Class_10AA8420::~Class_10AA8420()
{
    Class_10AA8420_Unknown08* Handle = &Unknown08;
    if (Handle->Unknown00 && Handle->Unknown00->Virtual7(&Handle->Unknown00))
    {
        Handle->Unknown00->Virtual1(&Handle->Unknown00);
        Handle->Unknown04 = -1;
        Handle->Unknown08 = -1;
    }
}

// FUNCTION: 0x10AA8490 ?FUN_10aa8490@Class_10E6D990@@UAEHPAU_iobuf@@H@Z
int Class_10E6D990::FUN_10aa8490(FILE* File, int Param)
{
    fprintf(File, DAT_10e6c0f0, Unknown08, FUN_10aa83e0().Unknown00);
    return 1;
}
