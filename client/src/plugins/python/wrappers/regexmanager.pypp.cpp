// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "regexmanager.h"
#include "regexmanager.pypp.hpp"

namespace bp = boost::python;

struct RegexManager_wrapper : ::osiris::RegexManager, ::osiris::PythonWrapper< ::osiris::RegexManager > {

    RegexManager_wrapper( )
    : ::osiris::RegexManager( )
      , ::osiris::PythonWrapper< ::osiris::RegexManager >(){
        // null constructor
    
    }

    static boost::python::object match( ::osiris::RegexManager const & inst, ::osiris::String const & str, ::osiris::String const & regex, bool nocase=true ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.match(str, regex, nocase);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object replace( ::osiris::RegexManager const & inst, ::osiris::String const & str, ::osiris::String const & regex, ::osiris::String const & format, bool nocase=true ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String result = inst.replace(str, regex, format, nocase);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getRegex( ::osiris::RegexManager const & inst, ::osiris::String const & regex, bool nocase=true ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<boost::wregex> result = inst.getRegex(regex, nocase);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

};

void register_RegexManager_class(){

    ::boost::python::class_< RegexManager_wrapper, ::boost::python::bases< ::osiris::StaticSingleton< osiris::RegexManager, true > >, ::boost::noncopyable >( "RegexManager", ::boost::python::no_init )    
        .def( ::boost::python::init< >() )    
        .def( 
            "match"
            , (boost::python::object (*)( ::osiris::RegexManager const &,::osiris::String const &,::osiris::String const &,bool ))( &RegexManager_wrapper::match )
            , ( ::boost::python::arg("inst"), ::boost::python::arg("str"), ::boost::python::arg("regex"), ::boost::python::arg("nocase")=(bool)(true) ) )    
        .def( 
            "replace"
            , (boost::python::object (*)( ::osiris::RegexManager const &,::osiris::String const &,::osiris::String const &,::osiris::String const &,bool ))( &RegexManager_wrapper::replace )
            , ( ::boost::python::arg("inst"), ::boost::python::arg("str"), ::boost::python::arg("regex"), ::boost::python::arg("format"), ::boost::python::arg("nocase")=(bool)(true) ) )    
        .def( 
            "getRegex"
            , (boost::python::object (*)( ::osiris::RegexManager const &,::osiris::String const &,bool ))( &RegexManager_wrapper::getRegex )
            , ( ::boost::python::arg("inst"), ::boost::python::arg("regex"), ::boost::python::arg("nocase")=(bool)(true) ) );

}
