// Game/Unsorted_10B67F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The objects the six fields of the class hold: they all use the same
// interface (Virtual56, Virtual70 and Virtual111).
class Class_10B67F30_Unknown2CC
{
public:
    virtual void Virtual0(), Virtual1(), Virtual2(), Virtual3(), Virtual4(), Virtual5(), Virtual6(), Virtual7();
    virtual void Virtual8(), Virtual9(), Virtual10(), Virtual11(), Virtual12(), Virtual13(), Virtual14(), Virtual15();
    virtual void Virtual16(), Virtual17(), Virtual18(), Virtual19(), Virtual20(), Virtual21(), Virtual22(), Virtual23();
    virtual void Virtual24(), Virtual25(), Virtual26(), Virtual27(), Virtual28(), Virtual29(), Virtual30(), Virtual31();
    virtual void Virtual32(), Virtual33(), Virtual34(), Virtual35(), Virtual36(), Virtual37(), Virtual38(), Virtual39();
    virtual void Virtual40(), Virtual41(), Virtual42(), Virtual43(), Virtual44(), Virtual45(), Virtual46(), Virtual47();
    virtual void Virtual48(), Virtual49(), Virtual50(), Virtual51(), Virtual52(), Virtual53(), Virtual54(), Virtual55();
    virtual void Virtual56(int A);
    virtual void Virtual57(), Virtual58(), Virtual59(), Virtual60(), Virtual61(), Virtual62(), Virtual63(), Virtual64();
    virtual void Virtual65(), Virtual66(), Virtual67(), Virtual68(), Virtual69();
    virtual void Virtual70(int A);
    virtual void Virtual71(), Virtual72(), Virtual73(), Virtual74(), Virtual75(), Virtual76(), Virtual77(), Virtual78();
    virtual void Virtual79(), Virtual80(), Virtual81(), Virtual82(), Virtual83(), Virtual84(), Virtual85(), Virtual86();
    virtual void Virtual87(), Virtual88(), Virtual89(), Virtual90(), Virtual91(), Virtual92(), Virtual93(), Virtual94();
    virtual void Virtual95(), Virtual96(), Virtual97(), Virtual98(), Virtual99(), Virtual100(), Virtual101(), Virtual102();
    virtual void Virtual103(), Virtual104(), Virtual105(), Virtual106(), Virtual107(), Virtual108(), Virtual109(), Virtual110();
    virtual void Virtual111(int A);
};

struct Struct_10B791E0_Entry;

// A copy of include/Game/Class_10B791E0.h: the class that owns the vtable
// this function sits in takes over the slot after the last Virtual.
class Class_10B791E0
{
public:
    virtual void Virtual0(), Virtual1(), Virtual2(), Virtual3(), Virtual4(), Virtual5(), Virtual6(), Virtual7();
    virtual void Virtual8(), Virtual9(), Virtual10(), Virtual11(), Virtual12(), Virtual13(), Virtual14(), Virtual15();
    virtual void Virtual16(), Virtual17(), Virtual18(), Virtual19(), Virtual20(), Virtual21(), Virtual22(), Virtual23();
    virtual void Virtual24(), Virtual25(), Virtual26(), Virtual27(), Virtual28(), Virtual29(), Virtual30(), Virtual31();
    virtual void Virtual32(), Virtual33(), Virtual34(), Virtual35(), Virtual36(), Virtual37(), Virtual38(), Virtual39();
    virtual void Virtual40(), Virtual41(), Virtual42(), Virtual43(), Virtual44(), Virtual45(), Virtual46(), Virtual47();
    virtual void Virtual48(), Virtual49(), Virtual50(), Virtual51(), Virtual52(), Virtual53(), Virtual54(), Virtual55();
    virtual void Virtual56(), Virtual57(), Virtual58(), Virtual59(), Virtual60(), Virtual61(), Virtual62(), Virtual63();
    virtual void Virtual64(), Virtual65(), Virtual66(), Virtual67(), Virtual68(), Virtual69(), Virtual70(), Virtual71();
    virtual void Virtual72(), Virtual73(), Virtual74(), Virtual75(), Virtual76(), Virtual77(), Virtual78(), Virtual79();
    virtual void Virtual80(), Virtual81(), Virtual82(), Virtual83(), Virtual84(), Virtual85(), Virtual86(), Virtual87();
    virtual void Virtual88(), Virtual89(), Virtual90(), Virtual91(), Virtual92(), Virtual93(), Virtual94(), Virtual95();
    virtual void Virtual96(), Virtual97(), Virtual98(), Virtual99(), Virtual100(), Virtual101(), Virtual102(), Virtual103();
    virtual void Virtual104(), Virtual105(), Virtual106(), Virtual107(), Virtual108(), Virtual109(), Virtual110(), Virtual111();
    virtual void Virtual112(), Virtual113(), Virtual114(), Virtual115(), Virtual116();
    virtual int Virtual117();
    virtual void Virtual118(), Virtual119();

    int FindValueByKey(int Key);
    void FUN_10b7a470();

    char Unknown04[0x2C4];
    Struct_10B791E0_Entry* m_Entries;
    Class_10B67F30_Unknown2CC* Unknown2CC;
    Class_10B67F30_Unknown2CC* Unknown2D0;
};

// The class whose vtable (0x10E858D0) holds this function, at slot 120.
class Class_10E858D0 : public Class_10B791E0
{
public:
    Class_10B67F30_Unknown2CC* Unknown2D4;
    Class_10B67F30_Unknown2CC* Unknown2D8;
    Class_10B67F30_Unknown2CC* Unknown2DC;
    Class_10B67F30_Unknown2CC* Unknown2E0;

    virtual void FUN_10b67f30();
};

// FUNCTION: 0x10B67F30 ?FUN_10b67f30@Class_10E858D0@@UAEXXZ
void Class_10E858D0::FUN_10b67f30()
{
    FUN_10b7a470();
    if (Unknown2CC)
    {
        int Found = FindValueByKey((int)Unknown2CC);
        int Mode = Found ? 0 : 3;
        Unknown2CC->Virtual56(2);
        Unknown2CC->Virtual70(Mode);
        Unknown2CC->Virtual111(0);
    }
    if (Unknown2D0)
    {
        int Found = FindValueByKey((int)Unknown2D0);
        int Mode = Found ? 0 : 3;
        Unknown2D0->Virtual56(2);
        Unknown2D0->Virtual70(Mode);
        Unknown2D0->Virtual111(0);
    }
    if (Unknown2D4)
    {
        int Found = FindValueByKey((int)Unknown2D4);
        int Mode = Found ? 0 : 3;
        Unknown2D4->Virtual56(2);
        Unknown2D4->Virtual70(Mode);
        Unknown2D4->Virtual111(0);
    }
    if (Unknown2D8)
    {
        int Found = FindValueByKey((int)Unknown2D8);
        int Mode = Found ? 0 : 3;
        Unknown2D8->Virtual56(2);
        Unknown2D8->Virtual70(Mode);
        Unknown2D8->Virtual111(0);
    }
    if (Unknown2DC)
    {
        int Found = FindValueByKey((int)Unknown2DC);
        int Mode = Found ? 0 : 3;
        Unknown2DC->Virtual56(2);
        Unknown2DC->Virtual70(Mode);
        Unknown2DC->Virtual111(0);
    }
    if (Unknown2E0)
    {
        Unknown2E0->Virtual56(2);
        Unknown2E0->Virtual70(0);
        Unknown2E0->Virtual111(0);
    }
}
