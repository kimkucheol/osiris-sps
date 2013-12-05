// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "ihttpdirectory.h"
#include "datetime.h"
#include "httppath.h"
#include "httpsessionstate.h"
#include "httpenumerateddirectorycallback.h"
#include "httpdirectorycallback.h"
#include "httpphysicaldirectory.h"
#include "httprootdirectory.h"
#include "httpvirtualdirectory.h"
#include "ihttpdirectory.pypp.hpp"

namespace bp = boost::python;

struct IHttpDirectory_wrapper : ::osiris::IHttpDirectory, ::osiris::PythonWrapper< ::osiris::IHttpDirectory > {

    IHttpDirectory_wrapper(::osiris::String const & name )
    : ::osiris::IHttpDirectory( boost::ref(name) )
      , ::osiris::PythonWrapper< ::osiris::IHttpDirectory >(){
        // constructor
    
    }

    static boost::python::object isActive( ::osiris::IHttpDirectory const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.isActive();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getRestriction( ::osiris::IHttpDirectory const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHttpDirectory::Restrictions result = inst.getRestriction();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getName( ::osiris::IHttpDirectory const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::String const & result = inst.getName();
        __pythreadSaver.restore();
        typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
        return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::String const & >( result ) );
    }

    static boost::python::object getParent( ::osiris::IHttpDirectory const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IHttpDirectory> result = inst.getParent();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getPath( ::osiris::IHttpDirectory const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HttpPath result = inst.getPath();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual ::boost::shared_ptr< osiris::HttpSessionState > createSessionState( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::TimeDuration const & duration ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_createSessionState = this->get_override( "createSessionState" ) )
            return func_createSessionState( session, boost::ref(duration) );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::createSessionState( session, boost::ref(duration) );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSessionState > default_createSessionState( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::TimeDuration const & duration ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::createSessionState( session, boost::ref(duration) );
    }

    virtual bool process( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_process = this->get_override( "process" ) )
            return func_process( session, boost::ref(path) );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::process( session, boost::ref(path) );
        }
    }
    
    bool default_process( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::process( session, boost::ref(path) );
    }

    virtual bool handle( ::boost::shared_ptr< osiris::HttpSession > session, ::osiris::HttpPath const & path ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        ::osiris::PythonOverride func_handle = this->get_override( "handle" );
        return func_handle( session, boost::ref(path) );
    }

    static boost::python::object addDirectory( ::osiris::IHttpDirectory & inst, ::boost::shared_ptr< osiris::IHttpDirectory > directory ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.addDirectory(directory);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getDirectory( ::osiris::IHttpDirectory const & inst, ::osiris::String const & name ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::IHttpDirectory> result = inst.getDirectory(name);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual ::osiris::String getSessionCookie( ::boost::shared_ptr< osiris::HttpSession > session ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSessionCookie = this->get_override( "getSessionCookie" ) )
            return func_getSessionCookie( session );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::getSessionCookie( session );
        }
    }
    
    ::osiris::String default_getSessionCookie( ::boost::shared_ptr< osiris::HttpSession > session ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::getSessionCookie( session );
    }

    static boost::python::object hasDirectory( ::osiris::IHttpDirectory const & inst, ::osiris::String const & name ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.hasDirectory(name);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual bool isAccessible( ::boost::shared_ptr< osiris::HttpSession > session ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_isAccessible = this->get_override( "isAccessible" ) )
            return func_isAccessible( session );
        else{
            __pystate.leave();
            return this->::osiris::IHttpDirectory::isAccessible( session );
        }
    }
    
    bool default_isAccessible( ::boost::shared_ptr< osiris::HttpSession > session ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHttpDirectory::isAccessible( session );
    }

    static boost::python::object removeDirectory_ec6e674ac47645d3f33925238eb4fa81( ::osiris::IHttpDirectory & inst, ::boost::shared_ptr< osiris::IHttpDirectory > directory ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.removeDirectory(directory);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object removeDirectory_964e6fdc00c45b9783c4e5c9f62d01b8( ::osiris::IHttpDirectory & inst, ::osiris::String const & name ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.removeDirectory(name);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void setActive( ::osiris::IHttpDirectory & inst, bool active ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setActive(active);
        __pythreadSaver.restore();
    }

    static void setRestriction( ::osiris::IHttpDirectory & inst, ::osiris::IHttpDirectory::Restrictions restriction ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setRestriction(restriction);
        __pythreadSaver.restore();
    }

};

void register_IHttpDirectory_class(){

    { //::osiris::IHttpDirectory
        typedef ::boost::python::class_< IHttpDirectory_wrapper, ::boost::noncopyable > IHttpDirectory_exposer_t;
        IHttpDirectory_exposer_t IHttpDirectory_exposer = IHttpDirectory_exposer_t( "IHttpDirectory", ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("name") )) );
        ::boost::python::scope IHttpDirectory_scope( IHttpDirectory_exposer );
        ::boost::python::enum_< ::osiris::IHttpDirectory::Restrictions>("Restrictions")
            .value("drNone", ::osiris::IHttpDirectory::drNone)
            .value("drLocal", ::osiris::IHttpDirectory::drLocal)
            .export_values()
            ;
        { //::osiris::IHttpDirectory::isActive
        
            typedef boost::python::object ( *isActive_function_type )( ::osiris::IHttpDirectory const & );
            
            IHttpDirectory_exposer.def( 
                "isActive"
                , isActive_function_type( &IHttpDirectory_wrapper::isActive ) );
        
        }
        { //::osiris::IHttpDirectory::getRestriction
        
            typedef boost::python::object ( *getRestriction_function_type )( ::osiris::IHttpDirectory const & );
            
            IHttpDirectory_exposer.def( 
                "getRestriction"
                , getRestriction_function_type( &IHttpDirectory_wrapper::getRestriction ) );
        
        }
        { //::osiris::IHttpDirectory::getName
        
            typedef boost::python::object ( *getName_function_type )( ::osiris::IHttpDirectory const & );
            
            IHttpDirectory_exposer.def( 
                "getName"
                , getName_function_type( &IHttpDirectory_wrapper::getName ) );
        
        }
        { //::osiris::IHttpDirectory::getParent
        
            typedef boost::python::object ( *getParent_function_type )( ::osiris::IHttpDirectory const & );
            
            IHttpDirectory_exposer.def( 
                "getParent"
                , getParent_function_type( &IHttpDirectory_wrapper::getParent ) );
        
        }
        { //::osiris::IHttpDirectory::getPath
        
            typedef boost::python::object ( *getPath_function_type )( ::osiris::IHttpDirectory const & );
            
            IHttpDirectory_exposer.def( 
                "getPath"
                , getPath_function_type( &IHttpDirectory_wrapper::getPath ) );
        
        }
        { //::osiris::IHttpDirectory::createSessionState
        
            typedef ::boost::shared_ptr< osiris::HttpSessionState > ( ::osiris::IHttpDirectory::*createSessionState_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::TimeDuration const & ) const;
            typedef ::boost::shared_ptr< osiris::HttpSessionState > ( IHttpDirectory_wrapper::*default_createSessionState_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::TimeDuration const & ) const;
            
            IHttpDirectory_exposer.def( 
                "createSessionState"
                , createSessionState_function_type(&::osiris::IHttpDirectory::createSessionState)
                , default_createSessionState_function_type(&IHttpDirectory_wrapper::default_createSessionState)
                , ( ::boost::python::arg("session"), ::boost::python::arg("duration") ) );
        
        }
        { //::osiris::IHttpDirectory::process
        
            typedef bool ( ::osiris::IHttpDirectory::*process_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::HttpPath const & ) ;
            typedef bool ( IHttpDirectory_wrapper::*default_process_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::HttpPath const & ) ;
            
            IHttpDirectory_exposer.def( 
                "process"
                , process_function_type(&::osiris::IHttpDirectory::process)
                , default_process_function_type(&IHttpDirectory_wrapper::default_process)
                , ( ::boost::python::arg("session"), ::boost::python::arg("path") ) );
        
        }
        { //::osiris::IHttpDirectory::handle
        
            typedef bool ( IHttpDirectory_wrapper::*handle_function_type )( ::boost::shared_ptr< osiris::HttpSession >,::osiris::HttpPath const & ) ;
            
            IHttpDirectory_exposer.def( 
                "handle"
                , handle_function_type( &IHttpDirectory_wrapper::handle )
                , ( ::boost::python::arg("session"), ::boost::python::arg("path") ) );
        
        }
        { //::osiris::IHttpDirectory::addDirectory
        
            typedef boost::python::object ( *addDirectory_function_type )( ::osiris::IHttpDirectory &,::boost::shared_ptr<osiris::IHttpDirectory> );
            
            IHttpDirectory_exposer.def( 
                "addDirectory"
                , addDirectory_function_type( &IHttpDirectory_wrapper::addDirectory )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("directory") ) );
        
        }
        { //::osiris::IHttpDirectory::getDirectory
        
            typedef boost::python::object ( *getDirectory_function_type )( ::osiris::IHttpDirectory const &,::osiris::String const & );
            
            IHttpDirectory_exposer.def( 
                "getDirectory"
                , getDirectory_function_type( &IHttpDirectory_wrapper::getDirectory )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("name") ) );
        
        }
        { //::osiris::IHttpDirectory::getSessionCookie
        
            typedef ::osiris::String ( ::osiris::IHttpDirectory::*getSessionCookie_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) const;
            typedef ::osiris::String ( IHttpDirectory_wrapper::*default_getSessionCookie_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) const;
            
            IHttpDirectory_exposer.def( 
                "getSessionCookie"
                , getSessionCookie_function_type(&::osiris::IHttpDirectory::getSessionCookie)
                , default_getSessionCookie_function_type(&IHttpDirectory_wrapper::default_getSessionCookie)
                , ( ::boost::python::arg("session") ) );
        
        }
        { //::osiris::IHttpDirectory::hasDirectory
        
            typedef boost::python::object ( *hasDirectory_function_type )( ::osiris::IHttpDirectory const &,::osiris::String const & );
            
            IHttpDirectory_exposer.def( 
                "hasDirectory"
                , hasDirectory_function_type( &IHttpDirectory_wrapper::hasDirectory )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("name") ) );
        
        }
        { //::osiris::IHttpDirectory::isAccessible
        
            typedef bool ( ::osiris::IHttpDirectory::*isAccessible_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) ;
            typedef bool ( IHttpDirectory_wrapper::*default_isAccessible_function_type )( ::boost::shared_ptr< osiris::HttpSession > ) ;
            
            IHttpDirectory_exposer.def( 
                "isAccessible"
                , isAccessible_function_type(&::osiris::IHttpDirectory::isAccessible)
                , default_isAccessible_function_type(&IHttpDirectory_wrapper::default_isAccessible)
                , ( ::boost::python::arg("session") ) );
        
        }
        { //::osiris::IHttpDirectory::removeDirectory
        
            typedef boost::python::object ( *removeDirectory_function_type )( ::osiris::IHttpDirectory &,::boost::shared_ptr<osiris::IHttpDirectory> );
            
            IHttpDirectory_exposer.def( 
                "removeDirectory"
                , removeDirectory_function_type( &IHttpDirectory_wrapper::removeDirectory_ec6e674ac47645d3f33925238eb4fa81 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("directory") ) );
        
        }
        { //::osiris::IHttpDirectory::removeDirectory
        
            typedef boost::python::object ( *removeDirectory_function_type )( ::osiris::IHttpDirectory &,::osiris::String const & );
            
            IHttpDirectory_exposer.def( 
                "removeDirectory"
                , removeDirectory_function_type( &IHttpDirectory_wrapper::removeDirectory_964e6fdc00c45b9783c4e5c9f62d01b8 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("name") ) );
        
        }
        { //::osiris::IHttpDirectory::setActive
        
            typedef void ( *setActive_function_type )( ::osiris::IHttpDirectory &,bool );
            
            IHttpDirectory_exposer.def( 
                "setActive"
                , setActive_function_type( &IHttpDirectory_wrapper::setActive )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("active") ) );
        
        }
        { //::osiris::IHttpDirectory::setRestriction
        
            typedef void ( *setRestriction_function_type )( ::osiris::IHttpDirectory &,::osiris::IHttpDirectory::Restrictions );
            
            IHttpDirectory_exposer.def( 
                "setRestriction"
                , setRestriction_function_type( &IHttpDirectory_wrapper::setRestriction )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("restriction") ) );
        
        }
        { //property "restriction"[fget=::osiris::IHttpDirectory::getRestriction, fset=::osiris::IHttpDirectory::setRestriction]
        
            typedef ::osiris::IHttpDirectory::Restrictions ( ::osiris::IHttpDirectory::*fget )(  ) const;
            typedef void ( ::osiris::IHttpDirectory::*fset )( ::osiris::IHttpDirectory::Restrictions ) ;
            
            IHttpDirectory_exposer.add_property( 
                "restriction"
                , fget( &::osiris::IHttpDirectory::getRestriction )
                , fset( &::osiris::IHttpDirectory::setRestriction )
                , "get\\set property, built on top of \"osiris::IHttpDirectory::Restrictions osiris::IHttpDirectory::getRestriction() const [member function]\" and \"void osiris::IHttpDirectory::setRestriction(osiris::IHttpDirectory::Restrictions restriction) [member function]\"" );
        
        }
        { //property "name"[fget=::osiris::IHttpDirectory::getName]
        
            typedef ::osiris::String const & ( ::osiris::IHttpDirectory::*fget )(  ) const;
            
            IHttpDirectory_exposer.add_property( 
                "name"
                , ::boost::python::make_function( 
                      fget( &::osiris::IHttpDirectory::getName )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::String const & osiris::IHttpDirectory::getName() const [member function]\"" );
        
        }
        { //property "parent"[fget=::osiris::IHttpDirectory::getParent]
        
            typedef ::boost::shared_ptr<osiris::IHttpDirectory> ( ::osiris::IHttpDirectory::*fget )(  ) const;
            
            IHttpDirectory_exposer.add_property( 
                "parent"
                , fget( &::osiris::IHttpDirectory::getParent )
                , "get property, built on top of \"boost::shared_ptr<osiris::IHttpDirectory> osiris::IHttpDirectory::getParent() const [member function]\"" );
        
        }
        { //property "path"[fget=::osiris::IHttpDirectory::getPath]
        
            typedef ::osiris::HttpPath ( ::osiris::IHttpDirectory::*fget )(  ) const;
            
            IHttpDirectory_exposer.add_property( 
                "path"
                , fget( &::osiris::IHttpDirectory::getPath )
                , "get property, built on top of \"osiris::HttpPath osiris::IHttpDirectory::getPath() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::IHttpDirectory > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IHttpDirectory >, boost::shared_ptr< ::boost::noncopyable_::noncopyable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IHttpDirectory >, boost::shared_ptr< ::osiris::Object > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::IHttpDirectory >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::IHttpDirectory > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpDirectoryCallback >, boost::shared_ptr< ::osiris::IHttpDirectory > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpPhysicalDirectory >, boost::shared_ptr< ::osiris::IHttpDirectory > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpEnumeratedDirectoryCallback >, boost::shared_ptr< ::osiris::IHttpDirectory > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpRootDirectory >, boost::shared_ptr< ::osiris::IHttpDirectory > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::HttpVirtualDirectory >, boost::shared_ptr< ::osiris::IHttpDirectory > >();
    }

}
