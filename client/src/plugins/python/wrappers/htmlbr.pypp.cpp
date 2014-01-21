// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlbr.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "htmlbr.pypp.hpp"

namespace bp = boost::python;

struct HtmlBR_wrapper : ::osiris::HtmlBR, ::osiris::PythonWrapper< ::osiris::HtmlBR > {

    HtmlBR_wrapper( )
    : ::osiris::HtmlBR( )
      , ::osiris::PythonWrapper< ::osiris::HtmlBR >(){
        // null constructor
    
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlBR::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlBR::onRender( boost::ref(writer) );
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(nullptr) ) const {
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

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(nullptr) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onInit( );
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

void register_HtmlBR_class(){

    ::boost::python::class_< HtmlBR_wrapper, ::boost::python::bases< ::osiris::IHtmlControl >, ::boost::noncopyable >( "HtmlBR", ::boost::python::init< >() )    
        .def( 
            "onRender"
            , (void ( HtmlBR_wrapper::* )( ::osiris::HtmlWriter & ) )(&HtmlBR_wrapper::default_onRender)
            , ( ::boost::python::arg("writer") ) )    
        .def( 
            "decodeEvent"
            , (bool ( HtmlBR_wrapper::* )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const)(&HtmlBR_wrapper::decodeEvent)
            , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) )    
        .def( 
            "encodeEvent"
            , (::osiris::String ( HtmlBR_wrapper::* )( ::osiris::String const &,::osiris::HtmlEvent const * ) const)(&HtmlBR_wrapper::encodeEvent)
            , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(nullptr) ) )    
        .def( 
            "getSession"
            , (::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::* )(  ) const)(&::osiris::IHtmlControl::getSession)
            , (::boost::shared_ptr< osiris::HttpSession > ( HtmlBR_wrapper::* )(  ) const)(&HtmlBR_wrapper::default_getSession) )    
        .def( 
            "onEvent"
            , (void ( HtmlBR_wrapper::* )( ::osiris::String const &,::osiris::IEvent * ) )(&HtmlBR_wrapper::default_onEvent)
            , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(nullptr) ) )    
        .def( 
            "onInit"
            , (void ( HtmlBR_wrapper::* )(  ) )(&HtmlBR_wrapper::default_onInit) )    
        .def( 
            "onLoad"
            , (void ( HtmlBR_wrapper::* )(  ) )(&HtmlBR_wrapper::default_onLoad) )    
        .def( 
            "onLoadViewState"
            , (void ( HtmlBR_wrapper::* )( ::osiris::DataTree const & ) )(&HtmlBR_wrapper::default_onLoadViewState)
            , ( ::boost::python::arg("state") ) )    
        .def( 
            "onPreRender"
            , (void ( HtmlBR_wrapper::* )(  ) )(&HtmlBR_wrapper::default_onPreRender) )    
        .def( 
            "onSaveViewState"
            , (void ( HtmlBR_wrapper::* )( ::osiris::DataTree & ) )(&HtmlBR_wrapper::default_onSaveViewState)
            , ( ::boost::python::arg("state") ) )    
        .def( 
            "renderAttributes"
            , (void ( ::osiris::IHtmlControl::* )( ::osiris::HtmlWriter & ) )(&::osiris::IHtmlControl::renderAttributes)
            , (void ( HtmlBR_wrapper::* )( ::osiris::HtmlWriter & ) )(&HtmlBR_wrapper::default_renderAttributes)
            , ( ::boost::python::arg("writer") ) )    
        .def( 
            "renderChilds"
            , (void ( ::osiris::IHtmlControl::* )( ::osiris::HtmlWriter & ) )(&::osiris::IHtmlControl::renderChilds)
            , (void ( HtmlBR_wrapper::* )( ::osiris::HtmlWriter & ) )(&HtmlBR_wrapper::default_renderChilds)
            , ( ::boost::python::arg("writer") ) )    
        .def( 
            "saveViewState"
            , (void ( HtmlBR_wrapper::* )( ::osiris::DataTree & ) )(&HtmlBR_wrapper::saveViewState)
            , ( ::boost::python::arg("states") ) );

}
