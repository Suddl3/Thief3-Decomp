// Game/PawnModelInitialization.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Local ABI views of the native fields used here. Slot 100 takes a controller
// pointer and a byte flag (RET 8); the shared signatures are corrected too.
// Restored describes the observed skip flag; its original name is unknown.
class UClass;

class AController;

class AAISensoryModel;

class AAIBehaviorModel;

class AAIMovementModel;

class AAICombatModel;

class AAIFactionModel;

class UObject {
public:
    int IsA(UClass* Type) const;
};

class APawn {
public:
    virtual void Virtual100(AController* Controller, bool Restored);
    char Pad04[0x204];
};

class AAIPawn : public APawn {
public:
    virtual void Virtual100(AController* Controller, bool Restored);
    unsigned int DiagnosticsOn:1;
    UClass* OldSensoryModelClass_MaintainedForCompatibility;
    AAISensoryModel* SensoryModel;
    UClass* OldBehaviorModelClass_MaintainedForCompatibility;
    AAIBehaviorModel* BehaviorModel;
    UClass* OldMovementModelClass_MaintainedForCompatibility;
    AAIMovementModel* MovementModel;
    UClass* OldCombatModelClass_MaintainedForCompatibility;
    AAICombatModel* CombatModel;
    UClass* OldFactionModelClass_MaintainedForCompatibility;
    AAIFactionModel* FactionModel;
    float PickpocketingAngleThreshold;
};

class Class_1098E330 {
public:
    int FUN_1098e330(int Id, int* Out);
    Class_1098E330* FUN_10ad2800();
};

class PawnModelWorld {
public:
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15();
    virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22(); virtual void Slot23();
    virtual void Slot24(); virtual void Slot25(); virtual void Slot26(); virtual void Slot27();
    virtual void Slot28(); virtual void Slot29(); virtual void Slot30(); virtual void Slot31();
    virtual void Slot32(); virtual void Slot33(); virtual void Slot34(); virtual void Slot35();
    virtual void Slot36(); virtual void Slot37(); virtual void Slot38(); virtual void Slot39();
    virtual void Slot40(); virtual void Slot41(); virtual void Slot42(); virtual void Slot43();
    virtual void Virtual44(void* Model, int Flag);
};

class Class_1096D780 {
public:
    void* Get();
};

class AAIPawnController {
private:
    static UClass* PrivateStaticClass;
public:
    static UClass* GetPrivateStaticClassAAIPawnController(const char* Package);
    static void InitializePrivateStaticClassAAIPawnController();
    static UClass* StaticClass() {
        if (!PrivateStaticClass) {
            PrivateStaticClass = GetPrivateStaticClassAAIPawnController("AICore");
            InitializePrivateStaticClassAAIPawnController();
        }
        return PrivateStaticClass;
    }
};

class Class_10B9BCD0 {
public:
    void FUN_10b9bcd0(int A, int B, int C, int D, int E, char F);
};

void* FUN_10bc3120(int ModelClass, AAIPawn* Pawn, int Context);

__forceinline int InheritedModelClass(AAIPawn* Pawn, int Id)
{
    int Value = 0;
    Class_1098E330* Object = (Class_1098E330*)Pawn;
    int Found = Object->FUN_1098e330(Id, &Value);
    Object = Object->FUN_10ad2800();
    while (Found) {
        if (Value) break;
        if (!Object) break;
        Found = Object->FUN_1098e330(Id, &Value);
        Object = Object->FUN_10ad2800();
    }
    return Value;
}

// FUNCTION: 0x10BC3190 ?Virtual100@AAIPawn@@UAEXPAVAController@@_N@Z
void AAIPawn::Virtual100(AController* Controller, bool Restored)
{
    int Context = 0;
    ((Class_1098E330*)this)->FUN_1098e330(0x2005B, &Context);
    if ((!SensoryModel || !BehaviorModel || !MovementModel || !CombatModel || !FactionModel) && !Restored) {
        if (SensoryModel) {
            ((PawnModelWorld*)((Class_1096D780*)this)->Get())->Virtual44(SensoryModel, 0);
            SensoryModel = 0;
        }
        if (BehaviorModel) {
            ((PawnModelWorld*)((Class_1096D780*)this)->Get())->Virtual44(BehaviorModel, 0);
            BehaviorModel = 0;
        }
        if (MovementModel) {
            ((PawnModelWorld*)((Class_1096D780*)this)->Get())->Virtual44(MovementModel, 0);
            MovementModel = 0;
        }
        if (CombatModel) {
            ((PawnModelWorld*)((Class_1096D780*)this)->Get())->Virtual44(CombatModel, 0);
            CombatModel = 0;
        }
        if (FactionModel) {
            ((PawnModelWorld*)((Class_1096D780*)this)->Get())->Virtual44(FactionModel, 0);
            FactionModel = 0;
        }
        int ModelClass = InheritedModelClass(this, 0x10422);
        if (ModelClass && !SensoryModel)
            SensoryModel = (AAISensoryModel*)FUN_10bc3120(ModelClass, this, Context);
        ModelClass = InheritedModelClass(this, 0x10423);
        if (ModelClass && !BehaviorModel)
            BehaviorModel = (AAIBehaviorModel*)FUN_10bc3120(ModelClass, this, Context);
        ModelClass = InheritedModelClass(this, 0x10424);
        if (ModelClass && !MovementModel)
            MovementModel = (AAIMovementModel*)FUN_10bc3120(ModelClass, this, Context);
        ModelClass = InheritedModelClass(this, 0x10425);
        if (ModelClass && !CombatModel)
            CombatModel = (AAICombatModel*)FUN_10bc3120(ModelClass, this, Context);
        ModelClass = InheritedModelClass(this, 0x10426);
        if (ModelClass && !FactionModel)
            FactionModel = (AAIFactionModel*)FUN_10bc3120(ModelClass, this, Context);
    }
    if (Controller && ((UObject*)Controller)->IsA(AAIPawnController::StaticClass()))
        ((Class_10B9BCD0*)Controller)->FUN_10b9bcd0((int)SensoryModel, (int)BehaviorModel,
            (int)MovementModel, (int)CombatModel, (int)FactionModel, (char)DiagnosticsOn);
    APawn::Virtual100(Controller, Restored);
}
