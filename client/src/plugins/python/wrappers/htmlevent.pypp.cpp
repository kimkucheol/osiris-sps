// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "htmlevent.h"
#include "htmlevent.pypp.hpp"

namespace bp = boost::python;

static boost::python::object empty_e839c850edbf59100ac031902931939a( ::osiris::HtmlEvent const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.empty();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object size_f6a95133b1077a5ae676152b19210eb0( ::osiris::HtmlEvent const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::size_t result = inst.size();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getArgs_dfc46256e97ee99319381f7dbc5b7d53( ::osiris::HtmlEvent const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::StringVector const & result = inst.getArgs();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::StringVector const & >( result ) );
}

static boost::python::object encode_c238444af7cb290a05b3bc5f1e9f7e1a( ::osiris::HtmlEvent const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.encode();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void add_8d62ff65919d9069ed5a150de96eaabb( ::osiris::HtmlEvent & inst, ::osiris::String const & arg ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.add(arg);
    __pythreadSaver.restore();
}

static void decode_ed3ee07b8dfbe686fe4d1468f7ddb26a( ::osiris::HtmlEvent & inst, ::osiris::String const & args ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.decode(args);
    __pythreadSaver.restore();
}

static boost::python::object get_fdf65d578983a4168dd2c52894f922b5( ::osiris::HtmlEvent const & inst, ::size_t index ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String const & result = inst.get(index);
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
}

void register_HtmlEvent_class(){

    { //::osiris::HtmlEvent
        typedef ::boost::python::class_< ::osiris::HtmlEvent, ::boost::python::bases< ::osiris::IEvent > > HtmlEvent_exposer_t;
        HtmlEvent_exposer_t HtmlEvent_exposer = HtmlEvent_exposer_t( "HtmlEvent", ::boost::python::init< >() );
        ::boost::python::scope HtmlEvent_scope( HtmlEvent_exposer );
        HtmlEvent_exposer.def( ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("value") )) );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::HtmlEvent >();
        { //::osiris::HtmlEvent::empty
        
            typedef boost::python::object ( *empty_function_type )( ::osiris::HtmlEvent const & );
            
            HtmlEvent_exposer.def( 
                "empty"
                , empty_function_type( &empty_e839c850edbf59100ac031902931939a ) );
        
        }
        { //::osiris::HtmlEvent::size
        
            typedef boost::python::object ( *size_function_type )( ::osiris::HtmlEvent const & );
            
            HtmlEvent_exposer.def( 
                "size"
                , size_function_type( &size_f6a95133b1077a5ae676152b19210eb0 ) );
        
        }
        { //::osiris::HtmlEvent::getArgs
        
            typedef boost::python::object ( *getArgs_function_type )( ::osiris::HtmlEvent const & );
            
            HtmlEvent_exposer.def( 
                "getArgs"
                , getArgs_function_type( &getArgs_dfc46256e97ee99319381f7dbc5b7d53 ) );
        
        }
        { //::osiris::HtmlEvent::encode
        
            typedef boost::python::object ( *encode_function_type )( ::osiris::HtmlEvent const & );
            
            HtmlEvent_exposer.def( 
                "encode"
                , encode_function_type( &encode_c238444af7cb290a05b3bc5f1e9f7e1a ) );
        
        }
        { //::osiris::HtmlEvent::add
        
            typedef void ( *add_function_type )( ::osiris::HtmlEvent &,::osiris::String const & );
            
            HtmlEvent_exposer.def( 
                "add"
                , add_function_type( &add_8d62ff65919d9069ed5a150de96eaabb )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("arg") ) );
        
        }
        { //::osiris::HtmlEvent::decode
        
            typedef void ( *decode_function_type )( ::osiris::HtmlEvent &,::osiris::String const & );
            
            HtmlEvent_exposer.def( 
                "decode"
                , decode_function_type( &decode_ed3ee07b8dfbe686fe4d1468f7ddb26a )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("args") ) );
        
        }
        { //::osiris::HtmlEvent::get
        
            typedef boost::python::object ( *get_function_type )( ::osiris::HtmlEvent const &,::size_t );
            
            HtmlEvent_exposer.def( 
                "get"
                , get_function_type( &get_fdf65d578983a4168dd2c52894f922b5 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("index") ) );
        
        }
        { //::osiris::HtmlEvent::operator[]
        
            typedef ::osiris::String const & ( ::osiris::HtmlEvent::*__getitem___function_type )( ::size_t ) const;
            
            HtmlEvent_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osiris::HtmlEvent::operator[] )
                , ( ::boost::python::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        HtmlEvent_exposer.def_readonly( "EMPTY", ::osiris::HtmlEvent::EMPTY );
        { //property "args"[fget=::osiris::HtmlEvent::getArgs]
        
            typedef ::osiris::StringVector const & ( ::osiris::HtmlEvent::*fget )(  ) const;
            
            HtmlEvent_exposer.add_property( 
                "args"
                , ::boost::python::make_function( 
                      fget( &::osiris::HtmlEvent::getArgs )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::StringVector const & osiris::HtmlEvent::getArgs() const [member function]\"" );
        
        }
    }

}