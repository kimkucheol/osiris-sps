// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "cryptmanager.h"
#include "cryptmanagersingleton.pypp.hpp"

namespace bp = boost::python;

struct StaticSingleton_less__osiris_scope_CryptManager_comma__true__greater__wrapper : ::osiris::StaticSingleton< osiris::CryptManager, true >, ::osiris::PythonWrapper< ::osiris::StaticSingleton< osiris::CryptManager, true > > {

    StaticSingleton_less__osiris_scope_CryptManager_comma__true__greater__wrapper( )
    : ::osiris::StaticSingleton<osiris::CryptManager, true>( )
      , ::osiris::PythonWrapper< ::osiris::StaticSingleton< osiris::CryptManager, true > >(){
        // null constructor
    
    }

    static boost::python::object instance(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::CryptManager * result = ::osiris::StaticSingleton<osiris::CryptManager, true>::instance();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::reference_existing_object > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::CryptManager * >( result ) );
    }

};

void register_CryptManagerSingleton_class(){

    ::boost::python::class_< StaticSingleton_less__osiris_scope_CryptManager_comma__true__greater__wrapper, ::boost::noncopyable >( "CryptManagerSingleton", ::boost::python::no_init )    
        .def( ::boost::python::init< >() )    
        .def( 
            "instance"
            , (boost::python::object (*)(  ))( &StaticSingleton_less__osiris_scope_CryptManager_comma__true__greater__wrapper::instance ) )    
        .staticmethod( "instance" );

}
