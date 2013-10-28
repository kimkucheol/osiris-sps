// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "filelogger.h"
#include "filelogger.pypp.hpp"

namespace bp = boost::python;

struct FileLogger_wrapper : ::osiris::FileLogger, ::osiris::PythonWrapper< ::osiris::FileLogger > {

    FileLogger_wrapper(::osiris::String const & filename=osiris::String::EMPTY )
    : ::osiris::FileLogger( boost::ref(filename) )
      , ::osiris::PythonWrapper< ::osiris::FileLogger >(){
        // constructor
    
    }

    static boost::python::object getLogTimestamp( ::osiris::FileLogger const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getLogTimestamp();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getLogLevel( ::osiris::FileLogger const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getLogLevel();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void log( ::boost::shared_ptr< osiris::LogMessage > message ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_log = this->get_override( "log" ) )
            func_log( message );
        else{
            __pystate.leave();
            this->::osiris::FileLogger::log( message );
        }
    }
    
    void default_log( ::boost::shared_ptr< osiris::LogMessage > message ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::FileLogger::log( message );
    }

    static boost::python::object open( ::osiris::FileLogger & inst, ::osiris::String const & filename ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.open(filename);
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static void setLogLevel( ::osiris::FileLogger & inst, bool logLevel ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setLogLevel(logLevel);
        __pythreadSaver.restore();
    }

    static void setLogTimestamp( ::osiris::FileLogger & inst, bool logTimestamp ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setLogTimestamp(logTimestamp);
        __pythreadSaver.restore();
    }

};

void register_FileLogger_class(){

    { //::osiris::FileLogger
        typedef ::boost::python::class_< FileLogger_wrapper, ::boost::noncopyable > FileLogger_exposer_t;
        FileLogger_exposer_t FileLogger_exposer = FileLogger_exposer_t( "FileLogger", ::boost::python::no_init );
        ::boost::python::scope FileLogger_scope( FileLogger_exposer );
        FileLogger_exposer.def( ::boost::python::init< ::boost::python::optional< ::osiris::String const & > >(( ::boost::python::arg("filename")=osiris::String::EMPTY )) );
        { //::osiris::FileLogger::getLogTimestamp
        
            typedef boost::python::object ( *getLogTimestamp_function_type )( ::osiris::FileLogger const & );
            
            FileLogger_exposer.def( 
                "getLogTimestamp"
                , getLogTimestamp_function_type( &FileLogger_wrapper::getLogTimestamp ) );
        
        }
        { //::osiris::FileLogger::getLogLevel
        
            typedef boost::python::object ( *getLogLevel_function_type )( ::osiris::FileLogger const & );
            
            FileLogger_exposer.def( 
                "getLogLevel"
                , getLogLevel_function_type( &FileLogger_wrapper::getLogLevel ) );
        
        }
        { //::osiris::FileLogger::log
        
            typedef void ( ::osiris::FileLogger::*log_function_type )( ::boost::shared_ptr< osiris::LogMessage > ) ;
            typedef void ( FileLogger_wrapper::*default_log_function_type )( ::boost::shared_ptr< osiris::LogMessage > ) ;
            
            FileLogger_exposer.def( 
                "log"
                , log_function_type(&::osiris::FileLogger::log)
                , default_log_function_type(&FileLogger_wrapper::default_log)
                , ( ::boost::python::arg("message") ) );
        
        }
        { //::osiris::FileLogger::open
        
            typedef boost::python::object ( *open_function_type )( ::osiris::FileLogger &,::osiris::String const & );
            
            FileLogger_exposer.def( 
                "open"
                , open_function_type( &FileLogger_wrapper::open )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("filename") ) );
        
        }
        { //::osiris::FileLogger::setLogLevel
        
            typedef void ( *setLogLevel_function_type )( ::osiris::FileLogger &,bool );
            
            FileLogger_exposer.def( 
                "setLogLevel"
                , setLogLevel_function_type( &FileLogger_wrapper::setLogLevel )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("logLevel") ) );
        
        }
        { //::osiris::FileLogger::setLogTimestamp
        
            typedef void ( *setLogTimestamp_function_type )( ::osiris::FileLogger &,bool );
            
            FileLogger_exposer.def( 
                "setLogTimestamp"
                , setLogTimestamp_function_type( &FileLogger_wrapper::setLogTimestamp )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("logTimestamp") ) );
        
        }
        { //property "logTimestamp"[fget=::osiris::FileLogger::getLogTimestamp, fset=::osiris::FileLogger::setLogTimestamp]
        
            typedef bool ( ::osiris::FileLogger::*fget )(  ) const;
            typedef void ( ::osiris::FileLogger::*fset )( bool ) ;
            
            FileLogger_exposer.add_property( 
                "logTimestamp"
                , fget( &::osiris::FileLogger::getLogTimestamp )
                , fset( &::osiris::FileLogger::setLogTimestamp )
                , "get\\set property, built on top of \"bool osiris::FileLogger::getLogTimestamp() const [member function]\" and \"void osiris::FileLogger::setLogTimestamp(bool logTimestamp) [member function]\"" );
        
        }
        { //property "logLevel"[fget=::osiris::FileLogger::getLogLevel, fset=::osiris::FileLogger::setLogLevel]
        
            typedef bool ( ::osiris::FileLogger::*fget )(  ) const;
            typedef void ( ::osiris::FileLogger::*fset )( bool ) ;
            
            FileLogger_exposer.add_property( 
                "logLevel"
                , fget( &::osiris::FileLogger::getLogLevel )
                , fset( &::osiris::FileLogger::setLogLevel )
                , "get\\set property, built on top of \"bool osiris::FileLogger::getLogLevel() const [member function]\" and \"void osiris::FileLogger::setLogLevel(bool logLevel) [member function]\"" );
        
        }
    }

}