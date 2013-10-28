// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "portalstransaction.h"
#include "portalstransaction.pypp.hpp"

namespace bp = boost::python;

static boost::python::object getID_a2f2a17470c82eed20befbc6dff6cedf( ::osiris::PortalsTransaction const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.getID();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDatabase_6d12deb17010b8bc2a4fa6772c111e42( ::osiris::PortalsTransaction const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::IPortalDatabase> result = inst.getDatabase();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void setExclusiveAccess_9855e1d7a28f1fd71b0a8a7d39191506( ::osiris::PortalsTransaction & inst, bool exclusiveAccess ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setExclusiveAccess(exclusiveAccess);
    __pythreadSaver.restore();
}

void register_PortalsTransaction_class(){

    { //::osiris::PortalsTransaction
        typedef ::boost::python::class_< ::osiris::PortalsTransaction, ::boost::noncopyable > PortalsTransaction_exposer_t;
        PortalsTransaction_exposer_t PortalsTransaction_exposer = PortalsTransaction_exposer_t( "PortalsTransaction", ::boost::python::init< ::boost::shared_ptr< osiris::Portal::DatabaseLockData >, ::boost::shared_ptr< osiris::IPortalDatabase > >(( ::boost::python::arg("lockData"), ::boost::python::arg("database") )) );
        ::boost::python::scope PortalsTransaction_scope( PortalsTransaction_exposer );
        { //::osiris::PortalsTransaction::getID
        
            typedef boost::python::object ( *getID_function_type )( ::osiris::PortalsTransaction const & );
            
            PortalsTransaction_exposer.def( 
                "getID"
                , getID_function_type( &getID_a2f2a17470c82eed20befbc6dff6cedf ) );
        
        }
        { //::osiris::PortalsTransaction::getDatabase
        
            typedef boost::python::object ( *getDatabase_function_type )( ::osiris::PortalsTransaction const & );
            
            PortalsTransaction_exposer.def( 
                "getDatabase"
                , getDatabase_function_type( &getDatabase_6d12deb17010b8bc2a4fa6772c111e42 ) );
        
        }
        { //::osiris::PortalsTransaction::setExclusiveAccess
        
            typedef void ( *setExclusiveAccess_function_type )( ::osiris::PortalsTransaction &,bool );
            
            PortalsTransaction_exposer.def( 
                "setExclusiveAccess"
                , setExclusiveAccess_function_type( &setExclusiveAccess_9855e1d7a28f1fd71b0a8a7d39191506 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("exclusiveAccess") ) );
        
        }
        { //property "id"[fget=::osiris::PortalsTransaction::getID]
        
            typedef ::osiris::uint32 ( ::osiris::PortalsTransaction::*fget )(  ) const;
            
            PortalsTransaction_exposer.add_property( 
                "id"
                , fget( &::osiris::PortalsTransaction::getID )
                , "get property, built on top of \"osiris::uint32 osiris::PortalsTransaction::getID() const [member function]\"" );
        
        }
        { //property "database"[fget=::osiris::PortalsTransaction::getDatabase]
        
            typedef ::boost::shared_ptr<osiris::IPortalDatabase> ( ::osiris::PortalsTransaction::*fget )(  ) const;
            
            PortalsTransaction_exposer.add_property( 
                "database"
                , fget( &::osiris::PortalsTransaction::getDatabase )
                , "get property, built on top of \"boost::shared_ptr<osiris::IPortalDatabase> osiris::PortalsTransaction::getDatabase() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::PortalsTransaction > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::PortalsTransaction >, boost::shared_ptr< ::osiris::Object > >();
    }

}