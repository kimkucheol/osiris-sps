// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "isearchoptions.h"
#include "idesearchparam.h"
#include "searchcalendareventoptions.h"
#include "searchsectionoptions.h"
#include "searchmodeloptions.h"
#include "searchpolloptionoptions.h"
#include "searchtextoptions.h"
#include "searchpostoptions.h"
#include "searchfileoptions.h"
#include "searchtagoptions.h"
#include "searchattachmentoptions.h"
#include "searchinstanceoptions.h"
#include "searchpolloptions.h"
#include "isearchoptions.pypp.hpp"

namespace bp = boost::python;

struct ISearchOptions_wrapper : ::osiris::ISearchOptions, ::osiris::PythonWrapper< ::osiris::ISearchOptions > {

    ISearchOptions_wrapper(::osiris::ISearchOptions const & arg )
    : ::osiris::ISearchOptions( arg )
      , ::osiris::PythonWrapper< ::osiris::ISearchOptions >(){
        // copy constructor
        
    }

    ISearchOptions_wrapper(::osiris::PortalObjectType type )
    : ::osiris::ISearchOptions( type )
      , ::osiris::PythonWrapper< ::osiris::ISearchOptions >(){
        // constructor
    
    }

    static boost::python::object getType( ::osiris::ISearchOptions const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::PortalObjectType result = inst.getType();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    static boost::python::object getActive( ::osiris::ISearchOptions const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getActive();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual ::boost::shared_ptr< osiris::IdeSearchParam > getControl(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getControl = this->get_override( "getControl" ) )
            return func_getControl(  );
        else{
            __pystate.leave();
            return this->::osiris::ISearchOptions::getControl(  );
        }
    }
    
    ::boost::shared_ptr< osiris::IdeSearchParam > default_getControl(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::ISearchOptions::getControl( );
    }

    static void setActive( ::osiris::ISearchOptions & inst, bool active ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setActive(active);
        __pythreadSaver.restore();
    }

};

void register_ISearchOptions_class(){

    { //::osiris::ISearchOptions
        typedef ::boost::python::class_< ISearchOptions_wrapper > ISearchOptions_exposer_t;
        ISearchOptions_exposer_t ISearchOptions_exposer = ISearchOptions_exposer_t( "ISearchOptions", ::boost::python::init< ::osiris::PortalObjectType >(( ::boost::python::arg("type") )) );
        ::boost::python::scope ISearchOptions_scope( ISearchOptions_exposer );
        ::boost::python::implicitly_convertible< ::osiris::PortalObjectType, ::osiris::ISearchOptions >();
        { //::osiris::ISearchOptions::getType
        
            typedef boost::python::object ( *getType_function_type )( ::osiris::ISearchOptions const & );
            
            ISearchOptions_exposer.def( 
                "getType"
                , getType_function_type( &ISearchOptions_wrapper::getType ) );
        
        }
        { //::osiris::ISearchOptions::getActive
        
            typedef boost::python::object ( *getActive_function_type )( ::osiris::ISearchOptions const & );
            
            ISearchOptions_exposer.def( 
                "getActive"
                , getActive_function_type( &ISearchOptions_wrapper::getActive ) );
        
        }
        { //::osiris::ISearchOptions::getControl
        
            typedef ::boost::shared_ptr< osiris::IdeSearchParam > ( ::osiris::ISearchOptions::*getControl_function_type )(  ) ;
            typedef ::boost::shared_ptr< osiris::IdeSearchParam > ( ISearchOptions_wrapper::*default_getControl_function_type )(  ) ;
            
            ISearchOptions_exposer.def( 
                "getControl"
                , getControl_function_type(&::osiris::ISearchOptions::getControl)
                , default_getControl_function_type(&ISearchOptions_wrapper::default_getControl) );
        
        }
        { //::osiris::ISearchOptions::setActive
        
            typedef void ( *setActive_function_type )( ::osiris::ISearchOptions &,bool );
            
            ISearchOptions_exposer.def( 
                "setActive"
                , setActive_function_type( &ISearchOptions_wrapper::setActive )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("active") ) );
        
        }
        { //property "active"[fget=::osiris::ISearchOptions::getActive, fset=::osiris::ISearchOptions::setActive]
        
            typedef bool ( ::osiris::ISearchOptions::*fget )(  ) const;
            typedef void ( ::osiris::ISearchOptions::*fset )( bool ) ;
            
            ISearchOptions_exposer.add_property( 
                "active"
                , fget( &::osiris::ISearchOptions::getActive )
                , fset( &::osiris::ISearchOptions::setActive )
                , "get\\set property, built on top of \"bool osiris::ISearchOptions::getActive() const [member function]\" and \"void osiris::ISearchOptions::setActive(bool active) [member function]\"" );
        
        }
        { //property "type"[fget=::osiris::ISearchOptions::getType]
        
            typedef ::osiris::PortalObjectType ( ::osiris::ISearchOptions::*fget )(  ) const;
            
            ISearchOptions_exposer.add_property( 
                "type"
                , fget( &::osiris::ISearchOptions::getType )
                , "get property, built on top of \"osiris::PortalObjectType osiris::ISearchOptions::getType() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ISearchOptions >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::ISearchOptions > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ISearchOptions >, boost::shared_ptr< ::osiris::Object > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchCalendarEventOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchSectionOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchModelOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchPollOptionOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchTextOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchPostOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchFileOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchTagOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchAttachmentOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchInstanceOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::SearchPollOptions >, boost::shared_ptr< ::osiris::ISearchOptions > >();
    }

}
