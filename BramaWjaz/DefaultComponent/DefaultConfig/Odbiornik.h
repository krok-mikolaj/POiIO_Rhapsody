/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-06
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Thu, 28, May 2026  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/

#ifndef Odbiornik_H
#define Odbiornik_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Odbiornik
#include "BramaWjaz.h"
//#[ ignore
#define OMAnim_Default_Odbiornik_inverse_kierunek_ARGS_DECLARATION

#define OMAnim_Default_Odbiornik_message_0_ARGS_DECLARATION
//#]

//## package Default

//## class Odbiornik
class Odbiornik : public BramaWjaz {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOdbiornik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Odbiornik(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Odbiornik();
    
    ////    Operations    ////
    
    //## operation inverse_kierunek()
    void inverse_kierunek();
    
    //## operation message_0()
    void message_0();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getKierunek() const;
    
    //## auto_generated
    void setKierunek(int p_kierunek);
    
    //## auto_generated
    BramaWjaz* getItsBramaWjaz() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int kierunek;		//## attribute kierunek
    
    ////    Relations and components    ////
    
    BramaWjaz itsBramaWjaz;		//## link itsBramaWjaz
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // ZamykanieBramyCorrectedName:
    //## statechart_method
    inline bool ZamykanieBramyCorrectedName_IN() const;
    
    // StanBramy:
    //## statechart_method
    inline bool StanBramy_IN() const;
    
    // OtwieranieBramyCorrectedName:
    //## statechart_method
    inline bool OtwieranieBramyCorrectedName_IN() const;
    
    // Oczekiwanie:
    //## statechart_method
    inline bool Oczekiwanie_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Odbiornik_Enum {
        OMNonState = 0,
        ZamykanieBramyCorrectedName = 4,
        StanBramy = 5,
        OtwieranieBramyCorrectedName = 6,
        Oczekiwanie = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_Odbiornik_inverse_kierunek)

DECLARE_OPERATION_CLASS(Default_Odbiornik_message_0)

//#[ ignore
class OMAnimatedOdbiornik : public OMAnimatedBramaWjaz {
    DECLARE_REACTIVE_META(Odbiornik, OMAnimatedOdbiornik)
    
    DECLARE_META_OP(Default_Odbiornik_inverse_kierunek)
    
    DECLARE_META_OP(Default_Odbiornik_message_0)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ZamykanieBramyCorrectedName_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StanBramy_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OtwieranieBramyCorrectedName_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekiwanie_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Odbiornik::rootState_IN() const {
    return true;
}

inline bool Odbiornik::ZamykanieBramyCorrectedName_IN() const {
    return rootState_subState == ZamykanieBramyCorrectedName;
}

inline bool Odbiornik::StanBramy_IN() const {
    return rootState_subState == StanBramy;
}

inline bool Odbiornik::OtwieranieBramyCorrectedName_IN() const {
    return rootState_subState == OtwieranieBramyCorrectedName;
}

inline bool Odbiornik::Oczekiwanie_IN() const {
    return rootState_subState == Oczekiwanie;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/
