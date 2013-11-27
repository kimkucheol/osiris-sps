// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "omlimg.h"
#include "omlimg.pypp.hpp"

namespace bp = boost::python;

struct OMLImg_wrapper : ::osiris::OMLImg, ::osiris::PythonWrapper< ::osiris::OMLImg > {

    OMLImg_wrapper(::osiris::OMLImg const & arg )
    : ::osiris::OMLImg( arg )
      , ::osiris::PythonWrapper< ::osiris::OMLImg >(){
        // copy constructor
        
    }

    OMLImg_wrapper(::osiris::String const & tag )
    : ::osiris::OMLImg( boost::ref(tag) )
      , ::osiris::PythonWrapper< ::osiris::OMLImg >(){
        // constructor
    
    }

    virtual ::osiris::String processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processHtml = this->get_override( "processHtml" ) )
            return func_processHtml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::OMLImg::processHtml( i, context );
        }
    }
    
    ::osiris::String default_processHtml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLImg::processHtml( i, context );
    }

    virtual ::std::wstring onEncodeParam( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context, ::std::wstring const & name, ::std::wstring const & value ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEncodeParam = this->get_override( "onEncodeParam" ) )
            return func_onEncodeParam( i, context, name, value ).operator std::wstring();
        else{
            __pystate.leave();
            return this->::osiris::OMLImg::onEncodeParam( i, context, name, value );
        }
    }
    
    ::std::wstring default_onEncodeParam( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context, ::std::wstring const & name, ::std::wstring const & value ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLImg::onEncodeParam( i, context, name, value );
    }

    virtual bool allowRowMode(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_allowRowMode = this->get_override( "allowRowMode" ) )
            return func_allowRowMode(  );
        else{
            __pystate.leave();
            return this->::osiris::OMLHtmlWrapper::allowRowMode(  );
        }
    }
    
    bool default_allowRowMode(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::OMLHtmlWrapper::allowRowMode( );
    }

    virtual ::osiris::String processOsml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_processOsml = this->get_override( "processOsml" ) )
            return func_processOsml( i, context );
        else{
            __pystate.leave();
            return this->::osiris::IOMLCode::processOsml( i, context );
        }
    }
    
    ::osiris::String default_processOsml( ::boost::shared_ptr< osiris::OMLItem > i, ::boost::shared_ptr< osiris::OMLContext > context ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IOMLCode::processOsml( i, context );
    }

};

void register_OMLImg_class(){

    { //::osiris::OMLImg
        typedef ::boost::python::class_< OMLImg_wrapper, ::boost::python::bases< ::osiris::OMLHtmlWrapper > > OMLImg_exposer_t;
        OMLImg_exposer_t OMLImg_exposer = OMLImg_exposer_t( "OMLImg", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("tag") )) );
        ::boost::python::scope OMLImg_scope( OMLImg_exposer );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::OMLImg >();
        { //::osiris::OMLImg::processHtml
        
            typedef ::osiris::String ( ::osiris::OMLImg::*processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLImg_wrapper::*default_processHtml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLImg_exposer.def( 
                "processHtml"
                , processHtml_function_type(&::osiris::OMLImg::processHtml)
                , default_processHtml_function_type(&OMLImg_wrapper::default_processHtml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
        { //::osiris::OMLImg::onEncodeParam
        
            typedef ::std::wstring ( ::osiris::OMLImg::*onEncodeParam_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext >,::std::wstring const &,::std::wstring const & ) const;
            typedef ::std::wstring ( OMLImg_wrapper::*default_onEncodeParam_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext >,::std::wstring const &,::std::wstring const & ) const;
            
            OMLImg_exposer.def( 
                "onEncodeParam"
                , onEncodeParam_function_type(&::osiris::OMLImg::onEncodeParam)
                , default_onEncodeParam_function_type(&OMLImg_wrapper::default_onEncodeParam)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context"), ::boost::python::arg("name"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::OMLHtmlWrapper::allowRowMode
        
            typedef bool ( ::osiris::OMLHtmlWrapper::*allowRowMode_function_type )(  ) const;
            typedef bool ( OMLImg_wrapper::*default_allowRowMode_function_type )(  ) const;
            
            OMLImg_exposer.def( 
                "allowRowMode"
                , allowRowMode_function_type(&::osiris::OMLHtmlWrapper::allowRowMode)
                , default_allowRowMode_function_type(&OMLImg_wrapper::default_allowRowMode) );
        
        }
        { //::osiris::IOMLCode::processOsml
        
            typedef ::osiris::String ( ::osiris::IOMLCode::*processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            typedef ::osiris::String ( OMLImg_wrapper::*default_processOsml_function_type )( ::boost::shared_ptr< osiris::OMLItem >,::boost::shared_ptr< osiris::OMLContext > ) const;
            
            OMLImg_exposer.def( 
                "processOsml"
                , processOsml_function_type(&::osiris::IOMLCode::processOsml)
                , default_processOsml_function_type(&OMLImg_wrapper::default_processOsml)
                , ( ::boost::python::arg("i"), ::boost::python::arg("context") ) );
        
        }
    }

}
