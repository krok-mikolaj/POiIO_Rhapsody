/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-06
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Thu, 28, May 2026  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class BramaWjaz;

//## auto_generated
class Odbiornik;

//#[ ignore
#define otwieranie_Default_id 18601

#define zamykanie_Default_id 18602

#define eventmessage_0_Default_id 18603

#define click_Default_id 18604
//#]

//## package Default



//## event otwieranie()
class otwieranie : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedotwieranie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    otwieranie();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedotwieranie : virtual public AOMEvent {
    DECLARE_META_EVENT(otwieranie)
};
//#]
#endif // _OMINSTRUMENT

//## event zamykanie()
class zamykanie : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedzamykanie;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    zamykanie();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedzamykanie : virtual public AOMEvent {
    DECLARE_META_EVENT(zamykanie)
};
//#]
#endif // _OMINSTRUMENT

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventmessage_0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventmessage_0 : virtual public AOMEvent {
    DECLARE_META_EVENT(eventmessage_0)
};
//#]
#endif // _OMINSTRUMENT

//## event click()
class click : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedclick;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    click();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedclick : virtual public AOMEvent {
    DECLARE_META_EVENT(click)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
