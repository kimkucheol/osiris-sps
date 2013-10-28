// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idepickerobject.h"
#include "xmlstylesheet.h"
#include "ideskin.h"
#include "idesession.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "idepickerobject.pypp.hpp"

namespace bp = boost::python;

struct IdePickerObject_wrapper : ::osiris::IdePickerObject, ::osiris::PythonWrapper< ::osiris::IdePickerObject > {

    IdePickerObject_wrapper( )
    : ::osiris::IdePickerObject( )
      , ::osiris::PythonWrapper< ::osiris::IdePickerObject >(){
        // null constructor
    
    }

    static boost::python::object getOnlyObjectsWithChilds( ::osiris::IdePickerObject const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getOnlyObjectsWithChilds();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getMultipleSelection( ::osiris::IdePickerObject const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getMultipleSelection();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual ::osiris::String getValue(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getValue = this->get_override( "getValue" ) )
            return func_getValue(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerObject::getValue(  );
        }
    }
    
    ::osiris::String default_getValue(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerObject::getValue( );
    }

    virtual ::osiris::String getTemplatePath(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getTemplatePath = this->get_override( "getTemplatePath" ) )
            return func_getTemplatePath(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerObject::getTemplatePath(  );
        }
    }
    
    ::osiris::String default_getTemplatePath(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerObject::getTemplatePath( );
    }

    static void setMultipleSelection( ::osiris::IdePickerObject & inst, bool value ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setMultipleSelection(value);
        __pythreadSaver.restore();
    }

    static void setOnlyObjectsWithChilds( ::osiris::IdePickerObject & inst, bool value ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setOnlyObjectsWithChilds(value);
        __pythreadSaver.restore();
    }

    virtual void setValue( ::osiris::String const & id ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_setValue = this->get_override( "setValue" ) )
            func_setValue( boost::ref(id) );
        else{
            __pystate.leave();
            this->::osiris::IdePickerObject::setValue( boost::ref(id) );
        }
    }
    
    void default_setValue( ::osiris::String const & id ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerObject::setValue( boost::ref(id) );
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(osiris::null) ) const {
        return ::osiris::IHtmlControl::encodeEvent( boost::ref(eventName), boost::python::ptr(e) );
    }

    virtual ::boost::shared_ptr< osiris::HttpSession > getSession(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSession = this->get_override( "getSession" ) )
            return func_getSession(  );
        else{
            __pystate.leave();
            return this->::osiris::IHtmlControl::getSession(  );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSession > default_getSession(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHtmlControl::getSession( );
    }

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInit( );
    }

    virtual void onInitStylesheet(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInitStylesheet = this->get_override( "onInitStylesheet" ) )
            func_onInitStylesheet(  );
        else{
            __pystate.leave();
            this->::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet(  );
        }
    }
    
    virtual void default_onInitStylesheet(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet( );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onRender( boost::ref(writer) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
    }

    virtual void renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderChilds = this->get_override( "renderChilds" ) )
            func_renderChilds( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
        }
    }
    
    void default_renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
    }

    void saveViewState( ::osiris::DataTree & states ){
        ::osiris::IHtmlControl::saveViewState( boost::ref(states) );
    }

};

