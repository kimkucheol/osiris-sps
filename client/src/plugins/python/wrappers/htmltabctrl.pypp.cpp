// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmltabctrl.h"
#include "htmldiv.h"
#include "htmltabpage.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmltabctrl.pypp.hpp"

namespace bp = boost::python;

struct HtmlTabCtrl_wrapper : ::osiris::HtmlTabCtrl, ::osiris::PythonWrapper< ::osiris::HtmlTabCtrl > {

    HtmlTabCtrl_wrapper( )
    : ::osiris::HtmlTabCtrl( )
      , ::osiris::PythonWrapper< ::osiris::HtmlTabCtrl >(){
        // null constructor
    
    }

    static boost::python::object getView( ::osiris::HtmlTabCtrl const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlDiv> result = inst.getView();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getCurSel( ::osiris::HtmlTabCtrl const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::int32 result = inst.getCurSel();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getPagesCount( ::osiris::HtmlTabCtrl const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::int32 result = inst.getPagesCount();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object addPage_53422f5c8393000c79ab42003dfbfe34( ::osiris::HtmlTabCtrl & inst, ::osiris::String const & caption=(osiris::String::EMPTY), ::boost::shared_ptr< osiris::HtmlImage > icon=(osiris::null) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlTabPage> result = inst.addPage(caption, icon);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object addPage_e03f3d7c56b0a8cb38e4619da04d1f38( ::osiris::HtmlTabCtrl & inst, ::osiris::String const & caption=(osiris::String::EMPTY), ::osiris::String const & image_path=(osiris::String::EMPTY) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::HtmlTabPage> result = inst.addPage(caption, image_path);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::HtmlTabCtrl::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlTabCtrl::onInit( );
    }

    virtual ::boost::shared_ptr< osiris::HtmlTabPage > createPage( ::osiris::int32 index ) const {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_createPage = this->get_override( "createPage" ) )
            return func_createPage( index );
        else{
            __pystate.leave();
            return this->::osiris::HtmlTabCtrl::createPage( index );
        }
    }
    
    virtual ::boost::shared_ptr< osiris::HtmlTabPage > default_createPage( ::osiris::int32 index ) const {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::HtmlTabCtrl::createPage( index );
    }

    static boost::python::object getPageLink( ::osiris::HtmlTabCtrl & inst, ::osiris::uint32 index ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = inst.getPageLink(index);
        __pythreadSaver.restore();
        return boost::python::object( result );
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

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoad( );
    }

    virtual void onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoadViewState = this->get_override( "onLoadViewState" ) )
            func_onLoadViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onPreRender( );
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

    virtual void onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onSaveViewState = this->get_override( "onSaveViewState" ) )
            func_onSaveViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
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

void register_HtmlTabCtrl_class(){

    { //::osiris::HtmlTabCtrl
        typedef ::boost::python::class_< HtmlTabCtrl_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable > HtmlTabCtrl_exposer_t;
        HtmlTabCtrl_exposer_t HtmlTabCtrl_exposer = HtmlTabCtrl_exposer_t( "HtmlTabCtrl", ::boost::python::init< >() );
        ::boost::python::scope HtmlTabCtrl_scope( HtmlTabCtrl_exposer );
        { //::osiris::HtmlTabCtrl::getView
        
            typedef boost::python::object ( *getView_function_type )( ::osiris::HtmlTabCtrl const & );
            
            HtmlTabCtrl_exposer.def( 
                "getView"
                , getView_function_type( &HtmlTabCtrl_wrapper::getView ) );
        
        }
        { //::osiris::HtmlTabCtrl::getCurSel
        
            typedef boost::python::object ( *getCurSel_function_type )( ::osiris::HtmlTabCtrl const & );
            
            HtmlTabCtrl_exposer.def( 
                "getCurSel"
                , getCurSel_function_type( &HtmlTabCtrl_wrapper::getCurSel ) );
        
        }
        { //::osiris::HtmlTabCtrl::getPagesCount
        
            typedef boost::python::object ( *getPagesCount_function_type )( ::osiris::HtmlTabCtrl const & );
            
            HtmlTabCtrl_exposer.def( 
                "getPagesCount"
                , getPagesCount_function_type( &HtmlTabCtrl_wrapper::getPagesCount ) );
        
        }
        { //::osiris::HtmlTabCtrl::addPage
        
            typedef boost::python::object ( *addPage_function_type )( ::osiris::HtmlTabCtrl &,::osiris::String const &,::boost::shared_ptr<osiris::HtmlImage> );
            
            HtmlTabCtrl_exposer.def( 
                "addPage"
                , addPage_function_type( &HtmlTabCtrl_wrapper::addPage_53422f5c8393000c79ab42003dfbfe34 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("caption")=(osiris::String::EMPTY), ::boost::python::arg("icon")=(osiris::null) ) );
        
        }
        { //::osiris::HtmlTabCtrl::addPage
        
            typedef boost::python::object ( *addPage_function_type )( ::osiris::HtmlTabCtrl &,::osiris::String const &,::osiris::String const & );
            
            HtmlTabCtrl_exposer.def( 
                "addPage"
                , addPage_function_type( &HtmlTabCtrl_wrapper::addPage_e03f3d7c56b0a8cb38e4619da04d1f38 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("caption")=(osiris::String::EMPTY), ::boost::python::arg("image_path")=(osiris::String::EMPTY) ) );
        
        }
        { //::osiris::HtmlTabCtrl::onInit
        
            typedef void ( HtmlTabCtrl_wrapper::*onInit_function_type )(  ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onInit"
                , onInit_function_type( &HtmlTabCtrl_wrapper::default_onInit ) );
        
        }
        { //::osiris::HtmlTabCtrl::createPage
        
            typedef ::boost::shared_ptr< osiris::HtmlTabPage > ( HtmlTabCtrl_wrapper::*createPage_function_type )( ::osiris::int32 ) const;
            
            HtmlTabCtrl_exposer.def( 
                "createPage"
                , createPage_function_type( &HtmlTabCtrl_wrapper::default_createPage )
                , ( ::boost::python::arg("index") ) );
        
        }
        { //::osiris::HtmlTabCtrl::getPageLink
        
            typedef boost::python::object ( *getPageLink_function_type )( ::osiris::HtmlTabCtrl &,::osiris::uint32 );
            
            HtmlTabCtrl_exposer.def( 
                "getPageLink"
                , getPageLink_function_type( &HtmlTabCtrl_wrapper::getPageLink )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("index") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( HtmlTabCtrl_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            HtmlTabCtrl_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &HtmlTabCtrl_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( HtmlTabCtrl_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            HtmlTabCtrl_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &HtmlTabCtrl_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( HtmlTabCtrl_wrapper::*default_getSession_function_type )(  ) const;
            
            HtmlTabCtrl_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&HtmlTabCtrl_wrapper::default_getSession) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( HtmlTabCtrl_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onEvent"
                , onEvent_function_type( &HtmlTabCtrl_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( HtmlTabCtrl_wrapper::*onLoad_function_type )(  ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onLoad"
                , onLoad_function_type( &HtmlTabCtrl_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( HtmlTabCtrl_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &HtmlTabCtrl_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( HtmlTabCtrl_wrapper::*onPreRender_function_type )(  ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &HtmlTabCtrl_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::IHtmlControl::onRender
        
            typedef void ( HtmlTabCtrl_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onRender"
                , onRender_function_type( &HtmlTabCtrl_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( HtmlTabCtrl_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlTabCtrl_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &HtmlTabCtrl_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlTabCtrl_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTabCtrl_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&HtmlTabCtrl_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( HtmlTabCtrl_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            HtmlTabCtrl_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&HtmlTabCtrl_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( HtmlTabCtrl_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            HtmlTabCtrl_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &HtmlTabCtrl_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "view"[fget=::osiris::HtmlTabCtrl::getView]
        
            typedef ::boost::shared_ptr<osiris::HtmlDiv> ( ::osiris::HtmlTabCtrl::*fget )(  ) const;
            
            HtmlTabCtrl_exposer.add_property( 
                "view"
                , fget( &::osiris::HtmlTabCtrl::getView )
                , "get property, built on top of \"boost::shared_ptr<osiris::HtmlDiv> osiris::HtmlTabCtrl::getView() const [member function]\"" );
        
        }
        { //property "curSel"[fget=::osiris::HtmlTabCtrl::getCurSel]
        
            typedef ::osiris::int32 ( ::osiris::HtmlTabCtrl::*fget )(  ) const;
            
            HtmlTabCtrl_exposer.add_property( 
                "curSel"
                , fget( &::osiris::HtmlTabCtrl::getCurSel )
                , "get property, built on top of \"osiris::int32 osiris::HtmlTabCtrl::getCurSel() const [member function]\"" );
        
        }
        { //property "pagesCount"[fget=::osiris::HtmlTabCtrl::getPagesCount]
        
            typedef ::osiris::int32 ( ::osiris::HtmlTabCtrl::*fget )(  ) const;
            
            HtmlTabCtrl_exposer.add_property( 
                "pagesCount"
                , fget( &::osiris::HtmlTabCtrl::getPagesCount )
                , "get property, built on top of \"osiris::int32 osiris::HtmlTabCtrl::getPagesCount() const [member function]\"" );
        
        }
    }

}