void register_IdePickerObject_class(){

    { //::osiris::IdePickerObject
        typedef ::boost::python::class_< IdePickerObject_wrapper, ::boost::python::bases< ::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > > >, ::boost::noncopyable > IdePickerObject_exposer_t;
        IdePickerObject_exposer_t IdePickerObject_exposer = IdePickerObject_exposer_t( "IdePickerObject", ::boost::python::init< >() );
        ::boost::python::scope IdePickerObject_scope( IdePickerObject_exposer );
        { //::osiris::IdePickerObject::getOnlyObjectsWithChilds
        
            typedef boost::python::object ( *getOnlyObjectsWithChilds_function_type )( ::osiris::IdePickerObject const & );
            
            IdePickerObject_exposer.def( 
                "getOnlyObjectsWithChilds"
                , getOnlyObjectsWithChilds_function_type( &IdePickerObject_wrapper::getOnlyObjectsWithChilds ) );
        
        }
        { //::osiris::IdePickerObject::getMultipleSelection
        
            typedef boost::python::object ( *getMultipleSelection_function_type )( ::osiris::IdePickerObject const & );
            
            IdePickerObject_exposer.def( 
                "getMultipleSelection"
                , getMultipleSelection_function_type( &IdePickerObject_wrapper::getMultipleSelection ) );
        
        }
        { //::osiris::IdePickerObject::getValue
        
            typedef ::osiris::String ( ::osiris::IdePickerObject::*getValue_function_type )(  ) const;
            typedef ::osiris::String ( IdePickerObject_wrapper::*default_getValue_function_type )(  ) const;
            
            IdePickerObject_exposer.def( 
                "getValue"
                , getValue_function_type(&::osiris::IdePickerObject::getValue)
                , default_getValue_function_type(&IdePickerObject_wrapper::default_getValue) );
        
        }
        { //::osiris::IdePickerObject::getTemplatePath
        
            typedef ::osiris::String ( ::osiris::IdePickerObject::*getTemplatePath_function_type )(  ) ;
            typedef ::osiris::String ( IdePickerObject_wrapper::*default_getTemplatePath_function_type )(  ) ;
            
            IdePickerObject_exposer.def( 
                "getTemplatePath"
                , getTemplatePath_function_type(&::osiris::IdePickerObject::getTemplatePath)
                , default_getTemplatePath_function_type(&IdePickerObject_wrapper::default_getTemplatePath) );
        
        }
        { //::osiris::IdePickerObject::setMultipleSelection
        
            typedef void ( *setMultipleSelection_function_type )( ::osiris::IdePickerObject &,bool );
            
            IdePickerObject_exposer.def( 
                "setMultipleSelection"
                , setMultipleSelection_function_type( &IdePickerObject_wrapper::setMultipleSelection )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::IdePickerObject::setOnlyObjectsWithChilds
        
            typedef void ( *setOnlyObjectsWithChilds_function_type )( ::osiris::IdePickerObject &,bool );
            
            IdePickerObject_exposer.def( 
                "setOnlyObjectsWithChilds"
                , setOnlyObjectsWithChilds_function_type( &IdePickerObject_wrapper::setOnlyObjectsWithChilds )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::IdePickerObject::setValue
        
            typedef void ( ::osiris::IdePickerObject::*setValue_function_type )( ::osiris::String const & ) ;
            typedef void ( IdePickerObject_wrapper::*default_setValue_function_type )( ::osiris::String const & ) ;
            
            IdePickerObject_exposer.def( 
                "setValue"
                , setValue_function_type(&::osiris::IdePickerObject::setValue)
                , default_setValue_function_type(&IdePickerObject_wrapper::default_setValue)
                , ( ::boost::python::arg("id") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IdePickerObject_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IdePickerObject_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IdePickerObject_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IdePickerObject_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IdePickerObject_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IdePickerObject_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IdePickerObject_wrapper::*default_getSession_function_type )(  ) const;
            
            IdePickerObject_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IdePickerObject_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IdePickerObject_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IdePickerObject_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IdePickerObject_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInit
        
            typedef ::osiris::IdePickerObject exported_class_t;
            typedef void ( IdePickerObject_wrapper::*onInit_function_type )(  ) ;
            
            IdePickerObject_exposer.def( 
                "onInit"
                , onInit_function_type( &IdePickerObject_wrapper::default_onInit ) );
        
        }
        { //::osiris::IXSLRenderer< osiris::IPortalPageControl< osiris::IHtmlControl > >::onInitStylesheet
        
            typedef ::osiris::IdePickerObject exported_class_t;
            typedef void ( IdePickerObject_wrapper::*onInitStylesheet_function_type )(  ) ;
            
            IdePickerObject_exposer.def( 
                "onInitStylesheet"
                , onInitStylesheet_function_type( &IdePickerObject_wrapper::default_onInitStylesheet ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( IdePickerObject_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerObject_exposer.def( 
                "onRender"
                , onRender_function_type( &IdePickerObject_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdePickerObject_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerObject_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IdePickerObject_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdePickerObject_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerObject_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IdePickerObject_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IdePickerObject_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdePickerObject_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IdePickerObject_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "onlyObjectsWithChilds"[fget=::osiris::IdePickerObject::getOnlyObjectsWithChilds, fset=::osiris::IdePickerObject::setOnlyObjectsWithChilds]
        
            typedef bool ( ::osiris::IdePickerObject::*fget )(  ) const;
            typedef void ( ::osiris::IdePickerObject::*fset )( bool ) ;
            
            IdePickerObject_exposer.add_property( 
                "onlyObjectsWithChilds"
                , fget( &::osiris::IdePickerObject::getOnlyObjectsWithChilds )
                , fset( &::osiris::IdePickerObject::setOnlyObjectsWithChilds )
                , "get\\set property, built on top of \"bool osiris::IdePickerObject::getOnlyObjectsWithChilds() const [member function]\" and \"void osiris::IdePickerObject::setOnlyObjectsWithChilds(bool value) [member function]\"" );
        
        }
        { //property "multipleSelection"[fget=::osiris::IdePickerObject::getMultipleSelection, fset=::osiris::IdePickerObject::setMultipleSelection]
        
            typedef bool ( ::osiris::IdePickerObject::*fget )(  ) const;
            typedef void ( ::osiris::IdePickerObject::*fset )( bool ) ;
            
            IdePickerObject_exposer.add_property( 
                "multipleSelection"
                , fget( &::osiris::IdePickerObject::getMultipleSelection )
                , fset( &::osiris::IdePickerObject::setMultipleSelection )
                , "get\\set property, built on top of \"bool osiris::IdePickerObject::getMultipleSelection() const [member function]\" and \"void osiris::IdePickerObject::setMultipleSelection(bool value) [member function]\"" );
        
        }
        { //property "value"[fget=::osiris::IdePickerObject::getValue, fset=::osiris::IdePickerObject::setValue]
        
            typedef ::osiris::String ( ::osiris::IdePickerObject::*fget )(  ) const;
            typedef void ( ::osiris::IdePickerObject::*fset )( ::osiris::String const & ) ;
            
            IdePickerObject_exposer.add_property( 
                "value"
                , fget( &::osiris::IdePickerObject::getValue )
                , fset( &::osiris::IdePickerObject::setValue )
                , "get\\set property, built on top of \"osiris::String osiris::IdePickerObject::getValue() const [member function]\" and \"void osiris::IdePickerObject::setValue(osiris::String const & id) [member function]\"" );
        
        }
    }

}